/*
	The MIT License (MIT)

	Copyright (c) 2008-2019, Charles Karney (original code and GeographicLib)
	Copyright (c) 2020, Francesco Raviglione, Marco Malinverno (C adapation of the UTMUTS module)

	Permission is hereby granted, free of charge, to any person
	obtaining a copy of this software and associated documentation
	files (the "Software"), to deal in the Software without
	restriction, including without limitation the rights to use, copy,
	modify, merge, publish, distribute, sublicense, and/or sell copies
	of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
	NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
	DEALINGS IN THE SOFTWARE.
*/

#ifndef UTMUPS_GEOLIB_H_INCLUDED
#define UTMUPS_GEOLIB_H_INCLUDED

#include "float.h"
#include "inttypes.h"

// Acting as an invalid value (like Math::NaN in C++)
#define COORD_NAN DBL_MAX

// World Geodic System 1984 constants
// These constants come from "Constants.hpp" in the full C++ GeographicLib
#define WGS84_a 6378137
// For WGS84_f see UTMUPS_WGS84_f()
#define UTM_k0 ((double) 0.9996)

/**
 * This documentation comes from the original GeographicLib one.
 * In this model we bring together the UTM and UPS coordinates systems.
 * The UTM divides the earth between latitudes -80 deg and +84 deg
 * into 60 zones numbered 1 thru 60.  Zone assign zone number 0 to the UPS
 * regions, covering the two poles.  Within UTMUPS, non-negative zone
 * numbers refer to one of the "physical" zones, 0 for UPS and [1, 60] for
 * UTM.  Negative "pseudo-zone" numbers are used to select one of the
 * physical zones.
 **********************************************************************/
typedef enum zonespec {
  /**
   * The smallest pseudo-zone number.
   **********************************************************************/
  MINPSEUDOZONE = -4,
  /**
   * A marker for an undefined or invalid zone.  Equivalent to NaN.
   **********************************************************************/
  INVALID = -4,
  /**
   * If a coordinate already include zone information (e.g., it is an MGRS
   * coordinate), use that, otherwise apply the UTMUPS::STANDARD rules.
   **********************************************************************/
  MATCH = -3,
  /**
   * Apply the standard rules for UTM zone assigment extending the UTM zone
   * to each pole to give a zone number in [1, 60].  For example, use UTM
   * zone 38 for longitude in [42&deg;, 48&deg;).  The rules include the
   * Norway and Svalbard exceptions.
   **********************************************************************/
  UTM = -2,
  /**
   * Apply the standard rules for zone assignment to give a zone number in
   * [0, 60].  If the latitude is not in [&minus;80&deg;, 84&deg;), then
   * use UTMUPS::UPS = 0, otherwise apply the rules for UTMUPS::UTM.  The
   * tests on latitudes and longitudes are all closed on the lower end open
   * on the upper.  Thus for UTM zone 38, latitude is in [&minus;80&deg;,
   * 84&deg;) and longitude is in [42&deg;, 48&deg;).
   **********************************************************************/
  STANDARD = -1,
  /**
   * The largest pseudo-zone number.
   **********************************************************************/
  MAXPSEUDOZONE = -1,
  /**
   * The smallest physical zone number.
   **********************************************************************/
  MINZONE = 0,
  /**
   * The zone number used for UPS
   **********************************************************************/
  UPS = 0,
  /**
   * The smallest UTM zone number.
   **********************************************************************/
  MINUTMZONE = 1,
  /**
   * The largest UTM zone number.
   **********************************************************************/
  MAXUTMZONE = 60,
  /**
   * The largest physical zone number.
   **********************************************************************/
  MAXZONE = 60,
} zonespec_t;

// Errors which can be generated by the functions in this module
// This is an alternative to the exception mechanism, which is available, instead, in C++
enum UTMUPS_errors {
	UTMUPS_OK=0,
	ERR_LAT_OUTOFRANGE=1,
	ERR_ILLEGALZONE=2,
	ERR_LON_FARFROMCENTER=3,
	ERR_LAT_FARFROMPOLE=4,
	ERR_OUTOFLEGALRANGE=5,
	ERR_TMERC_UNINITIALIZED=100,
	ERR_PSTER_UNINITIALIZED=200,
  ERR_LATLON_NULLPTR=300,
};

// Default values
#define SETZONE_DEFAULT STANDARD
#define MGRSLIMITS_DEFAULT 0

// We consider here a GeographicLib compilation with GEOGRAPHICLIB_PRECISION == 2 (default in C++ GeographicLib)
#define MAXPOW_ 6

// Structure to store the data of what originally was a TransverseMercator object in C++
typedef struct {
	int maxpow_;
    int numit_;
    double _a, _f, _k0, _e2, _es, _e2m,  _c, _n;
    // _alp[0] and _bet[0] are unused
    double _a1, _b1, _alp[MAXPOW_ + 1], _bet[MAXPOW_ + 1];

    // Additional flag to check if the structure was actually initialized properly
    // Should be = UINT8_MAX if everything has been initialized
    uint8_t isinit;
} transverse_mercator_t;

// Structure to store the data of what originally was a PolarStereographic object in C++
typedef struct {
	double _a, _f, _e2, _es, _e2m, _c;
    double _k0;
} polar_stereographic_t;

transverse_mercator_t UTMUPS_init_TransverseMercator(double a, double f, double k0);
// This function is the equivalent of GreographicLib C++'s "static const TransverseMercator& UTM();" in TransverseMercator.hpp
transverse_mercator_t UTMUPS_init_UTM_TransverseMercator(void);

polar_stereographic_t UTMUPS_init_PolarStereographic(double a, double f, double k0);
// This function is the equivalent of GreographicLib C++'s "static const PolarStereographic& UPS();" in PolarStereographic.hpp
polar_stereographic_t UTMUPS_init_UPS_PolarStereographic(void);

// Checks if easting or northing are outside standard ranges.
// Returns 1 is everything is ok, while it returns 0 in case easting or northing are outside standard ranges.
// If printerr is 1, an additional error message is printed to stderr.
uint8_t UTMUPS_CheckCoords(uint8_t utmp, uint8_t northp, double x, double y, double mgrslimits, uint8_t printerr);

int PolarStereographic_Forward(polar_stereographic_t *polsterp, uint8_t northp, double lat, double lon,
	double *x, double *y,
	double *gamma, double *k);
int TransverseMercator_Forward(transverse_mercator_t *transmercp, double lon0, double lat, double lon,
	double *x, double *y,
	double *gamma,double *k);
int TransverseMercator_Reverse(transverse_mercator_t *transmercp, double lon0, double x, double y,
  double *lat, double *lon,
  double *gamma,double *k);

// Function returning the WGS84_f constant value
double UTMUPS_WGS84_f(void);

int UTMUPS_StandardZone(double lat, double lon, zonespec_t setzone);

// Main function for LonLat -> UTM conversion
// As an additional argument, it takes either NULL or a pointer to a transverse_mercator_t structure
// If NULL, a proper transverse_mercator_t will be initialized with UTMUPS_init_UTM_TransverseMercator()
// If non-NULL, it should be a structure previously initialized with UTMUPS_init_UTM_TransverseMercator();
//  this allows the user to inizialize a proper transverse_mercator_t structure only once.
// The default value for setzone is SETZONE_DEFAULT
// The default value for mgrslimits is MGRSLIMITS_DEFAULT (being it a bool in the original C++ version,
//  it can accept here either 0 (false) or 1 (true))
int UTMUPS_Forward(double lat, double lon,
	int *zone, uint8_t *northp, double *x, double *y,
	double *gamma, double *k,
	int setzone, uint8_t mgrslimits,
	transverse_mercator_t *preinit_transverse_mercator);

#endif // UTMUPS_GEOLIB_H_INCLUDED

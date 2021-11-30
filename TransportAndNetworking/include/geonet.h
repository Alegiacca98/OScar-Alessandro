//
// Created by Carlos Mateo Risma Carletti on 06/05/21.
// Updated by Francesco Raviglione in November 2021
//

#ifndef OCABS_GEONET_H
#define OCABS_GEONET_H

#include <cstdint>
#include <map>
#include <set>
#include <mutex>
#include "basicHeader.h"
#include "commonHeader.h"
#include "shbHeader.h"
#include "gbcHeader.h"
#include "gpsc.h"

#define GN_ETHERTYPE 0x8947

class GeoNet {
	public:
		GeoNet();

		~GeoNet();

		void setStationProperties(unsigned long fixed_stationid,long fixed_stationtype);
		void setStationID(unsigned long fixed_stationid);
		void setStationType(long fixed_stationtype);
		void setVDP(VDPGPSClient* vdp);
		void setSocketTx(int socket_tx_descr,int ifindex,uint8_t srcmac[6]);
		GNDataConfirm_t sendGN(GNDataRequest_t dataRequest);

	private:
		GNDataConfirm_t sendSHB(GNDataRequest_t dataRequest,commonHeader commonHeader,basicHeader basicHeader,GNlpv_t longPV);
		GNDataConfirm_t sendGBC(GNDataRequest_t dataRequest,commonHeader commonHeader, basicHeader basicHeader,GNlpv_t longPV);
		uint8_t encodeLT (double seconds);
		bool isInsideGeoArea(GeoArea_t geoArea);
		void MakeManagedconfiguredAddress (uint8_t addr[8], uint8_t ITSType, uint8_t out_addr[8]);

		uint16_t m_seqNumber; //! ETSI EN 302 636-4-1 [8.3]

		uint8_t m_GNAddress[8];

		int m_socket_tx=-1;

		VDPGPSClient* m_vdp;
		StationID_t m_station_id;
		StationType_t m_stationtype;

		// OCABS-specific attributes
		uint8_t m_mac_src[6] = {0};
		int m_ifindex=-1;

		//ETSI 302 636-4-1 ANNEX H: GeoNetworking protocol constans
		uint8_t m_GnLocalGnAddr[6] = {0};
		uint8_t m_GnLocalAddrCongMethod = 1; //! MANAGED
		uint8_t m_GnPtotocolVersion = 1;
		bool m_GnIsMobile=true; //!To set wether if Mobile(1) or Stationary(0)
		uint8_t m_GnIfType = 1;
		double m_GnMinUpdateFrequencyEPV = 1000;
		uint32_t m_GnPaiInterval = 80;
		uint32_t m_GnMaxSduSize = 1398;
		uint8_t m_GnMaxGeoNetworkingHeaderSize = 88;
		uint8_t m_GnLifeTimeLocTE = 20; //! seconds
		uint8_t m_GnSecurity = 0; //!Disabled
		uint8_t m_GnSnDecapResultHandling = 0; //!STRICT
		uint8_t m_GnLocationServiceMaxRetrans = 10;
		uint16_t m_GnLocationServiceRetransmitTimer = 1000;
		uint16_t m_GnLocationServicePacketBufferSize = 1024;
		uint16_t m_GnBeaconServiceRetransmitTimer = 3000;
		uint16_t m_GnBeaconServiceMaxJItter = m_GnBeaconServiceRetransmitTimer/4;
		uint8_t m_GnDefaultHopLimit = 10;
		uint8_t m_GnDPLLength = 8;
		uint16_t m_GNMaxPacketLifetime = 600;
		uint8_t m_GnDefaultPacketLifetime = 60 ; // seconds (0xf2)
		uint16_t m_GNMaxPacketDataRate = 100;
		uint16_t m_GNMaxPacketDataRateEmaBeta = 90;
		uint16_t m_GNMaxGeoAreaSize = 10;
		uint16_t m_GNMinPacketRepetitionInterval = 100;
		uint16_t m_GNNonAreaForwardingAlgorithm = 1; //GREEDY
		uint16_t m_GNAreaForwardingAlgorithm = 1;
		uint16_t m_GNCbfMinTime = 1;
		uint16_t m_GNCbfMaxTime = 100;
		uint16_t m_GnDefaultMaxCommunicationRange = 1000;
		uint16_t m_GnBroadcastCBFDefSectorAngle = 30;
		uint16_t m_GnUcForwardingPacketBufferSize = 256;
		uint16_t m_GnBcForwardingPacketBufferSize = 1024;
		uint16_t m_FnCbfPacketBufferSize = 256;
		uint16_t m_GnDefaultTrafficClass = 0;
		bool m_RSU_epv_set = false;
};

#endif // OCABS_GEONET_H
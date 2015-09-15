//////////////////////////////////////////////////////////////
//
//	Copyright Artistic Licence Holdings Ltd 1998-2013
//	Author:	Wayne Howell
//	Email:	Support@ArtisticLicence.com
//
//	This file contains all key defines and structures
//	 for Art-Net
//
//      Created 18/6/98
//	Updated 21/7/01 WDH
//       New Oem codes added
//	Updated 16/8/01 WDH
//	 Firmware upload added
//	Updated 18/2/02 WDH
//	 Art-Net V1.4n updates added
//      Updated 22/5/02 to allocate ADB OEM block
//      Updated 2/8/02 to allocate Ether-Lynx OEM block
//      Updated 12/8/02 to allocate Maxxyz DMX Box
//	Updated 29/8/02 to allocate Enttec an OEM block
//	Updated 13/9/02 for V1.4M document including:
//		ArtPollServerReply
//		IP programming
//		RDM
//	Updated 26/3/03 to add IES OEM codes
//	updated 20/5/03 to add EDI code
//	updated 19/12/03 to add Goldstage code & RDM versions
//	         AL products
//	updated 12/3/04 to add LSC codes
//	updated 17/6/04 Added Invisible Rival
//	updated 14/10/04 Added Bigfoot
//      updated 12/12/04 Added packet counter defines
//	updated 10/01/07 Added RDM Standard V1.0 support
//	updated 11/11/07 Added more oem codes
//	updated 20/11/07 Added more oem codes
//	updated 20/11/09 Added Diagnostics and command packets
//	updated 2/9/10 Added Art-Net Time Code packets
//	updated 15/11/10 Corrected datalength in trigger packet
//		Renamed to Payload to force compile error
//	updated 22/07/11 Implemented Art-Net 3
//	updated 14/10/11 Clean up of some field name conventions
//	updated 4/11/11 Added OpNzs
//      updated 3/6/13 (DllRevision = 2.008). OSC added
//
//
//////////////////////////////////////////////////////////////

#ifndef _ARTNET_H_
#define _ARTNET_H_


#include "Art-NetOemCodes.h"

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;
// 8, 16, 32 bit fields

// Defines used to select output protocol in ArtNetAcn.dll

#define ProtocolArtNetAutomatic	0	//send Art-Net to unicast array as defined in spec
#define ProtocolArtNetManual	1	//send Art-Net to TxIpManual
#define ProtocolsAcnAutomatic	2	//send sAcn to multicast address
#define ProtocolsAcnManual	3	//send sAcn to TxIpManual
#define ProtocolShowNet		4	//send ShowNet to TxIpManual
#define ProtocolKiNetDmxOut	5	//send Kinet v1 to TxIpManual
#define ProtocolKiNetPortOut	6      	//send Kinet v2 to TxIpManual

#define NETID0 2
	// Primary 2.x.y.z
#define NETID1 10
	// Secondary 10.x.y.z

#define DefaultPort 0x1936

#define ProtocolVersion 14
	// Art-Net protocol version.

// OpCodes (byte-swapped)

#define OpPoll   	        0x2000 // Poll
#define OpPollReply   	  	0x2100 // ArtPollReply
#define OpPollFpReply    	0x2200 // Additional advanced reply
#define OpDiagData	    	0x2300 // Diagnostics data message
#define OpCommand	    	0x2400 // Send command / property strings.

#define OpOutput 	       	0x5000 // Zero start code dmx packets
#define OpDmx	 	       	0x5000 // Zero start code dmx packets
#define OpNzs	 	       	0x5100 // Non-Zero start code dmx packets (excluding RDM)
#define OpAddress 	  	0x6000 // Program Node Settings
#define OpInput 	        0x7000 // Setup DMX input enables

#define OpTodRequest        	0x8000 // Requests RDM Discovery ToD
#define OpTodData        	0x8100 // Send RDM Discovery ToD
#define OpTodControl        	0x8200 // Control RDM Discovery
#define OpRdm	        	0x8300 // Non-Discovery RDM Message
#define OpRdmSub                0x8400 // Compressed subdevice data

#define OpMedia	        	0x9000 // Streaming data from media server
#define OpMediaPatch        	0x9100 // Coord setup to media server
#define OpMediaControl        	0x9200 // Control media server
#define OpMediaControlReply    	0x9300 // Reply from media server

#define OpTimeCode          	0x9700 // Transports Time Code
#define OpTimeSync          	0x9800 // Time & Date synchronise nodes
#define OpTrigger          	0x9900 // Trigger and macro
#define OpDirectory          	0x9a00 // Request node file directory
#define OpDirectoryReply       	0x9b00 // Send file directory macro

#define OpVideoSetup 	      0xa010 // Setup video scan and font
#define OpVideoPalette 	      0xa020 // Setup colour palette
#define OpVideoData 	      0xa040 // Video Data

#define OpMacMaster 	      0xf000
#define OpMacSlave 	      0xf100
#define OpFirmwareMaster      0xf200 // For sending firmware updates
#define OpFirmwareReply       0xf300 // Node reply during firmware update
#define OpFileTnMaster        0xf400 // Upload user file to node
#define OpFileFnMaster        0xf500 // Download user file from node
#define OpFileFnReply         0xf600 // Ack file packet received from node

#define OpIpProg	      0xf800 // For sending IP programming info.
#define OpIpProgReply	      0xf900 // Node reply during IP programming.


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Style codes for ArtPollReply
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define StyleNode	0	// Responder is a Node (DMX <-> Ethernet Device)
#define StyleController	1	// Lighting console or similar
#define StyleMedia	2	// Media Server such as Video-Map, Hippotizer, RadLight, Catalyst, Pandora's Box
#define StyleRoute	3	// Data Routing device
#define StyleBackup	4	// Data backup / real time player such as Four-Play
#define StyleConfig	5	// Configuration tool such as DMX-Workshop
#define StyleVisual     6       // Visualiser


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Report Codes (Status reports)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define RcDebug		0x0000	// Booted in debug mode (Only used in development
#define RcPowerOk	0x0001	// Power On Tests successful
#define RcPowerFail	0x0002	// Hardware tests failed at Power On
#define RcSocketWr1	0x0003	// Last UDP from Node failed due to truncated length,
						//  Most likely caused by a collision.
#define RcParseFail	0x0004	// Unable to identify last UDP transmission.
						// Check OpCode and packet length
#define RcUdpFail	0x0005	// Unable to open Udp Socket in last transmission attempt
#define RcShNameOk	0x0006	// Confirms that Short Name programming via ArtAddress accepted
#define RcLoNameOk	0x0007	// Confirms that Long Name programming via ArtAddress accepted
#define RcDmxError	0x0008	// DMX512 receive errors detected
#define RcDmxUdpFull	0x0009	// Ran out of internal DMX transmit buffers
				//  Most likely caused by receiving ArtDmx
				//  packets at a rate faster than DMX512 transmit
				//  speed
#define RcDmxRxFull	0x000a	// Ran out of internal DMX rx buffers
#define RcSwitchErr	0x000b	// Rx Universe switches conflict
#define RcConfigErr	0x000c	// Node's hardware configuration is wrong
#define RcDmxShort	0x000d	// DMX output is shorted
#define RcFirmFail	0x000e	// Last firmware upload failed.
#define RcUserFail	0x000f	// User attempted to change physical switches when universe switches locked


// Defines for ArtAddress Command field

#define AcNone          0       // No Action
#define AcCancelMerge   1       // The next ArtDmx packet cancels Node's merge mode
#define AcLedNormal     2       // Node front panel indicators operate normally
#define AcLedMute       3       // Node front panel indicators are muted
#define AcLedLocate     4       // Fast flash all indicators for locate
#define AcResetRxFlags  5       // Reset the receive DMX flags for errors, SI's, Text & Test packets

#define AcMergeLtp0	0x10		// Set Port 0 to merge in LTP.
#define AcMergeLtp1	0x11		// Set Port 1 to merge in LTP.
#define AcMergeLtp2	0x12		// Set Port 2 to merge in LTP.
#define AcMergeLtp3	0x13		// Set Port 3 to merge in LTP.

#define AcMergeHtp0	0x50		// Set Port 0 to merge in HTP. (Default Mode)
#define AcMergeHtp1	0x51		// Set Port 1 to merge in HTP.
#define AcMergeHtp2	0x52		// Set Port 2 to merge in HTP.
#define AcMergeHtp3	0x53		// Set Port 3 to merge in HTP.

#define AcClearOp0	0x90		// Clear all data buffers associated with output port 0
#define AcClearOp1	0x91		// Clear all data buffers associated with output port 1
#define AcClearOp2	0x92		// Clear all data buffers associated with output port 2
#define AcClearOp3	0x93		// Clear all data buffers associated with output port 3


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Indices to Packet Count Array
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define PkOpPoll                0       /* Poll #*/
#define PkOpPollReply           1       /* ArtPollReply #*/
#define PkOpPollFpReply         2       /* Reply from Four-Play (Advanced Reply) #*/
#define PkOpOutput              3       /* DMX Stream #*/
#define PkOpAddress             4       /* Program Node Settings #*/
#define PkOpInput               5       /* Setup DMX input enables #*/
#define PkOpTodRequest          6       /* Requests RDM Discovery ToD #*/
#define PkOpTodData             7       /* Send RDM Discovery ToD #*/
#define PkOpTodControl          8       /* Control RDM Discovery #*/
#define PkOpMedia               9       /* Streaming data from media server #*/
#define PkOpMediaPatch          10      /* Coord setup to media server #*/
#define PkOpMediaControl        11      /* Control media server #*/
#define PkOpMediaControlReply   12      /* Reply from media server #*/
#define PkOpTimeSync            13      /* Time & Date synchronise nodes #*/
#define PkOpTrigger             14      /* Trigger and macro #*/
#define PkOpDirectory           15      /* Request node file directory #*/
#define PkOpDirectoryReply      16      /* Send file directory list #*/
#define PkOpVideoSetup          17 	/* Setup video scan and font #*/
#define PkOpVideoPalette        18 	/* Setup colour palette #*/
#define PkOpVideoData           19      /* Video Data #*/
#define PkOpFirmwareMaster      20      // For sending firmware updates #
#define PkOpFirmwareReply       21      // Node reply during firmware update #
#define PkOpFileTnMaster        22      // Upload user file to node #
#define PkOpFileFnMaster        23      // Download user file from node  #
#define PkOpFileFnReply         24      // Ack file packet received from node  #
#define PkOpIpProg              25      // For sending IP programming info. #
#define PkOpIpProgReply         26      // Node reply during IP programming. #

#define PkOpRdm                 27      /* Non-Discovery RDM Message #*/
#define PkOpRdmSub              28      // Compressed rdm
#define PkOpRdmStd      	29	// ArtRdm - contains RDM Std
#define PkOpRdmDraft      	30	// ArtRdm - contains RDM draft



#define PkErrorStart            31      // DEFINES ABOVE ARE PACKETS, BELOW ARE ERRORS & WARNINGS
#define PkOpRdmBadDec      	32	// ArtRdm - failed to decode draft vs std
#define PkPacketNotUdp          33      // Warning Non UDP packet
#define PkPacketNotArtNet       34      // Warning Udp packet is not Art-Net
#define PkPacketNotIpV4         35      // Warning Non IP V4 packet received

#define PkPacketLimBroad        36      // Warning Limited broadcast Art-Net detected -------------
#define PkPacketNetIdMismatch   37      // Warning Art-Net on different NetId detected -------------
#define PkPacketUnicastArtDmx   38      // Warning Unicast ArtDmx packets detected -------------

#define PkPacketTooLong         39      // Error Udp packet was too long
#define PkPacketUnknownOpCode   40      // Error Undefined packet opcode #
#define PkPacketBadSourceUdp    41      // Error Udp source port wrong
#define PkPacketBadDestUdp      42      // Error Udp dest port wrong
#define PkPacketBadChecksumUdp  43      // Error Udp checksum is zero

#define PkPacketBadOsc          44      // Error is OSC packet
#define PkPacketOscNotAL        45      // Warning: OSC packet is not AL format
#define PkPacketOscRx           46      // OSC packet received

#define PkMax                   47


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Video Specific Defines
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define MaxWinFontChar  	64      // Max char in windows font name
#define MaxFontChar     	256     // Max char in a soft font
#define MaxFontHeight   	16      // Max scan lines per char
#define MaxColourPalette        17      // Max colour entry in palette
#define MaxVideoX       	80      // Max Char across screen
#define MaxVideoY       	50      // Max Lines down screen
#define MaxUserFiles       	400     // Max user files in a node




/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Data array lengths
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define MaxNumPorts 4
#define MaxExNumPorts 32
#define ShortNameLength 18
#define LongNameLength 64
#define PortNameLength 32
#define MaxDataLength 512


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Diagnostics priority Codes
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define	DpLow		0x10
#define	DpMed 		0x40
#define	DpHigh 		0x80
#define	DpCritical 	0xe0
#define	DpVol 		0xf0		//volatile messages are displayed on a caption line in DMX-Workshop, all others are listed in order
#define DpNone		0xff

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Tod Command defines for RDM discovery.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define TodFull		0	// Full Discovery.
#define TodNak		0xff	// ToD not available.

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// RDM discovery control commands.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define AtcNone		0	// No Action.
#define AtcFlush	1	// Force full discovery.

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// RDM Message Processing commands.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define ArProcess		0	// Process Message.

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Sub-Structure for IP and Port
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct {
	uchar IP[4];	// IP address
	ushort Port;	// UDP port	BYTE-SWAPPED MANUALLY
} T_Addr;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Poll request from Server to Node or Server to Server.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtPoll {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpPoll
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar TalkToMe;                 // bit 0 = not used

                                        // bit 1 = 0 then Node only sends ArtPollReply when polled
                                        // bit 1 = 1 then Node sends ArtPollReply when it needs to

                                        // bit 2 = 0 Do not send me disagnostic messages
                                        // bit 2 = 1 Send me diagnostics messages

                                        // bit 3 = 0 (If Bit 2 then) broadcast diagnostics messages
                                        // bit 3 = 1 (If Bit 2 then) unicast diagnostics messages

	uchar Priority;			// Set the lowest priority of diagnostics message that node should send. See DpXxx defines above.
} T_ArtPoll;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ArtPollReply is sent in reply to an ArtPoll. It is always broadcast
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtPollReply {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpPollReply
	T_Addr BoxAddr;                 // 0 if not yet configured

	uchar VersionInfoHi;            // The node's current FIRMWARE VERS hi
	uchar VersionInfoLo;            // The node's current FIRMWARE VERS lo

	uchar NetSwitch;                // Bits 14-8 of the 15 bit universe number are encoded into the bottom 7 bits of this field.
					// This is used in combination with SubSwitch and Swin[] or Swout[] to produce the full universe address.


	uchar SubSwitch;             	// Bits 7-4 of the 15 bit universe number are encoded into the bottom 4 bits of this field.
					// This is used in combination with NetSwitch and Swin[] or Swout[] to produce the full universe address.

	uchar OemHi;
	uchar OemLo;			// Manufacturer code, bit 15 set if
					// extended features avail

	uchar UbeaVersion;              // Firmware version of UBEA

	uchar Status;                             // bit 0 = 0 UBEA not present
                                                  // bit 0 = 1 UBEA present
						  // bit 1 = 0 Not capable of RDM (Uni-directional DMX)
						  // bit 1 = 1 Capable of RDM (Bi-directional DMX)
						  // bit 2 = 0 Booted from flash (normal boot)
						  // bit 2 = 1 Booted from ROM (possible error condition)
                                                  // bit 3 = Not used
                                                  // bit 54 = 00 Universe programming authority unknown
                                                  // bit 54 = 01 Universe programming authority set by front panel controls
                                                  // bit 54 = 10 Universe programming authority set by network
                                                  // bit 76 = 00 Indicators Normal
                                                  // bit 76 = 01 Indicators Locate
                                                  // bit 76 = 10 Indicators Mute



	uchar EstaManLo;		  // ESTA manufacturer id, lo byte
	uchar EstaManHi;		  // ESTA manufacturer id, hi byte

	uchar ShortName[ShortNameLength]; // short name defaults to IP
	uchar LongName[LongNameLength];   // long name
	uchar NodeReport[LongNameLength]; // Text feedback of Node status or errors
					  //  also used for debug info

	uchar NumPortsHi;               // 0
	uchar NumPortsLo;               // 4 If num i/p ports is dif to output ports, return biggest

	uchar PortTypes[MaxNumPorts];   // bit 7 is output
                                        // bit 6 is input
					// bits 0-5 are protocol number (0= DMX, 1=MIDI)
                                        // for DMX-Hub ={0xc0,0xc0,0xc0,0xc0};


        uchar GoodInput[MaxNumPorts];  	// bit 7 is data received
                                        // bit 6 is data includes test packets
                                        // bit 5 is data includes SIP's
					// bit 4 is data includes text
					// bit 3 set is input is disabled
                                        // bit 2 is receive errors
					// bit 1-0 not used, transmitted as zero.
					// Don't test for zero!

	uchar GoodOutput[MaxNumPorts]; 	// bit 7 is data is transmitting
					// bit 6 is data includes test packets
					// bit 5 is data includes SIP's
					// bit 4 is data includes text
					// bit 3 output is merging data.
					// bit 2 set if DMX output short detected on power up
					// bit 1 set if DMX output merge mode is LTP
					// bit 0 not used, transmitted as zero.

	uchar SwIn[MaxNumPorts];   	// Bits 3-0 of the 15 bit universe number are encoded into the low nibble
					// This is used in combination with SubSwitch and NetSwitch to produce the full universe address.
					// THIS IS FOR INPUT - ART-NET or DMX
					// NB ON ART-NET II THESE 4 UNIVERSES WILL BE UNICAST TO.


	uchar SwOut[MaxNumPorts];   	// Bits 3-0 of the 15 bit universe number are encoded into the low nibble
					// This is used in combination with SubSwitch and NetSwitch to produce the full universe address.
					// data belongs
                                        // THIS IS FOR OUTPUT - ART-NET or DMX.
                                        // NB ON ART-NET II THESE 4 UNIVERSES WILL BE UNICAST TO.

	uchar SwVideo;		   	// Low nibble is the value of the video
					// output channel

	uchar SwMacro;		   	// Bit 0 is Macro input 1
					// Bit 7 is Macro input 8


        uchar SwRemote;		   	// Bit 0 is Remote input 1
					// Bit 7 is Remote input 8


	uchar Spare1;              	// Spare, currently zero
	uchar Spare2;              	// Spare, currently zero
	uchar Spare3;              	// Spare, currently zero
	uchar Style;              	// Set to Style code to describe type of equipment

	uchar Mac[6];   	        // Mac Address, zero if info not available

	uchar 	BindIp[4];		// If this unit is part of a larger or modular product, this is the IP of the root device.
	uchar	BindIndex;		// Set to zero if no binding, otherwise this number represents the order of bound devices. A lower number means closer to root device.

	uchar 	Status2;                          // bit 0 = 0 Node does not support web browser
        					  // bit 0 = 1 Node supports web browser configuration	

        					  // bit 1 = 0 Node's IP address is manually configured
        					  // bit 1 = 1 Node's IP address is DHCP configured

        					  // bit 2 = 0 Node is not DHCP capable
                                                  // bit 2 = 1 Node is DHCP capable

                                                  // bit 2-7 not implemented, transmit as zero



        uchar Filler[26];               // Filler bytes, currently zero.

} T_ArtPollReply;


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer zero start code DMX packets
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtDmx {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpOutput
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar Sequence;			// 0 if not used, else 1-255 incrementing sequence number
	uchar Physical;                 // The physical i/p 0-3 that originated this packet. For Debug / info only
	uchar SubUni;                	// The low 8 bits of the 15 bit universe address.
	uchar Net;                	// The high 7 bits of the 15 bit universe address.
	ushort Length;			// BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength];      // Variable length array. First entry is channel 1 level (NOT THE START CODE)
} T_ArtDmx;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer selected non-zero start code DMX packets
// IT MUST NOT BE USED FOR ZERO OR RDM PACKETS or any ESTA reserved start codes
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtNzs {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpOutput
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar Sequence;			// 0 if not used, else 1-255 incrementing sequence number
	uchar StartCode;                // The start code
	uchar SubUni;                	// The low 8 bits of the 15 bit universe address.
	uchar Net;                	// The high 7 bits of the 15 bit universe address.
	ushort Length;			// BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength];
} T_ArtNzs;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer diagnostic data from node to server
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtDiagData {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpDiagData
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar Filler1;
	uchar Priority;                 // The message priority, see DpXxxx defines above.
	uchar Filler2;
	uchar Filler3;
	ushort Length;			// BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength]; 	// Variable size array which is defined as maximum here.
} T_ArtDiagData;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer diagnostic data from node to server
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtCommand {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpCommand
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar EstaManHi;		// ESTA manufacturer id, hi byte
	uchar EstaManLo;		// ESTA manufacturer id, lo byte  // == 0xffff for the global command set
	ushort Length;			// BYTE-SWAPPED MANUALLY. Length of array below. Range 0 - 512
	uchar Data[MaxDataLength];  	// Variable size array which is defined as maximum here. Contains null terminated command text.
} T_ArtCommand;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer settings from server to node
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtAddress {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpAddress
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion

	uchar NetSwitch;		// Bits 14-8 of the 15 bit universe number are encoded into the bottom 7 bits of this field.
					// This is used in combination with SubSwitch and SwIn[] or SwOut[] to produce the full universe address.
					// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
					// Send 0x00 to reset this value to the physical switch setting.
					// Use value 0x7f for no change.


	uchar Filler2;                  // The physical i/p 0-3. For Debug only


	uchar ShortName[ShortNameLength]; // null ignored

	uchar LongName[LongNameLength];   // null ignored

	uchar SwIn[MaxNumPorts];   	// Bits 3-0 of the 15 bit universe number for a given input port are encoded into the bottom 4 bits of this field.
					// This is used in combination with NetSwitch and SubSwitch to produce the full universe address.
					// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
					// Send 0x00 to reset this value to the physical switch setting.
					// Use value 0x7f for no change.
					// Array size is fixed

	uchar SwOut[MaxNumPorts];   	// Bits 3-0 of the 15 bit universe number for a given output port are encoded into the bottom 4 bits of this field.
					// This is used in combination with NetSwitch and SubSwitch to produce the full universe address.
					// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
					// Send 0x00 to reset this value to the physical switch setting.
					// Use value 0x7f for no change.
					// Array size is fixed

	uchar SubSwitch;	   	// Bits 7-4 of the 15 bit universe number are encoded into the bottom 4 bits of this field.
					// This is used in combination with NetSwitch and SwIn[] or SwOut[] to produce the full universe address.
					// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
					// Send 0x00 to reset this value to the physical switch setting.
					// Use value 0x7f for no change.

	uchar SwVideo;		   	// Low nibble is the value of the video
					// output channel
					// Bit 7 hi = use data

	uchar Command;                  // see Acxx definition list



} T_ArtAddress;


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Transmitted by Server to set or test the Node's custom IP settings.
//
// NB. This function is provided for specialist applications. Do not implement this functionality
//     unless really needed!!!
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtIpProg {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpIpProg
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar Filler1;	                // TalkToMe position in ArtPoll
	uchar Filler2;                  // The physical i/p 0-3. For Debug only
	uchar Command;			// Bit fields as follows: (Set to zero to poll for IP info)
							// Bit 7 hi for any programming.
                                                        // Bit 6 hi = enable DHCP (overrides all lower bits.
							// Bit 5-4 not used, set to zero.
							// Bit 3 hi = Return all three paraameters to default. (This bit takes priority).
							// Bit 2 hi = Use custom IP in this packet.
							// Bit 1 hi = Use custom Subnet Mask in this packet.
							// Bit 0 hi = Use custom Port number in this packet. 

	uchar Filler4;			  // Fill to word boundary.
	uchar ProgIpHi;			  // Use this IP if Command.Bit2
	uchar ProgIp2;
	uchar ProgIp1;
	uchar ProgIpLo;

	uchar ProgSmHi;			  // Use this Subnet Mask if Command.Bit1
	uchar ProgSm2;
	uchar ProgSm1;
	uchar ProgSmLo;

	uchar ProgPortHi;		  // Use this Port Number if Command.Bit0
	uchar ProgPortLo;

	uchar Spare1;			  // Set to zero, do not test in receiver.
	uchar Spare2;	
	uchar Spare3;	
	uchar Spare4;	
	uchar Spare5;	
	uchar Spare6;	
	uchar Spare7;
	uchar Spare8;	

} T_ArtIpProg;


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Transmitted by Node in response to ArtIpProg.
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtIpProgReply {
	uchar ID[8];                    // protocol ID = "Art-Net"
	ushort OpCode;                  // == OpIpProgReply
	uchar ProtVerHi;                // 0
	uchar ProtVerLo;                // protocol version, set to ProtocolVersion
	uchar Filler1;
	uchar Filler2;
	uchar Filler3;			  // Fill to word boundary.
	uchar Filler4;			  // Fill to word boundary.

	uchar ProgIpHi;			  // The node's current IP Address
	uchar ProgIp2;
	uchar ProgIp1;
	uchar ProgIpLo;

	uchar ProgSmHi;			  // The Node's current Subnet Mask
	uchar ProgSm2;
	uchar ProgSm1;
	uchar ProgSmLo;

	uchar ProgPortHi;			  // The Node's current Port Number
	uchar ProgPortLo;

	uchar Status;			// Bit 6 set if DHCP enabled
	uchar Spare2;			// Set to zero, do not test in receiver.
	uchar Spare3;	
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;	
	uchar Spare7;	
	uchar Spare8;	

} T_ArtIpProgReply;


#endif



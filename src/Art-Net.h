//////////////////////////////////////////////////////////////
//
// Copyright Artistic Licence Holdings Ltd 1998-2016
// Author:	Wayne Howell
// Email:	Support@ArtisticLicence.com
//
// This file contains all key defines and structures
// for Art-Net
//
// Created 18/6/98
// updated 10/01/07 Added RDM Standard V1.0 support
// updated 20/11/09 Added Diagnostics and command packets
// updated 2/9/10 Added Art-Net Time Code packets
// updated 22/07/11 Implemented Art-Net 3
// updated 4/11/11 Added OpNzs
// updated 3/6/13 (DllRevision = 2.008). OSC added
// updated 18/6/15 (DllRevision = 2.008). ArtSync added
// updated 23/1/16 ArtVlc added.
// updated 1/7/16 for Art-Net 4 changes
//
//////////////////////////////////////////////////////////////

#ifndef _ARTNET_H_
#define _ARTNET_H_

#include "RDM.h"
#include "Art-NetOemCodes.h"

#define uchar unsigned char
#define ushort unsigned short int
#define ulong unsigned int
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
#define OpSync 	 	       	0x5200 // Used for synchronous zero start code packets.
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
#define OpMacSlave 	      		0xf100
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
// Most likely caused by a collision.
#define RcParseFail	0x0004	// Unable to identify last UDP transmission.
// Check OpCode and packet length
#define RcUdpFail	0x0005	// Unable to open Udp Socket in last transmission attempt
#define RcShNameOk	0x0006	// Confirms that Short Name programming via ArtAddress accepted
#define RcLoNameOk	0x0007	// Confirms that Long Name programming via ArtAddress accepted
#define RcDmxError	0x0008	// DMX512 receive errors detected
#define RcDmxUdpFull	0x0009	// Ran out of internal DMX transmit buffers
// Most likely caused by receiving ArtDmx
// packets at a rate faster than DMX512 transmit
// speed
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
#define AcAnalysisOn    6       // Product signal analysis enabled
#define AcAnalysisOff   7       // Product signal analysis disabled

#define AcMergeLtp0	0x10		// Set Port 0 to merge in LTP.
#define AcMergeLtp1	0x11		// Set Port 1 to merge in LTP.
#define AcMergeLtp2	0x12		// Set Port 2 to merge in LTP.
#define AcMergeLtp3	0x13		// Set Port 3 to merge in LTP.

#define AcMergeHtp0	0x50		// Set Port 0 to merge in HTP. (Default Mode)
#define AcMergeHtp1	0x51		// Set Port 1 to merge in HTP.
#define AcMergeHtp2	0x52		// Set Port 2 to merge in HTP.
#define AcMergeHtp3	0x53		// Set Port 3 to merge in HTP.

#define AcArtNetSel0 0x60		// Set Port 0 to output DMX and RDM from Art-Net. (Default Mode)
#define AcArtNetSel1 0x61		// Set Port 1 to output DMX and RDM from Art-Net.
#define AcArtNetSel2 0x62		// Set Port 2 to output DMX and RDM from Art-Net.
#define AcArtNetSel3 0x63		// Set Port 3 to output DMX and RDM from Art-Net.

#define AcAcnSel0 0x70		// Set Port 0 to output DMX from sACN.
#define AcAcnSel1 0x71		// Set Port 1 to output DMX from sACN.
#define AcAcnSel2 0x72		// Set Port 2 to output DMX from sACN.
#define AcAcnSel3 0x73		// Set Port 3 to output DMX from sACN.

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
typedef enum
	{
	PkOpPoll,                  // Poll
		PkOpPollReply,         // ArtPollReply
		PkOpPollFpReply,       // Deprecated
		PkOpOutput,            // DMX Stream
		PkOpOutputUnicast,     // Unicast ArtDmx packets detected
		PkOpOutputSingle,      // ArtDmx packets detected from single IP
		PkOpNzs,               // ArtNzs
		PkOpSync,              // ArtSync
		PkOpAddress,           // Program Node Settings
		PkOpInput,             // Setup DMX input enables
		PkOpTodRequest,        // Requests RDM Discovery ToD
		PkOpTodData,           // Send RDM Discovery ToD
		PkOpTodControl,        // Control RDM Discovery
		PkOpMedia,             // Streaming data from media server
		PkOpMediaPatch,        // Coord setup to media server
		PkOpMediaControl,      // Control media server
		PkOpMediaControlReply, // Reply from media server
		PkOpTimeSync,          // Time & Date synchronise nodes
		PkOpTrigger,           // Trigger and macro
		PkOpDirectory,         // Request node file directory
		PkOpDirectoryReply,    // Send file directory list
		PkOpVideoSetup,        // Setup video scan and font
		PkOpVideoPalette,      // Setup colour palette
		PkOpVideoData,         // Video Data
		PkOpFirmwareMaster,    // For sending firmware updates
		PkOpFirmwareReply,     // Node reply during firmware update
		PkOpFileTnMaster,      // Upload user file to node
		PkOpFileFnMaster,      // Download user file from node
		PkOpFileFnReply,       // Ack file packet received from node
		PkOpIpProg,            // For sending IP programming info.
		PkOpIpProgReply,       // Node reply during IP programming.

		PkOpRdm,      // Non-Discovery RDM Message
		PkOpRdmSub,   // Compressed rdm
		PkOpRdmStd,   // ArtRdm - contains RDM Std
		PkOpRdmDraft, // ArtRdm - contains RDM draft

		PkPacketArtOscRx,  // Info: OSC packet received
		PkPacketArtOscBad, // Warning: OSC packet is not AL format

		PkErrorStart,      // DEFINES ABOVE ARE PACKETS, BELOW ARE ERRORS & WARNINGS
		PkOpRdmBadDec,     // ArtRdm - failed to decode draft vs std
		PkPacketNotUdp,    // Warning Non UDP packet
		PkPacketNotArtNet, // Warning Udp packet is not Art-Net
		PkPacketNotIpV4,   // Warning Non IP V4 packet received

		PkPacketLimBroad,      // Warning Limited broadcast Art-Net detected -------------
		PkPacketNetIdMismatch, // Warning Art-Net on different NetId detected -------------

		PkPacketTooLong,        // Error Udp packet was too long
		PkPacketUnknownOpCode,  // Error Undefined packet opcode
		PkPacketBadSourceUdp,   // Error Udp source port wrong
		PkPacketBadDestUdp,     // Error Udp dest port wrong
		PkPacketBadChecksumUdp, // Error Udp checksum is zero

		PkPacketBadOsc, // Error is OSC packet

		PkMax
	} PkType;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Video Specific Defines
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define MaxWinFontChar  	64      // Max char in windows font name
#define MaxFontChar     	256     // Max char in a soft font
#define MaxFontHeight   	16      // Max scan lines per char
#define MaxColourPalette    17      // Max colour entry in palette
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
typedef struct
	{
	uchar IP[4]; // IP address
	ushort Port; // UDP port	BYTE-SWAPPED MANUALLY
	} T_Addr;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Poll request from Server to Node or Server to Server.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtPoll
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpPoll
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar TalkToMe;  // bit 0 = not used

	// bit 1 = 0 then Node only sends ArtPollReply when polled
	// bit 1 = 1 then Node sends ArtPollReply when it needs to

	// bit 2 = 0 Do not send me disagnostic messages
	// bit 2 = 1 Send me diagnostics messages

	// bit 3 = 0 (If Bit 2 then) broadcast diagnostics messages
	// bit 3 = 1 (If Bit 2 then) unicast diagnostics messages

	// bit 4 = 0 Enable VLC transmission
	// bit 4 = 1 Disable VLC transmission

	uchar Priority; // Set the lowest priority of diagnostics message that node should send. See DpXxx defines above.
	} T_ArtPoll;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ArtPollReply is sent in reply to an ArtPoll. It is always broadcast
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtPollReply
	{
	uchar ID[8];    // protocol ID = "Art-Net"
	ushort OpCode;  // == OpPollReply
	T_Addr BoxAddr; // 0 if not yet configured

	uchar VersionInfoHi; // The node's current FIRMWARE VERS hi
	uchar VersionInfoLo; // The node's current FIRMWARE VERS lo

	uchar NetSwitch; // Bits 14-8 of the 15 bit universe number are encoded into the bottom 7 bits of this field.
	// This is used in combination with SubSwitch and Swin[] or Swout[] to produce the full universe address.

	uchar SubSwitch; // Bits 7-4 of the 15 bit universe number are encoded into the bottom 4 bits of this field.
	// This is used in combination with NetSwitch and Swin[] or Swout[] to produce the full universe address.

	uchar OemHi;
	uchar OemLo; // Manufacturer code, bit 15 set if
	// extended features avail

	uchar UbeaVersion; // Firmware version of UBEA

	uchar Status; // bit 0 = 0 UBEA not present
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

	uchar EstaManLo; // ESTA manufacturer id, lo byte
	uchar EstaManHi; // ESTA manufacturer id, hi byte

	char ShortName[ShortNameLength]; // short name defaults to IP
	char LongName[LongNameLength];   // long name
	char NodeReport[LongNameLength]; // Text feedback of Node status or errors
	// also used for debug info

	uchar NumPortsHi; // 0
	uchar NumPortsLo; // 4 If num i/p ports is dif to output ports, return biggest

	uchar PortTypes[MaxNumPorts];
	// bit 7 is output
	// bit 6 is input
	// bits 0-5 are protocol number (0= DMX, 1=MIDI)

	uchar GoodInput[MaxNumPorts]; // bit 7 is data received
	// bit 6 is data includes test packets
	// bit 5 is data includes SIP's
	// bit 4 is data includes text
	// bit 3 set is input is disabled
	// bit 2 is receive errors
	// bit 1-0 not used, transmitted as zero.
	// Don't test for zero!

	uchar GoodOutput[MaxNumPorts];
	// bit 7 is data is transmitting
	// bit 6 is data includes test packets
	// bit 5 is data includes SIP's
	// bit 4 is data includes text
	// bit 3 output is merging data.
	// bit 2 set if DMX output short detected on power up
	// bit 1 set if DMX output merge mode is LTP
	// bit 0 set if outputting sACN.

	uchar SwIn[MaxNumPorts]; // Bits 3-0 of the 15 bit universe number are encoded into the low nibble
	// This is used in combination with SubSwitch and NetSwitch to produce the full universe address.
	// THIS IS FOR INPUT - ART-NET or DMX
	// NB ON ART-NET II or 3 THESE 4 UNIVERSES WILL BE UNICAST TO.

	uchar SwOut[MaxNumPorts]; // Bits 3-0 of the 15 bit universe number are encoded into the low nibble
	// This is used in combination with SubSwitch and NetSwitch to produce the full universe address.
	// data belongs
	// THIS IS FOR OUTPUT - ART-NET or DMX.
	// NB ON ART-NET II or 3 THESE 4 UNIVERSES WILL BE UNICAST TO.

	uchar SwVideo; // Low nibble is the value of the video
	// output channel

	uchar SwMacro; // Bit 0 is Macro input 1
	// Bit 7 is Macro input 8

	uchar SwRemote; // Bit 0 is Remote input 1
	// Bit 7 is Remote input 8

	uchar Spare1; // Spare, currently zero
	uchar Spare2; // Spare, currently zero
	uchar Spare3; // Spare, currently zero
	uchar Style;  // Set to Style code to describe type of equipment

	uchar Mac[6]; // Mac Address, zero if info not available

	uchar BindIp[4]; // If this unit is part of a larger or modular product, this is the IP of the root device.
	uchar BindIndex; // This number represents the order of bound devices. A lower number means closer to root device.
					 // BindIndex == 1 = Root Device
					 // Receivers should treat 0 and 1 as identical = Root device

	uchar Status2;            // bit 0 = 0 Node does not support web browser
							  // bit 0 = 1 Node supports web browser configuration

							  // bit 1 = 0 Node's IP address is manually configured
							  // bit 1 = 1 Node's IP address is DHCP configured

							  // bit 2 = 0 Node is not DHCP capable
							  // bit 2 = 1 Node is DHCP capable

							  // bit 3 = 0 Clr = Node supports 8 bit Port-Address (Art-Net II).
							  // bit 3 = 1 Node supports 15 bit Port-Address (Art-Net 3 or 4).

							  // bit 4 = 0 Node is not able to switch Art-Net/sACN
							  // bit 4 = 1 Node is able to switch Art-Net/sACN

							  // bit 5-7 not implemented, transmit as zero

	uchar Filler[26]; // Filler bytes, currently zero.

	} T_ArtPollReply;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer zero start code DMX packets
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtDmx
	{
	uchar ID[8];               // protocol ID = "Art-Net"
	ushort OpCode;             // == OpOutput
	uchar ProtVerHi;           // 0
	uchar ProtVerLo;           // protocol version, set to ProtocolVersion
	uchar Sequence;            // 0 if not used, else 1-255 incrementing sequence number
	uchar Physical;            // The physical i/p 0-3 that originated this packet. For Debug / info only
	uchar SubUni;              // The low 8 bits of the 15 bit universe address.
	uchar Net;                 // The high 7 bits of the 15 bit universe address.
	ushort Length;             // BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength]; // Variable length array. First entry is channel 1 level (NOT THE START CODE)
	} T_ArtDmx;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Sync packet to force nodes to output previous ArtDmx.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtSync
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpSync
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Aux1;      // not used, transmit as zero
	uchar Aux2;      // not used, transmit as zero

	} T_ArtSync;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer selected non-zero start code DMX packets
// IT MUST NOT BE USED FOR ZERO OR RDM PACKETS or any ESTA reserved start codes
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtNzs
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpNzs
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Sequence;  // 0 if not used, else 1-255 incrementing sequence number
	uchar StartCode; // The start code
	uchar SubUni;    // The low 8 bits of the 15 bit universe address.
	uchar Net;       // The high 7 bits of the 15 bit universe address.
	ushort Length;   // BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength];
	} T_ArtNzs;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is a special case of ArtNzs used to transmit VLC data
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
#define MaxVlcPayload 480
#define MaxVlcHeader 22
typedef struct S_ArtVlc
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpNzs
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Sequence;  // 0 if not used, else 1-255 incrementing sequence number
	uchar StartCode; // The start code = 0x91 which is the ESTA code for manufacturere specific packet
	uchar SubUni;    // The low 8 bits of the 15 bit universe address.
	uchar Net;       // The high 7 bits of the 15 bit universe address.
	ushort Length;   // BYTE-SWAPPED MANUALLY. Size in bytes of all data below here

	uchar ManIdHi;	 // 0x41 Magic number used to identify this packet.
	uchar ManIdLo;	 // 0x4C Magic number used to identify this packet.
	uchar SubCode;	 // 0x45 Magic number used to identify this packet.

	uchar Flags;
					 // Bit 7 = 1 Data in the payload area shall be interpreted as IEEE VLC data.
					 // Bit 7 = 0 PayLanguage defines the payload contents.
					 // Bit 6 = 1 This is a reply packet that is in response to the request sent with matching number in the transaction number : TransHi / Lo.
					 // Bit 6 = 0 This is not a reply.
					 // Bit 5 = 1 The transmitter should continuously repeat transmission of this packet until another is received.
					 // Bit 5 = 0 The transmitter should transmit this packet once.

	uchar TransHi;	 // The transaction number is a 16 - bit value which allows VLC transactions to be synchronised.
					 // A value of 0 indicates the first packet in a transaction.
					 // A value of 0xffff indicates the final packet in the transaction.
					 // All other packets contain consecutive numbers which increment on each packet and roll over to 1 at 0xfffe.
	uchar TransLo; 	 // Lo byte of above

	uchar SlotAddrHi; // The slot number, range 1 - 512, of the device to which this packet is directed.
					  // A value of 0 indicates that all devices attached to this packet�s Port-Address should accept the packet.
	uchar SlotAddrLo; // Lo byte of above

	uchar PayCountHi; // The 16-bit payload size in the range 0 to 482.
	uchar PayCountLo; // Lo byte of above

	uchar PayCheckHi; // The 16-bit unsigned additive checksum of the data in the payload.
	uchar PayCheckLo; // Lo byte of above

	uchar Spare1; 	 // Transmit as zero, receive does not check.

	uchar VlcDepth; 	 // The 8-bit VLC modulation depth expressed as a percentage in the range 1 to 100.
						 // A value of 0 indicates that the transmitter should use its default value

	uchar VlcFreqHi;  // The 16-bit modulation frequency of the VLC transmitter expressed in Hz.
					  // A value of 0 indicates that the transmitter should use its default value.
	uchar VlcFreqLo;  // Lo byte of above

	uchar VlcModHi;   // The 16-bit modulation type number that the transmitter should use to transmit VLC.
					  // 0x0000 � Use transmitter default.
	uchar VlcModLo;	  // Lo byte of above

	uchar PayLangHi;  // The 16-bit payload language code.
					  // Currently registered values:
					  //  0x0000 � BeaconURL � Payload contains a simple text string representing a URL.
					  //  0x0001 � BeaconText � Payload contains a simple ASCII text message.

	uchar PayLangLo;  // Lo byte of above

	uchar BeacRepHi;  // The 16-bit beacon mode repeat frequency.
					  // If Flags.Beacon is set, this 16-bit value indicates the frequency in Hertz at which the VLC packet
					  // should be repeated. 000016 � Use transmitter default.

	uchar BeacRepLo;  // Lo byte of above

	uchar Vlc[MaxVlcPayload];	  // The actual VLC payload.

	} T_ArtVlc;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer diagnostic data from node to server
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtDiagData
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpDiagData
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;
	uchar Priority; // The message priority, see DpXxxx defines above.
	uchar Filler2;
	uchar Filler3;
	ushort Length;             // BYTE-SWAPPED MANUALLY. Length of array below
	uchar Data[MaxDataLength]; // Variable size array which is defined as maximum here.
	} T_ArtDiagData;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer diagnostic data from node to server
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtCommand
	{
	uchar ID[8];               // protocol ID = "Art-Net"
	ushort OpCode;             // == OpCommand
	uchar ProtVerHi;           // 0
	uchar ProtVerLo;           // protocol version, set to ProtocolVersion
	uchar EstaManHi;           // ESTA manufacturer id, hi byte
	uchar EstaManLo;           // ESTA manufacturer id, lo byte  // == 0xffff for the global command set
	ushort Length;             // BYTE-SWAPPED MANUALLY. Length of array below. Range 0 - 512
	uchar Data[MaxDataLength]; // Variable size array which is defined as maximum here. Contains null terminated command text.
	} T_ArtCommand;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to transfer settings from server to node
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtAddress
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpAddress
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion

	uchar NetSwitch; // Bits 14-8 of the 15 bit universe number are encoded into the bottom 7 bits of this field.
	// This is used in combination with SubSwitch and SwIn[] or SwOut[] to produce the full universe address.
	// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
	// Send 0x00 to reset this value to the physical switch setting.
	// Use value 0x7f for no change.

	uchar BindIndex; // This number represents the order of bound devices. A lower number means closer to root device.
					 // BindIndex == 1 = Root Device
					 // Receivers should treat 0 and 1 as identical = Root device

	uchar ShortName[ShortNameLength]; // null ignored

	uchar LongName[LongNameLength]; // null ignored

	uchar SwIn[MaxNumPorts]; // Bits 3-0 of the 15 bit universe number for a given input port are encoded into the bottom 4 bits of this field.
	// This is used in combination with NetSwitch and SubSwitch to produce the full universe address.
	// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
	// Send 0x00 to reset this value to the physical switch setting.
	// Use value 0x7f for no change.
	// Array size is fixed

	uchar SwOut[MaxNumPorts]; // Bits 3-0 of the 15 bit universe number for a given output port are encoded into the bottom 4 bits of this field.
	// This is used in combination with NetSwitch and SubSwitch to produce the full universe address.
	// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
	// Send 0x00 to reset this value to the physical switch setting.
	// Use value 0x7f for no change.
	// Array size is fixed

	uchar SubSwitch; // Bits 7-4 of the 15 bit universe number are encoded into the bottom 4 bits of this field.
	// This is used in combination with NetSwitch and SwIn[] or SwOut[] to produce the full universe address.
	// This value is ignored unless bit 7 is high. i.e. to program a  value 0x07, send the value as 0x87.
	// Send 0x00 to reset this value to the physical switch setting.
	// Use value 0x7f for no change.

	uchar SwVideo; // Low nibble is the value of the video
	// output channel
	// Bit 7 hi = use data

	uchar Command; // see Acxx definition list

	} T_ArtAddress;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Transmitted by Server to set or test the Node's custom IP settings.
//
// NB. This function is provided for specialist applications. Do not implement this functionality
// unless really needed!!!
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtIpProg
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpIpProg
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // TalkToMe position in ArtPoll
	uchar Filler2;   // The physical i/p 0-3. For Debug only
	uchar Command;   // Bit fields as follows: (Set to zero to poll for IP info)
	// Bit 7 hi for any programming.
	// Bit 6 hi = enable DHCP (overrides all lower bits.
	// Bit 5-4 not used, set to zero.
	// Bit 3 hi = Return all three paraameters to default. (This bit takes priority).
	// Bit 2 hi = Use custom IP in this packet.
	// Bit 1 hi = Use custom Subnet Mask in this packet.
	// Bit 0 hi = Use custom Port number in this packet.

	uchar Filler4;  // Fill to word boundary.
	uchar ProgIpHi; // Use this IP if Command.Bit2
	uchar ProgIp2;
	uchar ProgIp1;
	uchar ProgIpLo;

	uchar ProgSmHi; // Use this Subnet Mask if Command.Bit1
	uchar ProgSm2;
	uchar ProgSm1;
	uchar ProgSmLo;

	uchar ProgPortHi; // Use this Port Number if Command.Bit0
	uchar ProgPortLo;

	uchar Spare1; // Set to zero, do not test in receiver.
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
typedef struct S_ArtIpProgReply
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpIpProgReply
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;
	uchar Filler2;
	uchar Filler3; // Fill to word boundary.
	uchar Filler4; // Fill to word boundary.

	uchar ProgIpHi; // The node's current IP Address
	uchar ProgIp2;
	uchar ProgIp1;
	uchar ProgIpLo;

	uchar ProgSmHi; // The Node's current Subnet Mask
	uchar ProgSm2;
	uchar ProgSm1;
	uchar ProgSmLo;

	uchar ProgPortHi; // The Node's current Port Number
	uchar ProgPortLo;

	uchar Status; // Bit 6 set if DHCP enabled
	uchar Spare2; // Set to zero, do not test in receiver.
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;
	uchar Spare7;
	uchar Spare8;

	} T_ArtIpProgReply;

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// RDM Messages
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Packet sent to request that Output Gateway node reply with ArtTodData packet. This is used
// to update RDM ToD (Table of Devices) throughout the network.
//
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtTodRequest
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpArtTodRequest
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // TalkToMe position in ArtPoll
	uchar Filler2;   // The physical i/p 0-3. For Debug only

	uchar Spare1; // Set to zero, do not test in receiver.
	uchar Spare2;
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;
	uchar Spare7;
	uchar Net; // Hi 7 bits of DMX Port address that requires ToD update.

	uchar Command; // Always set to zero. See TodXxxx defines.

	uchar AdCount; // Number of DMX Port Addresses encoded in message. Max 32

	uchar LowAddress[32]; // Array of low byte of DMX Port Addresses that require ToD update.
	// Hi Nibble = Sub-Net
	// Lo Nibble = Port Address

	} T_ArtTodRequest;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Packet is a response to ArtTodRequest and encodes changes in the Tod.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

typedef struct S_ArtTodData
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   //
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar RdmVer;    // = 0 for RDM Draft; =1 for RDM Standard V1.0
	uchar Port;      // The physical port of the gateway (1-4) which generated this.

	uchar Spare1; // Set to zero, do not test in receiver.
	uchar Spare2;
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;
	uchar BindIndex; // This number represents the order of bound devices. A lower number means closer to root device.
					 // BindIndex == 1 = Root Device
					 // Receivers should treat 0 and 1 as identical = Root device

	uchar Net; // Hi 7 bits of Universe address of this ToD

	uchar CommandResponse; // See TodXxxx defines.

	uchar LowAddress; // Lo 8 bits DMX Universe Addresse of this ToD.
	// Hi Nibble = Sub-Net
	// Lo Nibble = Port Address

	uchar UidTotalHi; // Total number of UIDs in Node's ToD
	uchar UidTotalLo;

	uchar BlockCount; // Counts multiple packets when UidTotal exceeds number encoded in a packet. Max 200

	uchar UidCount; // Number of UIDs in this packet, also array of following field.

	T_Uid Tod[200]; // Array of 48 bit UIDs. (200 is max, actual array size is UidCount

	} T_ArtTodData;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Packet used to force Node into full discovery.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtTodControl
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpArtTodControl
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;
	uchar Filler2; // The physical i/p 0-3. For Debug only

	uchar Spare1; // Set to zero, do not test in receiver.
	uchar Spare2;
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;
	uchar Spare7;
	uchar Net; // Hi 7 bits of Universe address of this ToD

	uchar Command; // Command controls Node as follows:
	// See AtcXxxx defines.

	uchar LowAddress; // Lo DMX Port Addresses of this ToD.
	// Hi Nibble = Sub-Net
	// Lo Nibble = Port Address

	} T_ArtTodControl;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Packet used for all non-discovery RDM messages.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtRdm
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpAddress
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar DevRdmVer; // = 0 for RDM Draft; =1 for RDM Standard V1.0
	uchar Filler2;

	uchar Spare1; // Set to zero, do not test in receiver.
	uchar Spare2;
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	uchar Spare6;
	uchar Spare7;
	uchar Net; // Hi 7 bits of Port Address that should action this command

	uchar Command; // Process command as follows:
	// See ArXxxx defines.

	uchar LowAddress; // Lo 8 bits of DMX Port Addresses that should action this command.
	// Hi Nibble = Sub-Net
	// Lo Nibble = Port Address

	T_RdmStd Rdm; // The RDM message. Actual data length encoded as per RDM definition.

	} T_ArtRdm;

#define RdmOffsetInArt (sizeof(T_ArtRdm) -sizeof(T_RdmStd))

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Packet used for retrieving or setting compressed RDM sub-device data from RDM Proxy nodes.
// This is primarily used to retrieve lists of sub device start addresses or sub device sensor value
//
// This packet is used for both question and answer. Contents of CommandClass defines which
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

#define RdmSubPayload 512

typedef struct S_ArtRdmSub
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpRdmSub
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // TalkToMe position in ArtPoll
	uchar Filler2;

	T_Uid Uid; // Uid of RDM device that is being queried.
	uchar Spare1;
	uchar CommandClass; // Class of command - get / set as per rdm definitions
	ushort ParameterId; // The command, big-endian
	ushort SubDevice;   // Start device. 0 = root, 1 = first subdevice, big-endian
	ushort SubCount;    // Number of sub/devices. 0=do nothing. 1 is smallest valid range. 512 is max, big-endian
	uchar Spare2;
	uchar Spare3;
	uchar Spare4;
	uchar Spare5;
	ushort Data[RdmSubPayload]; // Data is cast as per contents. Big-endian
	// Actual array length on the wire is dependent on Command Class:
	// SET or GET_RESPONSE = Data[SubCount]
	// GET or SET_RESPONSE = no Data[] in packet
	// If responder cannot reply in a simple packet, it sends multiple packets.
	} T_ArtRdmSub;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Used to disable or enable Node DMX port inputs
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtInput
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpInput
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar BindIndex; // This number represents the order of bound devices. A lower number means closer to root device.
					 // BindIndex == 1 = Root Device
					 // Receivers should treat 0 and 1 as identical = Root device

	uchar NumPortsH; // 0
	uchar NumPorts;  // 4 If num i/p ports is dif to output ports, return biggest

	uchar Input[MaxNumPorts]; // Bit 0 = 0 to enable dmx input.
	// Bit 0 = 1 to disable input
	// Power on default is enabled
	// Use NumPorts in ArtPollReply for array size.

	} T_ArtInput;

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to upload either firmware or UBEA to the Node. This packet
// must NOT be used with broadcast address
//
// NB. The file data is assumed to contain the S_ArtFirmwareFile header
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtFirmwareMaster
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpFirmware
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // To match ArtPoll
	uchar Filler2;   // To match ArtPoll

	uchar Type; // 0x00 == First firmware packet
	// 0x01 == Firmware packet
	// 0x02 == Final firmware packet
	// 0x03 == First UBEA packet
	// 0x04 == UBEA packet
	// 0x05 == Final UBEA packet

	uchar BlockId; // Firmware block counter 00 - ##

	uchar FirmwareLength3; // The total number of words (int16) in the firmware plus the
	// firmware header size. Eg: a 32K word upload including 530
	// words of header == 0x8212. This is the file length

	uchar FirmwareLength2;
	uchar FirmwareLength1;
	uchar FirmwareLength0;

	uchar Spare[20]; // Send as zero, receiver does not test

	ushort Data[512]; // hi / lo order. Meaning of this data is manufacturer specific

	} T_ArtFirmwareMaster;

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used to upload or download user files to or from the Node. This packet
// must NOT be used with broadcast address
//
// NB. There is no header embedded in the file
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtFileMaster
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpFile
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // To match ArtPoll
	uchar Filler2;   // To match ArtPoll

	uchar Type; // 0x00 == First file packet
	// 0x01 == File packet
	// 0x02 == Final file packet

	uchar BlockId; // Firmware block counter 00 - ##

	uchar FileLength3; // The total number of words in the file

	uchar FileLength2;
	uchar FileLength1;
	uchar FileLength0;

	uchar Name[14]; // 8.3 file name null terminated

	uchar ChecksumHi;
	uchar ChecksumLo;

	uchar Spare[4]; // Send as zero, receiver does not test

	ushort Data[512]; // hi / lo order. Meaning of this data is manufacturer specific

	} T_ArtFileMaster;

#define T_ArtFileTnMaster T_ArtFileMaster
#define T_ArtFileFnMaster T_ArtFileMaster
#define S_ArtFileTnMaster S_ArtFileMaster
#define S_ArtFileFnMaster S_ArtFileMaster

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used by Controller to Ack receipt of a file packet from a node. This packet
// must NOT be used with broadcast address
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtFileFnReply
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpFileFnReply
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // To match ArtPoll
	uchar Filler2;   // To match ArtPoll

	uchar Type; // 0x00 == Last packet received OK
	// 0x01 == All file received OK
	// 0xff == Error in download, Controller instructing Node to abort file send

	uchar Spare[21]; // Send as zero, Node does not test

	} T_ArtFileReply;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The following packet is used by Node to Ack receipt of a firmware or file packet from the master. This packet
// must NOT be used with broadcast address
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
typedef struct S_ArtFirmwareReply
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpFirmwareReply
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // To match ArtPoll
	uchar Filler2;   // To match ArtPoll

	uchar Type; // 0x00 == Last packet received OK
	// 0x01 == All firmware received OK
	// 0xff == Error in upload, Node aborting transfer

	uchar Spare[21]; // Send as zero, Server does not test

	} T_ArtFirmwareReply;

// The following structure defines the header for an Art-Net node firmware upload file (.alf or .alu)

typedef struct S_ArtFirmwareFile
	{
	uchar ChecksumHi;
	uchar ChecksumLo;
	uchar VersionInfoHi; // not used for UBEA files
	uchar VersionInfoLo; // Version no of encoded file
	char UserName[30];
	ushort OemNames[256];
	ushort Spare[255];
	uchar Length3; //
	uchar Length2;
	uchar Length1;
	uchar Length0;

	} T_ArtFirmwareFile;

// The following structure defines the header for any RDM device firmware upload file (.ald)

typedef struct S_ArtRdmFirmwareFile
	{
	uchar ChecksumHi;
	uchar ChecksumLo;
	uchar VersionInfoHi;
	uchar VersionInfoLo;
	char UserName[30];
	ushort RdmModelId[256];    // list of Rdm ModelId's for which this firmware is valid
	uchar RdmManufacturerIdHi; // Rdm Manufacturer which this firmware is valid
	uchar RdmManufacturerIdLo;
	ushort Spare[252];
	uchar Length3;
	uchar Length2;
	uchar Length1;
	uchar Length0;

	} T_ArtRdmFirmwareFile;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Time & Date Sync
//
// This is used to time sync all Art-Net nodes on network
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

typedef struct S_ArtTimeSync
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpInput
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar Filler2;   // 0

	uchar Prog; /* ==0xaa to program settings, ==0x00 for information */

	uchar tm_sec;     /* Seconds */
	uchar tm_min;     /* Minutes */
	uchar tm_hour;    /* Hour (0--23) */
	uchar tm_mday;    /* Day of month (1--31) */
	uchar tm_mon;     /* Month (0--11) */
	uchar tm_year_hi; /* Year (calendar year minus 1900) */
	uchar tm_year_lo;
	uchar tm_wday;  /* Weekday (0--6; Sunday = 0) */
	uchar tm_isdst; /* 0 if daylight savings time is not in effect) */

	} T_ArtTimeSync;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Time Code
//
// This is used to time sync all Art-Net nodes on network
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

typedef struct S_ArtTimeCode
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpInput
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar Filler2;   // 0

	uchar Frames;  // 0 - 29 depending on Type
	uchar Seconds; // 0 - 59
	uchar Minutes; // 0 - 59
	uchar Hours;   // 0 - 23
	uchar Type;    // 0 = Film (24fps), 1 = EBU (25fps), 2 = DF (29.97fps), 3 = SMPTE (30fps)

	} T_ArtTimeCode;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Keyboard / Trigger Info
//
// This is used to send remote key presses and triggers to network devices
//
// Transmit unicast for a specific node, or broadcast for all nodes.
//
// Receiving node must parse OemType. The data definitions of the key information
// are product type specific based on this code.
//
// OemCode == OemGlobal defines the global command set
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

// The following defines relate to the Key field when OemCode==OemGlobal

#define KeyAscii        0       //SubKey is an ASCII code to be processed. Data not used
#define KeyMacro        1       //SubKey is an Macro to be processed. Data not used
#define KeySoft         2       //SubKey is a product soft key
#define KeyShow     	3       //SubKey is an absolute show number to run

typedef struct S_ArtTrigger
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpTrigger
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar Filler2;   // 0

	uchar OemHi;
	uchar OemLo; // == 0xffff for the global command set

	uchar Key; // Key code
	uchar SubKey;
	uchar Payload[MaxDataLength]; // This is a fixed length array

	} T_ArtTrigger;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Directory data
//
// This is used to retrieve or set file information from a node
//
// Transmit unicast for a specific node, or broadcast for all nodes.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//

// Command bytes
#define AdComDir        0       //request directory info
#define AdComGet        1       //request file download

typedef struct S_ArtDirectory
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpDirectory
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar Filler2;   // 0

	uchar Command;
	uchar FileHi;
	uchar FileLo; // File number requested or == 0xffff for all file data

	} T_ArtDirectory;

#define AdrFileExists	0x80       //requested file exists

typedef struct S_ArtDirectoryReply
	{
	uchar ID[8];     // protocol ID = "Art-Net"
	ushort OpCode;   // == OpDirectoryReply
	uchar ProtVerHi; // 0
	uchar ProtVerLo; // protocol version, set to ProtocolVersion
	uchar Filler1;   // 0
	uchar Filler2;   // 0
	uchar Flags;     // bit 7 = 1 if files exists

	uchar FileHi;
	uchar FileLo; // File number: number consecutively from zero

	char Name83[16];      // 8.3 file name. Null if not used. Null terminated
	char Description[64]; // File description. Null if not used. Null terminated
	uchar Length[8];      // File length. Hi byte first. This is the byte count.
	uchar Data[64];       // User data

	} T_ArtDirectoryReply;

typedef struct S_ArtDirectoryList
	{
	T_ArtDirectoryReply Dir[0]; // List of all user files available from node

	} T_ArtDirectoryList;

typedef struct S_UdpPacket
	{
	ushort SourcePort;
	ushort DestPort;
	ushort Length;
	ushort Checksum;
	uchar UdpData[1500];
	} T_UdpPacket;

typedef struct
	{
	uchar Version;
	uchar Dscp;
	ushort TotalLength;
	ushort Ident;
	ushort Flags;
	uchar Ttl;
	uchar Protocol;
	ushort HeaderChecksum;
	int SourceIp;
	int DestIp;
	T_UdpPacket Payload;
	} T_IpPacket;

#endif

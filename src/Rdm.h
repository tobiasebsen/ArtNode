/////////////////////////////////////////////////////////////////////
//
// Copyright Artistic Licence Holdings Ltd	2002 - 2016
// Author:	Wayne Howell
// Email:	Support@ArtisticLicence.com
// Please use discussion forum for tech support.
// www.ArtisticLicence.com
//
// This file contains all key defines and structures for RDM
//
// Created 7/4/02 WDH
//
// Notes on updates to RDM Standard V1.0
//
// 1) Structure change to allow 16 bit sub devices - there
// are now two structure definitions: S_RdmStd, S_RdmDraft
// 2) Numerous PIDs have changed and unfortunately draft and
// standard PIDs intersect without same meaning.
// When this happens, the PID now has a _STD suffix for
// RDM Standard V1.0 and _DRAFT suffix for RDM Draft.
//
//
////////////////////////////////////////////////////////////////////

#ifndef _RDM_H_
#define _RDM_H_
#pragma pack(1) //set to byte packing in data structures

#define uchar unsigned char
#define ushort unsigned short int
#define ulong unsigned int
// 8, 16, 32 bit fields

#define RDM_SC_RDM_DRAFT                0xf0    // Slot 0 Start Code for development
#define RDM_SC_RDM_STD                  0xcc    // Slot 0 Start Code for development

#define RDM_SC_SUB_MESSAGE              0x01    // Slot 1 RDM Protocol Data Structure ID

// Global Device UID's  RDM Standard

#define RDM_GLOBAL_ALL_DEVICES_ID       0xffffffffffff    // Global all manufacturers
#define RDM_ALL_DEVICES_ID              0x0000ffffffff    // Specific manufacturer ID
#define RDM_GLOBAL_ALL_DEVICES_ID_HI    0xffff
#define RDM_ALL_DEVICES_ID_LO           0xffffffff

// RDM Response Type  RDM Standard

#define RDM_RESPONSE_TYPE_ACK               0x00
#define RDM_RESPONSE_TYPE_ACK_TIMER         0x01
#define RDM_RESPONSE_TYPE_NACK_REASON       0x02
#define RDM_RESPONSE_TYPE_ACK_BULK_DRAFT    0x03	// NB AL retain this duplicate use of code 0x03 for file upload only
#define RDM_RESPONSE_TYPE_ACK_OVERFLOW	    0x03

// RDM Parameter commands  RDM Standard

#define RDM_DISCOVERY_COMMAND           0x10
#define RDM_DISCOVERY_COMMAND_RESPONSE  0x11
#define RDM_GET_COMMAND                 0x20
#define RDM_GET_COMMAND_RESPONSE        0x21
#define RDM_SET_COMMAND                 0x30
#define RDM_SET_COMMAND_RESPONSE        0x31

// RDM Parameter ID's  PIDs

#define RDM_DISCOVERY_UNIQUE_BRANCH             0x0001
#define RDM_DISCOVERY_MUTE                      0x0002
#define RDM_DISCOVERY_UN_MUTE                   0x0003

#define RDM_PROXIED_DEVICES                     0x0010
#define RDM_PROXIED_DEVICE_COUNT                0x0011
#define RDM_COMMS_STATUS			0x0015

#define RDM_GET_POLL_STD                        0x0020  // Queued messages

#define RDM_STATUS_MESSAGES                     0x0030

#define RDM_STATUS_ID_DESCRIPTION               0x0031
#define RDM_CLEAR_STATUS_ID                     0x0032
#define RDM_SUB_DEVICE_STATUS_REPORT_THRESHOLD  0x0033

#define RDM_SUPPORTED_PARAMETERS                0x0050
#define RDM_PARAMETER_DESCRIPTION               0x0051

#define RDM_DEVICE_INFO		                0x0060          //NB This PID was MODEL_ID in draft.
#define RDM_PRODUCT_DETAIL_ID_LIST              0x0070
#define RDM_DEVICE_MODEL_DESC_STD        	0x0080
#define RDM_MANUFACTURER_LABEL_STD              0x0081
#define RDM_DEVICE_LABEL_STD                    0x0082

#define RDM_FACTORY_DEFAULTS                    0x0090

#define RDM_LANGUAGE_CAPABILITIES               0x00a0
#define RDM_LANGUAGE                            0x00b0
#define RDM_SOFTWARE_VERSION_LABEL              0x00c0		//NB Reply format changed between draft and std
#define RDM_BOOT_SOFTWARE_VERSION_ID 		0x00C1
#define RDM_BOOT_SOFTWARE_VERSION_LABEL  	0x00c2

#define RDM_DMX_PERSONALITY                     0x00e0
#define RDM_DMX_PERSONALITY_DESCRIPTION         0x00e1

#define RDM_DMX_START_ADDRESS                   0x00f0

#define RDM_SLOT_ID                             0x0120
#define RDM_SLOT_DESCRIPTION                    0x0121
#define RDM_SLOT_DEFAULT_VALUE                  0x0122

#define RDM_SENSOR_DEFINITION_STD               0x0200
#define RDM_SENSOR_STD                          0x0201
#define RDM_SENSOR_RECORD_ALL_STD               0x0202

#define RDM_DIMMER_TYPE                         0x0301   	//These are draft pids awaiting resolution of RDM standard V1.1
#define RDM_DIMMER_CURVE_CLASS                  0x0302          //These are draft pids awaiting resolution of RDM standard V1.1

#define RDM_DEVICE_HOURS_STD                    0x0400
#define RDM_LAMP_HOURS_STD                      0x0401
#define RDM_LAMP_STRIKES_STD                    0x0402
#define RDM_LAMP_STATE_STD                      0x0403
#define RDM_LAMP_ON_MODE_STD                    0x0404

#define RDM_DISPLAY_INVERT_STD                  0x0500
#define RDM_DISPLAY_LEVEL_STD                   0x0501

#define RDM_PAN_INVERT                          0x0600
#define RDM_TILT_INVERT                         0x0601
#define RDM_PAN_TILT_SWAP                       0x0602

#define RDM_IDENTIFY_DEVICE                     0x1000

#define RDM_EXIT_COMMAND                        0x1002      //Note - this was deleted in Std RDM - need to check alternate functionality
#define RDM_RESET_DEVICE_STD                    0x1001

#define RDM_PERFORM_SELFTEST                    0x1020
#define RDM_SELF_TEST_DESCRIPTION               0x1021
#define RDM_CAPTURE_PRESET                      0x1030
#define RDM_PRESET_PLAYBACK                     0x1031

#define RDM_PID_DESCRIPTION                     0x1040      //Note - this was deleted in Std RDM - need to check alternate functionality

// The following PIDs were deleted in the standard. Any API call that requests transmission of these PIDs will be rerouted as a DEVICE_INFO PID.
// This is purely for backwards compatibility.

#define RDM_DMX_FOOTPRINT_DRAFT                 0x00d0
#define RDM_SUB_DEVICE_COUNT_DRAFT              0x0100
#define RDM_PROTOCOL_VERSION_DRAFT              0x0040
#define RDM_SENSOR_QUANTITY_STD                 0x0203  // NB The _STD suffix is not an error - see below for _DRAFT

// The following PIDs were renumbered from Draft to Std RDM

#define RDM_GET_POLL_DRAFT                      0x0012  // Queued messages
#define RDM_DEVICE_MODEL_DESC_DRAFT      	0x0062
#define RDM_MANUFACTURER_LABEL_DRAFT            0x0070
#define RDM_DEVICE_LABEL_DRAFT                  0x0080
#define RDM_SENSOR_DRAFT                        0x0200
#define RDM_SENSOR_QUANTITY_DRAFT               0x0201
#define RDM_SENSOR_DEFINITION_DRAFT             0x0202
#define RDM_SENSOR_RECORD_ALL_DRAFT             0x0203
#define RDM_DEVICE_HOURS_DRAFT                  0x0401
#define RDM_LAMP_HOURS_DRAFT                    0x0402
#define RDM_LAMP_STRIKES_DRAFT                  0x0403
#define RDM_LAMP_STATE_DRAFT                    0x0404
#define RDM_LAMP_ON_MODE_DRAFT                  0x0405
#define RDM_DISPLAY_INVERT_DRAFT                0x0501
#define RDM_DISPLAY_LEVEL_DRAFT                 0x0502
#define RDM_RESET_DEVICE_DRAFT                  0x1003

// The following PIDs exist in Draft but not Standard RDM. However these PIDs are used for AL firmware upload (which is Draft V1.0 BDT) for all uploads.

#define RDM_BULK_DATA_REQUEST                   0x2060
#define RDM_BULK_DATA_OFFER                     0x2070
#define RDM_BULK_DATA_QUERY                     0x2080

#define RDM_UNSUPPORTED_ID                      0x7fff

// Artistic Licence published PID's

#define RDM_ART_PROGRAM_UID				0x8000
#define RDM_ART_LS_SPECIAL				0x8001	//used by Light-Switch for product sync
#define RDM_ART_SC_SPECIAL				0x8002	//used by Sign-Control & Light-Switch for product sync (V3.08 firmware onwards)
#define RDM_ART_DATA_LOSS_MODE			0x8003	//used by Artistic products to define action on loss of data.
#define RDM_ART_FORCE_ROM_BOOT			0x8004	//used by Artistic products to force rom boot / factory restart
#define RDM_ART_PRESET_TRANSFER			0x8005	//used by Artistic products to transfer preset data
// Get and Set Response packets have a 2 byte payload (Preset number (1-x), page (0-7) )
// Set and Get Response packets have a 66 byte payload (Preset number (1-x), page (0-7), array of values[64])
// Data is moved in 64 byte chunks so multiple calls needed if footprint>64.

#define MaxSupportedPid	128                     // Max number of PIDs from SupportedPids that we log.
#define	MaxPresetScene	8						// Max number preset scenes that we support

// Max Data field lengths - these numbers are based on Draft, may need to change

#define COUNT_DEVICE_MODEL_DESCRIPTION 		32
#define COUNT_MANUFACTURER_LABEL 			32
#define COUNT_DEVICE_LABEL 					32
#define COUNT_SOFTWARE_LABEL 				32
#define COUNT_PERSONALITY_DESCRIPTION 		32
#define COUNT_PERSONALITY_LONG_DESCRIPTION 	64
#define COUNT_SELF_TEST_DESCRIPTION 		32
#define COUNT_SLOT_DESCRIPTION 				8
#define COUNT_SENSOR_DESCRIPTION 			32
#define COUNT_RDM_MAX_FILE_BLOCK			216
#define COUNT_PRESET_TRANSFER				64

typedef struct
	{
	uchar Uid[6]; // UID Hi Byte first
	} T_Uid;

typedef struct S_RdmStd
	{
	uchar SubStartCode;       // defines protocol as RDM
	uchar SlotCount;          // defines slot containing Chksum hi byte - range 23-255
	T_Uid Dud;                // Destination UID
	T_Uid Sud;                // Source UID
	uchar SequenceNumber;     // Increments with each packet
	uchar ResponseType;       // The Ack code / Port ID
	uchar MessageCount;       // Number of messages queued at device
	ushort SubDevice;         // Index of sub device, 0 is root device
	uchar CommandClass;       // Class of command - get / set
	ushort ParameterId;       // The command
	uchar ParameterSlotCount; // Index of following array, also SlotCount+23=ParameterSlotCount
	uchar Data[256];
	} T_RdmStd;

typedef struct S_RdmDraft
	{
	uchar SubStartCode;       // defines protocol as RDM
	uchar SlotCount;          // defines slot containing Chksum hi byte - range 23-255
	T_Uid Dud;                // Destination UID
	T_Uid Sud;                // Source UID
	uchar SequenceNumber;     // Increments with each packet
	uchar ResponseType;       // The Ack code
	uchar MessageCount;       // Number of messages queued at device
	uchar SubDevice;          // Index of sub device, 0 is root device
	uchar CommandClass;       // Class of command - get / set
	ushort ParameterId;       // The command
	uchar ParameterSlotCount; // Index of following array, also SlotCount+23=ParameterSlotCount
	uchar Data[256];
	} T_RdmDraft;

// RDM SoftwareVersion

typedef struct S_Software
	{
	uchar Major;
	uchar Minor;
	uchar Build[2];
	uchar Status;
	uchar Year[2];
	uchar Month;
	uchar Day;
	uchar Hour;
	uchar Minute;
	} T_Software;

// RDM SensorDescription

typedef struct S_SensorDescription
	{
	uchar SensorNumber;
	uchar Type;
	uchar Unit;
	uchar Prefix;
	short RangeMinimum;
	short RangeMaximum;
	short NormalMinimum;
	short NormalMaximum;
	uchar RecMode;
	char Name[COUNT_SENSOR_DESCRIPTION];
	} T_SensorDescription;

// Defines used in calls to RdmDeviceGetRootSensorValueString  -
#define SENSOR_VALUE		0
#define SENSOR_MIN_RANGE	1
#define SENSOR_MAX_RANGE	2
#define SENSOR_MIN_NORMAL	3
#define SENSOR_MAX_NORMAL	4
#define SENSOR_MIN_RECORDED	5
#define SENSOR_MAX_RECORDED	6
#define SENSOR_RECORDED		7

#define SENSOR_VALUE_TAB	8
#define SENSOR_MIN_RANGE_TAB	9
#define SENSOR_MAX_RANGE_TAB	10
#define SENSOR_MIN_NORMAL_TAB	11
#define SENSOR_MAX_NORMAL_TAB	12
#define SENSOR_MIN_RECORDED_TAB	13
#define SENSOR_MAX_RECORDED_TAB	14
#define SENSOR_RECORDED_TAB	15

// Status Message data  RDM Standard

#define RDM_STATUS_NONE        		0x00
#define RDM_STATUS_GET_LAST_MESSAGE	0x01
#define RDM_STATUS_ADVISORY             0x02
#define RDM_STATUS_WARNING        	0x03
#define RDM_STATUS_ERROR                0x04

// RDM SensorValueResponse

typedef struct S_SensorValue
	{
	uchar SensorNumber;
	short Value;
	short LowestDetectedValue;
	short HighestDetectedValue;
	short RecValue;
	} T_SensorValue;

// RDM SensorValueResponse

typedef struct S_PresetBlock
	{
	uchar PresetNumber;		//1-MaxPresetScene
	uchar PresetPage;		//0-7
	uchar Values[COUNT_PRESET_TRANSFER];
	} T_PresetBlock;

// This structure is used to hold the Parameter ID name to PID cross reference table.

typedef struct S_Psc
	{
	bool Valid;  // true if this PID id valid in combination with this Command Class
	uchar Count; // Expected PSC for this PID, 255 == variable
	} T_Psc;

typedef struct S_Pid
	{
	char Name[48]; // Name of parameter ID
	ushort Pid;    // Parameter ID code
	T_Psc PscDisc; // Expected PSC for Discovery command, 255 == variable
	T_Psc PscDiscResp;
	T_Psc PscGet;
	T_Psc PscGetResp;
	T_Psc PscSet;
	T_Psc PscSetResp;
	} T_Pid;

#define MaxLang 11

// -----------------------------

#define RDM_VERBOSE_SC_ALL                              0x00
#define RDM_VERBOSE_SC_ERROR                            0x01
#define RDM_VERBOSE_SC_WARNING                          0x02
#define RDM_VERBOSE_SC_ADVISORY                         0x03
#define RDM_VERBOSE_SC_NONE                             0x04

#define MaxVerbose 5

// defines for slot values are temporary as not yet in standard.

#define RDM_SLOT_ID_DIMMER              0
#define RDM_SLOT_ID_PAN                 1
#define RDM_SLOT_ID_TILT                2
#define RDM_SLOT_ID_COLOUR_1            3
#define RDM_SLOT_ID_COLOUR_2            4
#define RDM_SLOT_ID_GOBO_1              5
#define RDM_SLOT_ID_GOBO_2              6
#define RDM_SLOT_ID_COLOUR_RED          7
#define RDM_SLOT_ID_COLOUR_GREEN        8
#define RDM_SLOT_ID_COLOUR_BLUE         9
#define RDM_SLOT_ID_CONTROL             10

#define MaxSid 11

// Dimmer Curves

#define RDM_DIMMER_CURVE_LINEAR                         0x00
#define RDM_DIMMER_CURVE_SWITCHED                       0x01
#define RDM_DIMMER_CURVE_SQUARE                         0x02
#define RDM_DIMMER_CURVE_S                              0x03
#define RDM_DIMMER_CURVE_FLUORESCENT_MAGNETIC           0x04
#define RDM_DIMMER_CURVE_FLUORESCENT_ELECTRONIC         0x05
#define RDM_DIMMER_CURVE_CUSTOM_1                       0x06
#define RDM_DIMMER_CURVE_CUSTOM_2                       0x07
#define RDM_DIMMER_CURVE_CUSTOM_3                       0x08
#define RDM_DIMMER_CURVE_OTHER                          0xff

#define RdmMaxCurve 10

// Define Dimmer Sub Device Types

#define RDM_DIMMER_TYPE_EMPTY                           0x00
#define RDM_DIMMER_TYPE_DIM                             0x01
#define RDM_DIMMER_TYPE_NON_DIM                         0x02
#define RDM_DIMMER_TYPE_FLUORESCENT                     0x03
#define RDM_DIMMER_TYPE_SINE                            0x04
#define RDM_DIMMER_TYPE_DC                              0x05
#define RDM_DIMMER_TYPE_COLD_CATHODE                    0x06
#define RDM_DIMMER_TYPE_LOW_VOLTAGE                     0x07
#define RDM_DIMMER_TYPE_LED                             0x08
#define RDM_DIMMER_TYPE_HMI                             0x09
#define RDM_DIMMER_TYPE_CONSTANT                        0x0a
#define RDM_DIMMER_TYPE_RELAY_ELECTRONIC                0x0b
#define RDM_DIMMER_TYPE_RELAY_MECHANICAL                0x0c
#define RDM_DIMMER_TYPE_CONTACTOR                       0x0d
#define RDM_DIMMER_TYPE_FREQUENCY_MODULATED             0x0e
#define RDM_DIMMER_TYPE_PULSE_WIDTH                     0x0f
#define RDM_DIMMER_TYPE_BIT_ANGLE                       0x10
#define RDM_DIMMER_TYPE_OTHER                           0xff

#define MaxSubType 18

// -------------------------

#define RDM_PRODUCT_TYPE_DIMMER                         0x01
#define RDM_PRODUCT_TYPE_MOVING_LIGHT                   0x02
#define RDM_PRODUCT_TYPE_SCROLLER                       0x03
#define RDM_PRODUCT_TYPE_SPLITTER                       0x04
#define RDM_PRODUCT_TYPE_ACCESSORY                      0x05
#define RDM_PRODUCT_TYPE_STROBE                         0x06
#define RDM_PRODUCT_TYPE_ATMOSPHERIC                    0x07
#define RDM_PRODUCT_TYPE_DEMUX                          0x08
#define RDM_PRODUCT_TYPE_PROTOCOL_CONV                  0x09
#define RDM_PRODUCT_TYPE_ETHERNET                       0x0a
#define RDM_PRODUCT_TYPE_OTHER                          0xff

#define MaxProductType 11

// -----------  These defines only relate to the way data was returned in the Draft version of this PID

#define RDM_SOFTWARE_PROTOTYPE                          0x00
#define RDM_SOFTWARE_DEVELOPMENT                        0x01
#define RDM_SOFTWARE_BETA                               0x02
#define RDM_SOFTWARE_CUSTOM                             0x03
#define RDM_SOFTWARE_RELEASE                            0xff

#define MaxVersionStatus 5

// -----------  Sensor Types

#define RDM_SENS_TEMPERATURE		0x00
#define RDM_SENS_VOLTAGE		0x01
#define RDM_SENS_CURRENT		0x02
#define RDM_SENS_FREQUENCY		0x03
#define RDM_SENS_RESISTANCE		0x04
#define RDM_SENS_POWER			0x05
#define RDM_SENS_MASS			0x06
#define RDM_SENS_LENGTH			0x07
#define RDM_SENS_AREA			0x08
#define RDM_SENS_VOLUME			0x09
#define RDM_SENS_DENSITY		0x0A
#define RDM_SENS_VELOCITY		0x0B
#define RDM_SENS_ACCELERATION		0x0C
#define RDM_SENS_FORCE			0x0D
#define RDM_SENS_ENERGY			0x0E
#define RDM_SENS_PRESSURE		0x0F
#define RDM_SENS_TIME			0x10
#define RDM_SENS_ANGLE			0x11
#define RDM_SENS_POSITION_X		0x12
#define RDM_SENS_POSITION_Y		0x13
#define RDM_SENS_POSITION_Z		0x14
#define RDM_SENS_ANGULAR_VELOCITY	0x15
#define RDM_SENS_LUMINOUS_INTENSITY	0x16
#define RDM_SENS_LUMINOUS_FLUX		0x17
#define RDM_SENS_ILLUMINANCE		0x18
#define RDM_SENS_CHROMINANCE_RED	0x19
#define RDM_SENS_CHROMINANCE_GREEN	0x1a
#define RDM_SENS_CHROMINANCE_BLUE	0x1b
#define RDM_SENS_CONTACTS		0x1c
#define RDM_SENS_MEMORY			0x1d
#define RDM_SENS_ITEMS			0x1e
#define RDM_SENS_HUMIDITY		0x1f
#define RDM_SENS_COUNTER_16BIT		0x20
#define RDM_SENS_OTHER			0x7f

#define MaxSensorTypes 			0x80

// -----------  Sensor Units

#define RDM_UNIT_NONE			0x00
#define RDM_UNIT_CENTIGRADE		0x01
#define RDM_UNIT_VOLTS_DC		0x02
#define RDM_UNIT_VOLTS_AC_PEAK		0x03
#define RDM_UNIT_VOLTS_AC_RMS		0x04
#define RDM_UNIT_AMPERE_DC		0x05
#define RDM_UNIT_AMPERE_AC_PEAK		0x06
#define RDM_UNIT_AMPERE_AC_RMS		0x07
#define RDM_UNIT_HERTZ			0x08
#define RDM_UNIT_OHMS			0x09
#define RDM_UNIT_WATT			0x0a
#define RDM_UNIT_KILOGRAM		0x0b
#define RDM_UNIT_METRES			0x0c
#define RDM_UNIT_METRES2		0x0d
#define RDM_UNIT_METRES3		0x0e
#define RDM_UNIT_KG_PER_M3		0x0f
#define RDM_UNIT_METRES_PER_SECOND	0x10
#define RDM_UNIT_METRES_PER_SECOND2	0x11
#define RDM_UNIT_NEWTON			0x12
#define RDM_UNIT_JOULE			0x13
#define RDM_UNIT_PASCAL			0x14
#define RDM_UNIT_SECOND			0x15
#define RDM_UNIT_DEGREE			0x16
#define RDM_UNIT_STERADIAN		0x17
#define RDM_UNIT_CANDELA		0x18
#define RDM_UNIT_LUMEN			0x19
#define RDM_UNIT_LUX			0x1a
#define RDM_UNIT_IRE			0x1b
#define RDM_UNIT_BYTE			0x1c

#define MaxSensorUnits 			0x1d

// -----------  Sensor Prefix  RDM Standard

#define RDM_PREFIX_NONE			0x00
#define RDM_PREFIX_DECI			0x01
#define RDM_PREFIX_CENTI 		0x02
#define RDM_PREFIX_MILLI 		0x03
#define RDM_PREFIX_MICRO 		0x04
#define RDM_PREFIX_NANO			0x05
#define RDM_PREFIX_PICO			0x06
#define RDM_PREFIX_FEMPTO		0x07
#define RDM_PREFIX_ATTO			0x08
#define RDM_PREFIX_ZEPTO		0x09
#define RDM_PREFIX_YOCTO		0x0A

#define RDM_PREFIX_BAD1			0x0B
#define RDM_PREFIX_BAD2			0x0C
#define RDM_PREFIX_BAD3			0x0D
#define RDM_PREFIX_BAD4			0x0E
#define RDM_PREFIX_BAD5			0x0F
#define RDM_PREFIX_BAD6			0x10

#define RDM_PREFIX_DECA			0x11
#define RDM_PREFIX_HECTO		0x12
#define RDM_PREFIX_KILO			0x13
#define RDM_PREFIX_MEGA			0x14
#define RDM_PREFIX_GIGA			0x15
#define RDM_PREFIX_TERRA		0x16
#define RDM_PREFIX_PETA			0x17
#define RDM_PREFIX_EXA			0x18
#define RDM_PREFIX_ZETTA		0x19
#define RDM_PREFIX_YOTTA		0x1A

#define MaxSensorPrefix			0x1B

// -----------  Bulk Block Defines  RDM Draft plus all AL product uploads

#define RDM_BB_FIRST	0x01
#define RDM_BB_CONTINUE	0x02
#define RDM_BB_RETRY	0x03
#define RDM_BB_FINAL	0x04

#define MaxBulkBlock 5

// -----------  Bulk Request Defines  RDM Draft plus all AL product uploads

#define RDM_BR_FIRST		0x01
#define RDM_BR_MORE		0x02
#define RDM_BR_RETRY		0x03

#define RDM_BR_NEGOTIATED	0x05	// not rdm defined - used internally in driver to show block size negotiation completed
#define RDM_BR_ACK_BULK 	0x06	// not rdm defined - used internally in driver to show final packet AckBulk has been received

#define MaxBulkRequest 4

// -----------  Bulk Data Defines  RDM Draft plus all AL product uploads

#define RDM_BD_DDL		0x01
#define RDM_BD_FIRMWARE		0x02
#define RDM_BD_CURVE		0x03

// -----------  Nak Reason Codes - RDM Standard

#define RDM_NR_UNKNOWN_PID			0x0000
#define RDM_NR_FORMAT_ERROR			0x0001
#define RDM_NR_HARDWARE_FAULT			0x0002
#define RDM_NR_PROXY_REJECT			0x0003
#define RDM_NR_PROTECT				0x0004
#define RDM_NR_UNSUPPORTED_COMMAND_CLASS	0x0005
#define RDM_NR_DATA_OUT_OF_RANGE		0x0006
#define RDM_NR_BUFFER_FULL			0x0007
#define RDM_NR_UNSUPPORTED_PACKET_SIZE		0x0008
#define RDM_NR_SUB_DEVICE_OUT_OF_RANGE		0x0009

#define MaxNakReason 0x0a

extern T_Pid PidLookup[];
extern int sizeofPidLookup;

extern T_Pid LanguageLookup[];
extern int sizeofLanguageLookup;

extern T_Pid VerboseLookup[];
extern int sizeofVerboseLookup;

extern T_Pid SubTypeLookup[];
extern int sizeofSubTypeLookup;

extern T_Pid ProductTypeLookup[];
extern int sizeofProductTypeLookup;

extern T_Pid VersionStatusLookup[];
extern int sizeofVersionStatusLookup;

extern T_Pid SensorTypeLookup[];
extern int sizeofSensorTypeLookup;

extern T_Pid SensorUnitsLookup[];
extern int sizeofSensorUnitsLookup;

extern T_Pid SensorPrefixLookup[];
extern int sizeofSensorPrefixLookup;

extern T_Pid BulkBlockLookup[];
extern int sizeofBulkBlockLookup;

extern T_Pid BulkRequestLookup[];
extern int sizeofBulkRequestLookup;

extern T_Pid NakReasonLookup[];
extern int sizeofNakReasonLookup;

#pragma pack() //back to normal data structure packing

#endif

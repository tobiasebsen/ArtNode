
// OEM Codes (Byte swapped for net order)

#define OemDMXHub      	0x0000	       //	Artistic Licence DMX-Hub    (Dip 0000 or 1000)
#define OemNetgate	0x0001	       //	ADB version DMX-Hub         (Dip 0001 or 1001)
#define OemMAHub       	0x0002	       //	MA Lighting version DMX-Hub (Dip 0010 or 1010)
#define OemEtherLynx   	0x0003	       //	Artistic Licence Ether-Lynx

#define OemLewLightCv2	0x0004	       //       Awaiting details of implementation
#define OemHighEnd	0x0005	       //       Awaiting details of implementation
#define OemAvoArt2000	0x0006	       //       Dimmer 2 x DMX input
#define OemAl5000	0x0007	       //	2 output Art-Net II processor chip. No RDM		

#define OemDownLink	0x0010	       //	Artistic Licence Down-Link
#define OemUpLink	0x0011	       //	Artistic Licence Up-Link
#define OemTrussLinkOp	0x0012	       //	Artistic Licence Truss-Link O/P
#define OemTrussLinkIp	0x0013	       //	Artistic Licence Truss-Link I/P
#define OemNetLinkOp	0x0014	       //	Artistic Licence Net-Link O/P
#define OemNetLinkIp	0x0015	       //	Artistic Licence Net-Link I/P
#define OemRadioLinkOp	0x0016	       //	Artistic Licence Radio-Link O/P
#define OemRadioLinkIp	0x0017	       //	Artistic Licence Radio-Link I/P

#define OemDfdDownLink 	0x0030	       //	Doug Fleenor Design Down-Link
#define OemDfdUpLink 	0x0031	       //	Doug Fleenor Design Up-Link

#define OemGdDownLink 	0x0050	       //	Goddard Design Down-Link
#define OemGdUpLink 	0x0051	       //	Goddard Design Up-Link

#define OemAdbDownLink 	0x0070	       //	ADB Down-Link
#define OemAdbUpLink 	0x0071	       //	Adb Up-Link

#define OemAdbWifiRem 	0x0072	       //	Adb WiFi remote control

// 0x0072 - 0x007f assigned to ADB.


#define OemAux0Down	0x0080	       //	Unallocated Code
#define OemAux0Up 	0x0081	       //	Unallocated Code

#define OemAux1Down	0x0082	       //	Unallocated Code
#define OemAux1Up 	0x0083	       //	Unallocated Code

#define OemAux2Down	0x0084	       //	Unallocated Code
#define OemAux2Up 	0x0085	       //	Unallocated Code

#define OemAux3Down	0x0086	       //	Unallocated Code
#define OemAux3Up 	0x0087	       //	Unallocated Code

#define OemAux4Down	0x0088	       //	Unallocated Code
#define OemAux4Up 	0x0089	       //	Unallocated Code

#define OemAux5Down	0x008a	       //	Unallocated Code
#define OemAux5Up 	0x008b	       //	Unallocated Code

#define OemZero1	0x008c	       //	Zero 88   2 port output node
#define OemZero2	0x008d	       //	Zero 88   2 port input node

#define OemPig1	 	0x008e	       //	Flying Pig  2 port output node
#define OemPig2	 	0x008f	       //	Flying Pig  2 port input node

#define OemElcNode2 	0x0090	       //	ELC 2 port node - soft i/o
#define OemElcNode4 	0x0091	       //	ELC 4 in, 4 out node
//---0x009f reserved for Elc

#define OemEtherLynx0   	0x0100	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx1   	0x0101	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx2   	0x0102	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx3   	0x0103	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx4   	0x0104	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx5   	0x0105	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx6   	0x0106	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx7   	0x0107	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx8   	0x0108	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynx9   	0x0109	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxa   	0x010a	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxb   	0x010b	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxc   	0x010c	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxd   	0x010d	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxe   	0x010e	 //	Reserved for oem versions of Ether-Lynx
#define OemEtherLynxf   	0x010f	 //	Reserved for oem versions of Ether-Lynx

#define OemCataLynx   	        0x0110	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx1   	        0x0111	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx2   	        0x0112	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx3   	        0x0113	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx4   	        0x0114	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx5   	        0x0115	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx6   	        0x0116	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx7   	        0x0117	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx8   	        0x0118	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynx9   	        0x0119	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxa   	        0x011a	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxb   	        0x011b	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxc   	        0x011c	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxd   	        0x011d	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxe   	        0x011e	 //	Reserved for oem versions of Cata-Lynx
#define OemCataLynxf   	        0x011f	 //	Reserved for oem versions of Cata-Lynx

#define OemPixiPowerF1a   	0x0120	 	// Artistic Licence Pixi-Power F1. 2 x DMX O/P (emulated) + RDM Support

#define OemMaxNode4 		0x0180       //	Maxxyz 4 in, 4 out node

#define OemEnttec0	   	0x0190	 //	Reserved for Enttec
#define OemEnttec1	   	0x0191	 //	Reserved for Enttec
#define OemEnttec2	   	0x0192	 //	Reserved for Enttec
#define OemEnttec3	   	0x0193	 //	Reserved for Enttec
#define OemEnttec4	   	0x0194	 //	Reserved for Enttec
#define OemEnttec5	   	0x0195	 //	Reserved for Enttec
#define OemEnttec6	   	0x0196	 //	Reserved for Enttec
#define OemEnttec7	   	0x0197	 //	Reserved for Enttec
#define OemEnttec8	   	0x0198	 //	Reserved for Enttec
#define OemEnttec9	   	0x0199	 //	Reserved for Enttec
#define OemEntteca	   	0x019a	 //	Reserved for Enttec
#define OemEnttecb	   	0x019b	 //	Reserved for Enttec
#define OemEnttecc	   	0x019c	 //	Reserved for Enttec
#define OemEnttecd	   	0x019d	 //	Reserved for Enttec
#define OemEnttece	   	0x019e	 //	Reserved for Enttec
#define OemEnttecf	   	0x019f	 //	Reserved for Enttec


#define OemIesPbx	   	0x01a0	 //	Ies PBX (Uses 1 logical universe)
#define OemIesExecutive	        0x01a1	 //	Ies Executive (Uses 2 logical universe)
#define OemIesMatrix   	        0x01a2	 //	Ies Matrix (Uses 2 logical universe)
#define OemIes3	   	        0x01a3	 //	Reserved for Ies
#define OemIes4	   	        0x01a4	 //	Reserved for Ies
#define OemIes5	   	        0x01a5	 //	Reserved for Ies
#define OemIes6	   	        0x01a6	 //	Reserved for Ies
#define OemIes7	   	        0x01a7	 //	Reserved for Ies
#define OemIes8	   	        0x01a8	 //	Reserved for Ies
#define OemIes9	   	        0x01a9	 //	Reserved for Ies
#define OemIesa	   	        0x01aa	 //	Reserved for Ies
#define OemIesb	   	        0x01ab	 //	Reserved for Ies
#define OemIesc	   	        0x01ac	 //	Reserved for Ies
#define OemIesd	   	        0x01ad	 //	Reserved for Ies
#define OemIese	   	        0x01ae	 //	Reserved for Ies
#define OemIesf	   	        0x01af	 //	Reserved for Ies


#define OemEdiEdig   	        0x01b0	 //	EDI Edig (4 in, 4 out)

#define OemOpenlux   	        0x01c0	 //	Nondim Enterprises Openlux (4 in, 4 out)

#define OemHippo1   	        0x01d0	 //	Green Hippo - Hippotizer (emulates 1 in)

#define OemVnrBooster  	        0x01e0	 //	VNR - Merger-Booster (4in 4out)

#define OemRobeIle  	        0x01f0	 //	RobeShow Lighting - ILE - (1in 1out)
#define OemRobeController       0x01f1	 //	RobeShow Lighting - Controller - (4in 4out)


#define OemDownLynx2	0x0210	       //	Artistic Licence Down-Lynx 2 (RDM Version)
#define OemUpLynx2	0x0211	       //	Artistic Licence Up-Lynx 2 (RDM Version)
#define OemTrussLynxOp2	0x0212	       //	Artistic Licence Truss-Lynx O/P (RDM Version)
#define OemTrussLynxIp2	0x0213	       //	Artistic Licence Truss-Lynx I/P (RDM Version)
#define OemNetLynxOp2	0x0214	       //	Artistic Licence Net-Lynx O/P (RDM Version)
#define OemNetLynxIp2	0x0215	       //	Artistic Licence Net-Lynx I/P (RDM Version)
#define OemRadioLynxOp2	0x0216	       //	Artistic Licence Radio-Lynx O/P (RDM Version)
#define OemRadioLynxIp2	0x0217	       //	Artistic Licence Radio-Lynx I/P (RDM Version)

#define OemDfdDownLynx2	0x0230	       //	Doug Fleenor Design Down-Lynx (RDM Version)
#define OemDfdUpLynx2 	0x0231	       //	Doug Fleenor Design Up-Lynx (RDM Version)

#define OemGdDownLynx2 	0x0250	       //	Goddard Design Down-Lynx (RDM Version)
#define OemGdUpLynx2 	0x0251	       //	Goddard Design Up-Lynx (RDM Version)

#define OemAdbDownLynx2	0x0270	       //	ADB Down-Lynx (RDM Version)
#define OemAdbUpLynx2 	0x0271	       //	Adb Up-Lynx (RDM Version)

#define OemLscDownLynx2	0x0280	       //	LSC Down-Lynx (RDM version)
#define OemLscUpLynx2 	0x0281	       //	LSC Up-Lynx (RDM version)


#define OemAux1Down2	0x0282	       //	Unallocated Code
#define OemAux1Up2 	0x0283	       //	Unallocated Code

#define OemAux2Down2	0x0284	       //	Unallocated Code
#define OemAux2Up2 	0x0285	       //	Unallocated Code

#define OemAux3Down2	0x0286	       //	Unallocated Code
#define OemAux3Up2 	0x0287	       //	Unallocated Code

#define OemAux4Down2	0x0288	       //	Unallocated Code
#define OemAux4Up2 	0x0289	       //	Unallocated Code

#define OemAux5Down2	0x028a	       //	Unallocated Code
#define OemAux5Up2 	0x028b	       //	Unallocated Code

#define OemGoldOp	0x0300	 	//	Goldstage DMX-net/O = 2 x dmx out
#define OemGoldIp	0x0301	 	//	Goldstage DMX-net/I = 2 x dmx in
#define OemGold2	0x0302	 	//	Goldstage
#define OemGold3	0x0303	 	//	Goldstage
#define OemGoldGT96	0x0304	 	//	Goldstage GT-96 =1 dmx out, auditorium dimmer
#define OemGoldIII  	0x0305  	//  	Goldstage III Light Concole:=1×dmx out, with remote control.
#define OemGold6	0x0306	 	//	Goldstage
#define OemGold7	0x0307	 	//	Goldstage
#define OemGoldKTG5S  	0x0308  	//  	Goldstage KTG-5S Dimmer=2×dmx in
#define OemGold9	0x0309	 	//	Goldstage
#define OemGolda	0x030a	 	//	Goldstage
#define OemGoldb	0x030b	 	//	Goldstage
#define OemGoldc	0x030c	 	//	Goldstage
#define OemGoldd	0x030d	 	//	Goldstage
#define OemGolde	0x030e	 	//	Goldstage
#define OemGoldf	0x030f	 	//	Goldstage





#define OemStarGate	0x0310		// 	Sunset Dynamics, StarGateDMX - 4 in, 4 out, no RDM.

#define	OemEthDmx8	0x0320		//	Manufacturer: Luminex LCE, Product: Ethernet-DMX8, Notes: 4x DMX in. 4x DMX out. RDM: No
#define	OemEthDmx2	0x0321		//	Manufacturer: Luminex LCE, Product: Ethernet-DMX2, Notes: 2x DMX in. 2x DMX out. RDM: No
#define	OemEthDmx4	0x0322		//	Manufacturer: Luminex LCE, Product: Ethernet-DMX4, Notes: 4x DMX in. 4x DMX out. RDM: No
#define	OemEthLumiMon	0x0323		//	Manufacturer: Luminex LCE, Product: LumiNet Monitor, network monitor tool with RDM



#define	OemBlueHyst	0x0330		//	Man: Invisible Rival, Prod: Blue Hysteria, 2x DMX In, 2 x DMX out, No RDM

#define OemAvoD4Vision	0x0340	 	//	Avolites Diamond 4 Vision - 8 DMX out
#define OemAvoD4Elite	0x0341	 	//	Avolites Diamond 4 elite - 8 DMX out
#define OemAvoPearlOff	0x0342	 	//	Avolites Peal offline 4 DMX out
#define OemAvoTitan	0x0343	 	//	Avolites, Product Name - Titan, Number of DMX inputs - 0, Number of DMX outputs - 12 Universes, Are DMX ports physical or emulated - 4 physical, 8 emulated, Is RDM supported - No

// Avolites reserved block to 0x034f

#define OemBfEtherMuxRem	0x0350	 	//	Bigfoot EtherMux Remote 1 DMX in
#define OemBfEtherMuxServ	0x0351	 	//	Bigfoot EtherMux Server 1 DMX in 1 DMX out
#define OemBfEtherMuxDesk	0x0352	 	//	Bigfoot EtherMux Desktop 1 DMX out

#define	OemElink512		0x0360		// Ecue 512 output device
#define	OemElink1024		0x0361		// Ecue 1024 output device
#define	OemElink2048		0x0362		// Ecue 2048 output device

#define OemKissBox              0x0370          // Kiss-Box DMX Box 1 in 1 out RDM support by utilities

#define OemArkaosVjd            0x0380          // Arkaos V J DMX. 1 x DMX in. No o/p. No RDM.

#define OemDeShowGate           0x0390          //Digital Enlightenment - ShowGate - 4x dmx in, 4x dmx out, no rdm

#define OemDesNeli              0x03a0          // DES - NELI 6,12,24 chan. 1x dmx in, 1x dmx out, no rdm

#define	OemSunLiteEsaip		0x03b0		// SunLite Easy Standalone IP 1 x DMX out
#define	OemSunLiteMagic3d	0x03b1		// SunLite Magic 3D Easy View 4 x DMX out

#define	OemHesCatalyst1	        0x03c0		// Catalyst
#define	OemRbPixelMad1	        0x03d0		// Bleasdale PixelMad

#define	OemLehighDx2	        0x03e0		// Lehigh Electric Products Co - DX2 Dimming rack - 2 in, 1 out, no rdm

#define	OemHorizon1	        0x03f0		// Horizon Controller

#define OemAudioSceneO          0x0400          // Audio Scene 2 x out + no rdm
#define OemAudioSceneI          0x0401          // Audio Scene 2 x in + no rdm

#define OemPathportO2           0x0410          // Pathport 2 x out
#define OemPathportI2           0x0411          // Pathport 2 x in
#define OemPathportO1           0x0412          // Pathport 1 x out
#define OemPathportI1           0x0413          // Pathport 1 x in

#define	OemBotex1		0x0420		// Botex 2 in - 2 out.

#define	OemSnLibArtNet		0x0430		// Simon Newton LibArtNet. 4 in. 4 out.
#define	OemSnLlaLive		0x0431		// Simon Newton LLA Live. 4 in. 4 out.

#define	OemTeamXlntIp		0x0440		// Manu: XLNT. Designers: Team Projects. 2 x DMX Input Node.
#define	OemTeamXlntOp		0x0441		// Manu: XLNT. Designers: Team Projects. 2 x DMX Output Node.

#define	OemSystemNet4e		0x0450		// Schnick-Schnack-Systems Systemnetzteil 4E 4 out. No Rdm
#define	OemSystemOne		0x0451		// Schnick-Schnack-Systems, Prod: SysOne, DMX Out: 2, DMX In: 0, RDM: No
#define	OemSystemPixGate	0x0452		// Schnick-Schnack-Systems, Prod: SysOne, DMX Out: 0, DMX In: 0, RDM: No

#define	OemDomDvNetDmx		0x0460		// Dom Dv NetDmx - User configured functionality. Max 1 in / 1 out

#define	OemSeanChrisProjPal	0x0470		// Sean Christopher - Projection Pal. 1 x i/p + RDM
#define	OemSeanChrisLxRem	0x0471		// Sean Christopher - The Lighting Remote. 4 x i/p + 4 x O/P no RDM
#define OemLssMasterGate        0x0472          // LSS Lighting MasterGate. Profibus interface
#define OemLssRailController    0x0473          // LSS Lighting Rail Controller. Profibus interface
#define OemLssMasterMini	0x0474          // LSS Lighting Master Port Mini. 1 dmx out with RDM and PoE
#define OemLssPowerDim		0x0475          // LSS Lighting Powerdim. 2 dmx out with RDM



#define OemOpenClear0           0x0490          // Reserved for Open Clear
#define OemOpenClear1           0x0491
#define OemOpenClear2           0x0492
#define OemOpenClear3           0x0493
#define OemOpenClear4           0x0494
#define OemOpenClear5           0x0495
#define OemOpenClear6           0x0496
#define OemOpenClear7           0x0497
#define OemOpenClear8           0x0498
#define OemOpenClear9           0x0499
#define OemOpenCleara           0x049a
#define OemOpenClearb           0x049b
#define OemOpenClearc           0x049c
#define OemOpenCleard           0x049d
#define OemOpenCleare           0x049e
#define OemOpenClearf           0x049f          // Reserved for Open Clear

//

#define OemMa2PortNode         	0x04b0	 	// MA 2 port node, programmable i/o
#define OemMaNsp             	0x04b1          // MA Network signal processor.
#define OemMaNdp             	0x04b2          // MA Network dimmer processor
#define OemMaMaRemote         	0x04b3          // MA GrandMA network input. Single port - not configurable
#define OemMa4             	0x04b4
#define OemMa5             	0x04b5
#define OemMa6             	0x04b6
#define OemMa7             	0x04b7
#define OemMa8             	0x04b8
#define OemMa9             	0x04b9
#define OemMaa             	0x04ba
#define OemMab             	0x04bb
#define OemMac             	0x04bc
#define OemMad             	0x04bd
#define OemMae             	0x04be
#define OemMaf             	0x04bf	 	// Reserved MA

#define OemMadrix1		0x04c0		// Co: Inoage. Prod: Madrix 1, 1 x emulated dmx out, no rdm
#define OemGlpIon1		0x04c1		// Co: GLP. Prod: Ion.control.pc, 1 x emulated dmx out, no rdm. Developed by Madrix
#define OemMadrix2		0x04c2		// Co: inoage. Prod: ArtNetSnuffler, 4 x dmx in, no rdm
#define OemMadrix3		0x04c3		// Co: inoage. Prod: Plexus, 2xOut 2xIn RDM
#define OemMadrix4          	0x04c4          // Co: inoage. Prod: Madrix3.X, 4 x emulated dmx out, no rdm
#define OemMadrix5		0x04c5		// Co: inoage. Prod: LUNA, Out 8 (2x Out 4 configuration using binding), In 1, RDM No
#define OemMadrix6		0x04c6		// Co: inoage. Prod: (reserved for future products)
#define OemMadrix7		0x04c7		// Co: inoage. Prod: (reserved for future products)
#define OemMadrix8		0x04c8		// Co: inoage. Prod: (reserved for future products)
#define OemMadrix9		0x04c9		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixa		0x04ca		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixb		0x04cb		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixc		0x04cc		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixd		0x04cd		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixe		0x04ce		// Co: inoage. Prod: (reserved for future products)
#define OemMadrixf		0x04cf		// Co: inoage. Prod: (reserved for future products)

#define OemXilver0              0x04d0          // Co: Team Projects, Prod: Xilver Controller. 1 x DMX out.

#define OemWybron0              0x04e0          // Co Wybron. Prod: PSU. 2 x dmx out emulated.

#define	OemPharosLpcx		0x04f0		// Pharos LPCX 1 x dmx i/p. 1-200 emulated x DMX o/p. No RDM
#define	OemPharosLpc1		0x04f1		// Company: Pharos Architectural Controls, Product: LPC1, Num DmxIn: 0, Num DmxOut: 1 (emulated)
#define	OemPharosLpc2		0x04f2		// Company: Pharos Architectural Controls, Product: LPC2, Num DmxIn: 0, Num DmxOut: 2 (emulated)
#define	OemPharos3		0x04f3		// Reserved for Pharos
#define	OemPharos4		0x04f4		// Reserved for Pharos
#define	OemPharos5		0x04f5		// Reserved for Pharos
#define	OemPharos6		0x04f6		// Reserved for Pharos
#define	OemPharos7		0x04f7		// Reserved for Pharos
#define	OemPharos8		0x04f8		// Reserved for Pharos
#define	OemPharos9		0x04f9		// Reserved for Pharos
#define	OemPharosa		0x04fa		// Reserved for Pharos
#define	OemPharosb		0x04fb		// Reserved for Pharos
#define	OemPharosc		0x04fc		// Reserved for Pharos
#define	OemPharosd		0x04fd		// Reserved for Pharos
#define	OemPharose		0x04fe		// Reserved for Pharos
#define	OemPharosf		0x04ff		// Reserved for Pharos

#define	OemHesStart		0x0500		// HES block start
#define	OemHesDP8000		0x0500		// HES DP8000 - 16 Universe Art-Net source
#define	OemHesFullBoar		0x0501		// HES DP8000 - 12 Universe Art-Net source
#define	OemHesDP2000		0x0502		// HES DP2000 - 4 Universe Art-Net source
#define OemHesEnd		0x05ff		// HES block end

#define	OemSpectP32		0x0600		// Spectrum Manufacturing Chroma-Q PSU32 designed and manufactured by Artistic Licence.

#define	OemEthDec2		0x0610		// Prod: EthDec2. Co: DmxDesign. Designer: Chris Tolley - Eth to 2 x DMX out, no RDM.

#define	OemWodieMedia		0x0620		// Prod: ArtMedia. Co: WodieLite. Designer: Juan Carlos Perez De Castro. Detail: Var emulated dmx i/p 0-4. Var emulated dmx o/p 0-4. Rdm not supported.


#define	OemElementViz	0x0800	       //	Element Labs Vizomo. 1 x DMX emulated I/P. 1 x DMX emulated O/P. No RDM

#define	OemDatatonWatch	0x0810	       //	Dataton Watchout. 1 x DMX emulated I/P. 1 x DMX emulated O/P. No RDM

#define	OemBarco1200	0x0820		//	Barco DML-1200. 1 x DMX i/p.
#define	OemBarcoFLM	0x0821		//	1) Company Name : Barco, 2) Product Name : FLM, 3) Number of DMX inputs : 0, 4) Number of DMX outputs : 0, 5) Are DMX ports physical or emulated : emulated, 6) Is RDM supported : No
#define	OemBarcoCLM	0x0822		//	1) Company Name : Barco, 2) Product Name : CLM, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 0, 5) Are DMX ports physical or emulated : physical, 6) Is RDM supported : No


#define OemCityShowTx	0x0830		//	City Theatrical SHoW DMX Transmitter. 1 x DMX o/p over wifi. RDM Standard
#define OemCityShowNeo	0x0831		//	City Theatrical SHoW DMX Neo Transceiver, 3) Number of DMX inputs: 0, 4) Number of DMX outputs: 2, 5) Are DMX ports physical or emulated: Physical, 6) Is RDM supported: Yes, 7) If so, is it draft or release: Release V1.0

#define OemQuantDen	0x0840		//	Quantukm Logic DMX Ethernet Node. 2 x DMX o/p. 2 x DMX i/p. No RDM.

#define	OemMasterSwitch	0x0850		//	LSS Lighting MasterSwitch 1 x DMX out, 2 x DMX in. No RDM
#define	OemMasterPort	0x0851		//	LSS Lighting MasterPort 4 x DMX out/ in user select. No RDM
#define	OemMasterPortPs	0x0852		//	LSS Lighting MasterPortPSU 4 x DMX out/ in user select. No RDM
#define	OemMasterDmxV	0x0853		//	LSS Lighting DMX-View 0 x DMX out/ 1 x DMX in. No RDM

#define	OemFutDesTrio	0x0860		//	Future Design ApS, Product Name: FD ART-NET-Trio, DMX Inputs: 1, DMX Outputs: 2, DMX ports are physical, RDM V1.0 will become supported

#define	OemQme700p	0x0870		//	Company name: Qmaxz Lighting Products name: QME700P Number of DMX inputs: 1 Number of DMX outputs: 1 DMX ports are: Physical RMD supported: Yes, version 1.0 Draft of release V1.0: Yes
#define OemLuxNode1 	0x0871 		//	Company Name : Lux Lumen Product Name : Lux Node Number of DMX inputs : no inputs Number of DMX outputs : 1 DMX output in this version  Are DMX ports physical or emulated : physical port Is RDM supported : no

#define OemMartE2DMX8 	0x0880 		//	Company Name : Martin Product Name : Ether2DMX8 Node Number of DMX inputs : no inputs Number of DMX outputs : 8 DMX output with dual IP Addresses DMX physical or emulated : physical port Is RDM supported : no

#define OemPhoenixShGa 	0x0890 		//	Company Name : PHOENIXstudios Remsfeld, Product Name: PC_DIMMER ShowGate, Number of DMX Inputs: 4 (variable), Number of DMX Outputs: 4 (variable), Are DMX ports physical or emulated: physical, Is RDM supported: no

#define OemLasAnDspIp 	0x0891 		//	Company Name: "LaserAnimation Sollinger GmbH" (or short: "LaserAnimation"), Product Name: "Lasergraph DSP" (or "Lasergraph-DSP" if spaces are not allowed), Number of DMX inputs: 1, Number of DMX outputs: 0, Is RDM supported: No
#define OemLasAnDspOp 	0x0892 		//	Company Name: "LaserAnimation Sollinger GmbH" (or short: "LaserAnimation"), Product Name: "Lasergraph DSP" (or "Lasergraph-DSP" if spaces are not allowed), Number of DMX inputs: 0, Number of DMX outputs: 1, Is RDM supported: No

#define OemCoemInfSpotS 0x08a0 		//	Company Name: COEMAR, Product Name: Infinity Spot S, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfWashS 0x08a1 		//	Company Name: COEMAR, Product Name: Infinity Wash S, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfAclS  0x08a2 		//	Company Name: COEMAR, Product Name: Infinity ACL S, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfSptXL 0x08a3 		//	Company Name: COEMAR, Product Name: Infinity Spot XL, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfWshXL 0x08a4 		//	Company Name: COEMAR, Product Name: Infinity Wash XL, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemDR1p	0x08a5 		//	Company Name: COEMAR, Product Name: DR1+, Number of DMX inputs 2, Number of DMX outputs 2, Are DMX ports physical or emulated: Physical, Is RDM supported No

#define OemCoemInfSpotM 0x08a6 		//	Company Name: COEMAR, Product Name: Infinity Spot M, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfWashM 0x08a7 		//	Company Name: COEMAR, Product Name: Infinity Wash M, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No
#define OemCoemInfAclM  0x08a8 		//	Company Name: COEMAR, Product Name: Infinity ACL M, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated: Physical, Is RDM supported No


#define	OemDmxCtrl1	0x08b0		//	Company Name: DMXControl, Product Name: DMXControl, Number DMX out supported: 1, Number DMX in supported: 1, RDM Supported? No
#define	OemDmxCtrl2Avr	0x08b1		//	Company Name: DMXControl, Product Name: AvrArtNode, Number DMX out supported: 1, Number DMX in supported: 1 (only one universe, In/Out selectable) RDM Supported? No,

#define OemChamSysMq	0x08c0		//	Company Name: ChamSys, Product Name: MagicQ, Type: Console

#define OemFishNavAut	0x08d0		//	Company Name: Fisher Technical Services Inc, Product Name: Navigator Automation System, Number of DMX inputs: 4 Universes, Number of DMX outputs: 4 Universes, Are DMX ports physical or emulated: All DMX ports are emulated,Is RDM supported: Yes Standard

#define OemElecSpVp40	0x08e0		//	Company Name: Electric Spark, Product Name: VPIX40, Number of DMX inputs: 1 Universes, Number of DMX outputs: 3 Universes, Are DMX ports physical or emulated: All DMX ports are emulated,Is RDM supported: Yes Standard

#define OemJscAg1p	0x08f0		//	Company Name: JSC, Product Name: ArtGate Pro 1P, Number of DMX inputs: 1 Universes, Number of DMX outputs: 1 Universes, Are DMX ports physical or emulated: All DMX ports are physical, Is RDM supported: No
#define OemJscAg2p	0x08f1		//	Company Name: JSC, Product Name: ArtGate Pro 2P, Number of DMX inputs: 2 Universes, Number of DMX outputs: 2 Universes, Are DMX ports physical or emulated: All DMX ports are physical, Is RDM supported: No
#define OemJscAg4p	0x08f2		//	Company Name: JSC, Product Name: ArtGate Pro 4P, Number of DMX inputs: 4 Universes, Number of DMX outputs: 4 Universes, Are DMX ports physical or emulated: All DMX ports are physical, Is RDM supported: No

#define OemQqpWrkLm3r	0x0900		//	Company Name: EQUIPSON S.A., Product Name: WORK LM-3R, Number of DMX inputs: 0, Number of DMX outputs: 1, DMX ports are physical, RDM is not supported
#define OemQqpWrkLm3e	0x0901		//	Company Name: EQUIPSON S.A., Product Name: WORK LM-3E, Number of DMX inputs: 1, Number of DMX outputs: 0, DMX ports are physical, RDM is not supported

#define OemTecArt1chn	0x0910		//	Company name : TecArt Lighting, Product Name : 1CH Node, Number of DMX inputs : 1CH DMX inputs, Number of DMX outputs : 1CH DMX inputs, Are DMX Ports physical or emulated : DMX Ports, Is RDM supported : RDM supported, If so , is it Draft or Release V1.0 : Release V1.0
#define OemTecArtMerge	0x0911		//	Company name : TecArt Lighting, Product Name : Ethernet Merger, Number of DMX inputs : Number of DMX outputs : 1CH DMX inputs, Are DMX Ports physical or emulated : DMX Ports physical, Is RDM supported : RDM supported, If so , is it Draft or Release V1.0 : Release V1.0
#define OemTecArt2chn	0x0912		//	Company name : TecArt Lighting, Product Name : 2CH Node, Number of DMX inputs : 2CH DMX inputs, Number of DMX outputs : 2CH DMX inputs, Are DMX Ports physical or emulated : DMX Ports physical, Is RDM supported : RDM supported, If so , is it Draft or Release V1.0 : Release V1.0

#define OemCooperOrb	0x0920		//	Company Name - Cooper Controls t/a Zero 88, Product Name - ORB, Number of DMX inputs - 1, Number of DMX outputs - 4, Are DMX ports physical or emulated. - Both (DMX Input is physical only), Is RDM supported - Not yet, coming soon, If so, is it Draft or Release V1.0 - Will be release
#define OemCooperOrbXf	0x0921		//	Company Name - Cooper Controls t/a Zero 88, Product Name - ORBxf, Number of DMX inputs - 1, Number of DMX outputs - 4, Are DMX ports physical or emulated. - Both (DMX Input is physical only), Is RDM supported - Not yet, coming soon, If so, is it Draft or Release V1.0 - Will be release
#define OemCooperZeroW1	0x0922		//	Company Name - Cooper Controls t/a Zero 88, Product Name - Zero-Wire CRMX TX RDM 3.	0 DMX inputs (from an Art-Net point-of-view) 4.	1 DMX output 5.	1 physical port 6.	Art-Net RDM support  7.	RDM standard version 1.0
#define OemCooperSoln	0x0923		//	Company Name - Cooper Controls t/a Zero 88, Product Name - Solution, 3) Number of DMX inputs -1, 4) Number of DMX outputs - 4, 5) Are DMX ports physical or emulated. - Both (DMX Input is physical only), 6) Is RDM supported - Not yet, coming soon., 7) If so, is it Draft or Release V1.0 - Will be release
#define OemCooperSolnXl	0x0924		//	Company Name - Cooper Controls t/a Zero 88, Product Name - Solution XL, 3) Number of DMX inputs -1, 4) Number of DMX outputs - 4, 5) Are DMX ports physical or emulated. - Both (DMX Input is physical only), 6) Is RDM supported - Not yet, coming soon. 7) If so, is it Draft or Release V1.0 - Will be release

#define OemCooperEn2Rdm	0x0925		//	Company Name - Cooper Controls t/a Zero 88, 2) Product Name: EtherN.2 RDM, 3) Number of DMX inputs 0, 4) Number of DMX outputs 2, 5) Are DMX ports physical or emulated: Physical, 6) Is RDM supported: Yes, 7) If so, is it Draft or Release V1.0: Release V1.0
#define OemCooperEn8Rdm	0x0926		//	Company Name - Cooper Controls t/a Zero 88, 2) Product Name: EtherN.8 RDM, 3) Number of DMX inputs 0, 4) Number of DMX outputs 2(4 bound, 8 total), 5) Are DMX ports physical or emulated: Physical, 6) Is RDM supported: Yes, 7) If so, is it Draft or Release V1.0: Release V1.0



#define OemEquipWorkLm4	0x0930		//	Company Name: EQUIPSON S.A., Product Name: WORK LM-4, Number of DMX inputs: 0, Number of DMX outputs: 1, DMX ports are physical, RDM is not supported

#define OemLtlLasNet	0x0940		//	Company Name: Laser Technology Ltd., Product Name: LasNet, Number of DMX inputs: 2, Number of DMX outputs: 2, DMX ports are physical, RDM is not supported

#define OemLssDisco	0x0950		//	Company Name: LSS Lighting, Product Name: Discovery, Number of DMX inputs: 4, Number of DMX outputs: 4, DMX ports are not physical, RDM is not supported

#define OemJpk1		0x0960		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk2		0x0961		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk3		0x0962		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk4		0x0963		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk5		0x0964		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk6		0x0965		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk7		0x0966		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk8		0x0967		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk9		0x0968		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk10	0x0969		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk11	0x096a		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk12	0x096b		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk13	0x096c		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk14	0x096d		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk15	0x096e		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported
#define OemJpk16	0x096f		//	Company Name: JPK Systems Limited, Product Name: JPK*, Number of DMX inputs: 1, Number of DMX outputs: 1, DMX ports are physical, RDM Standard is supported

#define OemFres123Tr	0x0970		//	Company Name: Fresnel / Strong, Product Name: Power 12-3 TR-Net, Number of DMX inputs: 0, Number of DMX outputs: 0, DMX ports are emulated, RDM Standard is not supported
#define OemFresNoc1	0x0971		//	Company Name: Fresnel S.A. / Strong, Product Name: Nocturne Stage Control, Number of DMX inputs: 0, Number of DMX outputs: 0, Are DMX ports physical or emulated. Emulated, Is RDM supported NO,
#define OemFresEdmx1	0x0972		//	Company Name: Fresnel S.A. / Strong, Product Name: Ethernet-DMX, Number of DMX inputs: 1, Number of DMX outputs: 2, Are DMX ports physical or emulated. Physical, Is RDM supported: NO



#define OemPrismRev	0x0980		//	Company Name: Prism Projection, Product Name: RevEAL, Number of DMX inputs: 1, Number of DMX outputs: 1, Are DMX ports physical or emulated: physical, Is RDM supported: Yes,

#define OemMovArtMnet	0x0990		//	Company Name: Moving Art, Product Name: M-NET, Number of DMX inputs 1, Number of DMX outputs 1, Are DMX ports physical or emulated. physical, Is RDM supported no, If so, is it Draft or Release V1.0 V1.0

#define OemHplD1	0x09a0		//	Company Name: HPL LIGHT COMPANY. Product Name: DIMMER POWER LIGHT. Number of DMX inputs: 1. Number of DMX outputs: 0. Are DMX ports physical or emulated: PHYSICAL. Is RDM supported: No

#define OemEsiTr1	0x09b0		//	Company Name: Engineering Solutions Inc. Product Name: Tripix controller. Number of DMX inputs: 0. Number of DMX outputs: 2. Are DMX ports physical or emulated: Emulated. Is RDM supported: No.
#define OemE16Nd1	0x09b1		//	Company Name: Engineering Solutions Inc. Product Name: E16 RGB Node Driver. Number of DMX inputs: 0. Number of DMX outputs: 4. Are DMX ports physical or emulated: Emulated. Is RDM supported: No.
#define OemE8Nd1	0x09b2		//	Company Name: Engineering Solutions Inc. Product Name: E8 RGB Node Driver. Number of DMX inputs: 0. Number of DMX outputs: 2. Are DMX ports physical or emulated: Emulated. Is RDM supported: No.
#define OemE4Nd1	0x09b3		//	Company Name: Engineering Solutions Inc. Product Name: E4 RGB Node Driver. Number of DMX inputs: 0. Number of DMX outputs: 1. Are DMX ports physical or emulated: Emulated. Is RDM supported: No.

#define	OemSandB1	0x09c0		//	SAND Network Systems, SandPort/SandBox, 2 DMX inputs, 2 DMX outputs, 2 physical ports, No Art-Net RDM support at this time

#define	OemOarwSm1	0x09d0		//	Company Name: Oarw, Product Name: Screen Monkey, Number of DMX Inputs: 0, Number of DMX Outputs: 1, Are dmx ports physical or emulated: Emulated, Is RDM Supported: Not at this time,

#define	OemMuelNl1	0x09e0		//	Company Name: Mueller Elektronik, Product Name: NetLase, Number of DMX inputs: 2, Number of DMX output: 3, Are DMX inputs physical or emulated: 1 physical input, 1 emulated input, 1 physical output, 2 emulated outputs, Is RDM supported: no

#define	OemLumrCnov2	0x09f0		//	Company Name: LumenRadio AB, CRMX Nova TX2, 2 DMX inputs, 2 DMX outputs, 2 physical ports, No Art-Net RDM support at this time
#define	OemLumrCnov2r	0x09f1		//	Company Name: LumenRadio AB, CRMX Nova TX2 RDM, 2 DMX inputs, 2 DMX outputs, 2 physical ports, RDM standard
#define	OemLumrCnovFx	0x09f2		//	Company Name: LumenRadio AB, CRMX Nova FX, 1 DMX inputs, 1 DMX outputs, 1 physical ports, RDM standard
#define	OemLumrCnovFx2	0x09f3		//	Company Name: LumenRadio AB, CRMX Nova FX2, 2 DMX inputs, 2 DMX outputs, 2 physical ports, RDM standard
#define	OemLumrCoutF1ex	0x09f4		//	Company Name: LumenRadio AB, CRMX Outdoor F1ex, 1 DMX inputs, 1 DMX outputs, 1 physical ports, RDM standard
#define	OemLumrSnova	0x09f5		//	Company Name: LumenRadio AB, SuperNova, 0 DMX inputs, 0 DMX outputs, 0 physical ports, RDM standard

#define	OemSrsNdp12	0x0a00		//	Company Name: SRS Light Design, Product Name: NDP12 - Network Dimmer Pack, Number of DMX inputs: 2, Number of DMX outputs: 2, Are DMX ports physical or emulated. : all are physical, 6) Is RDM supported, Yes, 7) If so, is it Draft or Release V1.0 - it's draft until now.

#define	OemVyvPhot1	0x0a10		//	Company Name: VYV Corporation, Photon, 1x DMX inputs, 0x DMX outputs, Emulated DMX (Ethernet), RDM not supported yet

#define	OemLbLcx	0x0a20		//	Company Name: CDS, Product: LanBox-LCX; 4x DMX in port, 1 DMX out port, no RDM
#define	OemLbLce	0x0a21		//	Company Name: CDS, Product: LanBox-LCE; 2x DMX in port, 1 DMX out port, no RDM
#define	OemLbLcp	0x0a22  	// 	CDS, LanBox-LCP; 2x DMX-in, 1x DMXout, no RDM (RDM will be added later).

#define	OemTotLiMxS	0x0a30		//	Company Name: Total Light, Product: ArtMx Single; 1x DMX in port, 1 DMX out port, no RDM
#define	OemTotLiMxD	0x0a31		//	Company Name: Total Light, Product: ArtMx Dual; 2x DMX in port, 2 DMX out port, no RDM

#define	OemSeaD2000	0x0a40		//	Company Name: Shanghai SeaChip Electronics Co.,Ltd. Product: SC-DMX-2000 ( http://www.seachip.com/pruduct.files/SC-DMX-2000_en.pdf ) 2 INPUT DMX  2 OUTPUT DMX physical DMX (use hardware of uart) RDM will be supported.

#define	OemSynthLumin	0x0a50		//	Company Name: Synthe FX, Luminair, 1 DMX Input, 1 DMX Output, Emulated Ports, No RDM support currently
#define	OemSynthPixNode	0x0a51		//	Company Name: Synthe FX, Pixelnode, 1 DMX Input, 0 DMX Output, Emulated Ports, No RDM support currently

#define	OemGodAL5001		0x0a60
#define	OemGodDataLynxOp	0x0a61
#define	OemGodRailLynxOp	0x0a62
#define	OemGodDownLynx4		0x0a63
#define	OemGodNetLynxOp4	0x0a64
#define	OemGodAL5002		0x0a65
#define	OemGodDataLynxIp	0x0a66
#define	OemGodCataLynxNt	0x0a67
#define	OemGodRailLynxIp 	0x0a68
#define	OemGodUpLynx4		0x0a69
#define	OemGodNetLynxIp4	0x0a6a
#define	OemGodArtBoot		0x0a6b
#define	OemGodArtLynxOp		0x0a6c
#define	OemGodArtLynxIp		0x0a6d
#define	OemGodEtherLynxII	0x0a6e

#define	OemClayPakyAlphaSpotHPE700	0x0a80
#define	OemClayPakyAlphaBeam700         0x0a81
#define	OemClayPakyAlphaWash700         0x0a82
#define	OemClayPakyAlphaProfile700      0x0a83
#define	OemClayPakyAlphaBeam1500        0x0a84
#define	OemClayPakyAlphaWashLT1500      0x0a85
#define	OemClayPakyAlphaSpotHPE1500     0x0a86
#define	OemClayPakyAlphaProfile1500     0x0a87
#define	OemClayPakyAlphaWash1500        0x0a88
#define OemClayPakySharpy          	0x0a89
#define OemClayPakyShotLightWash   	0x0a8a

#define OemClayPakyAlphaSpotQwo800  	0x0a8b
#define OemClayPakyAlphaProfile1500Q	0x0a8c
#define OemClayPakyAlphaProfile800	0x0a8d

#define	OemClayPakyAledaK5		0x0a8e 		// 1) Company Name : Clay Paky S.p.A. 2) Product Name : Aleda K5  3) DMX inputs : 2 4) DMX outputs : 2, 5) Physical or emulated : PHISICAL 6) Is RDM supported : YES
#define	OemClayPakyAledaK10    		0x0a8f     	// 1) Company Name : Clay Paky S.p.A. 2) Product Name : Aleda K10 3) DMX inputs : 2 4) DMX outputs : 2, 5) Physical or emulated : PHISICAL 6) Is RDM supported : YES
#define	OemClayPakyAledaK20		0x0a90    	// 1) Company Name : Clay Paky S.p.A. 2) Product Name : Aleda K20 3) DMX inputs : 2 4) DMX outputs : 2, 5) Physical or emulated : PHISICAL 6) Is RDM supported : YES
#define	OemClayPakySharpyWash		0x0a91       	// 1) Company Name : Clay Paky S.p.A. 2) Product Name : Sharpy Wash 3) DMX inputs : 2 4) DMX outputs : 2, 5) Physical or emulated : PHISICAL 6) Is RDM supported : YES

#define	OemClayPaky12			0x0a92
#define	OemClayPaky13			0x0a93
#define	OemClayPaky14			0x0a94
#define	OemClayPaky15			0x0a95
#define	OemClayPaky16			0x0a96
#define	OemClayPaky17			0x0a97
#define	OemClayPaky18			0x0a98
#define	OemClayPaky19			0x0a99
#define	OemClayPaky1a			0x0a9a
#define	OemClayPaky1b			0x0a9b
#define	OemClayPaky1c			0x0a9c
#define	OemClayPaky1d			0x0a9d
#define	OemClayPaky1e			0x0a9e
#define	OemClayPaky1f			0x0a9f




















#define	OemRavenAquaDuct		0x0aa0		// Co: Raven Systems Design, Inc. Prod: AquaDuct Fountain Control, DMX out: 0, DMX In: 1, RDM: No
#define	OemRaven1			0x0aa1		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven2			0x0aa2		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven3			0x0aa3		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven4			0x0aa4		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven5			0x0aa5		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven6			0x0aa6		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven7			0x0aa7		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven8			0x0aa8		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRaven9			0x0aa9		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavena			0x0aaa		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavenb			0x0aab		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavenc			0x0aac		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavend			0x0aad		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavene			0x0aae		// Co: Raven Systems Design, Inc. Prod: Reserved
#define	OemRavenf			0x0aaf		// Co: Raven Systems Design, Inc. Prod: Reserved



#define OemTlNzTled2		0x0ab0		//Co: Theatrelight New Zealand, Prod: TLED2- Ethernet to isolated DMX converter, dmx in: 0, dmx out: 2
#define OemTlNzTlde2		0x0ab1		//Co: Theatrelight New Zealand, Prod: TLDE2- Isolated DMX to Ethernet converter, dmx in: 2, dmx out: 0
#define OemTlNzTlpid60		0x0ab2		//Co: Theatrelight New Zealand, Prod: TLPID II 60- Plugin Dimmer Cabinet 60 chn, dmx in: 0, dmx out: (internal - direct to dimmers)
#define OemTlNzTlpid96		0x0ab3		//Co: Theatrelight New Zealand, Prod: TLPID II 96- Plugin Dimmer Cabinet 96 chn, dmx in: 0, dmx out: (internal - direct to dimmers)
#define OemTlNzTlpid120		0x0ab4		//Co: Theatrelight New Zealand, Prod: TLPID II 120- Plugin Dimmer Cabinet 120 chn, dmx in: 0, dmx out: (internal - direct to dimmers)
#define OemTlNzTlpid192		0x0ab5		//Co: Theatrelight New Zealand, Prod: TLPID II 192- Plugin Dimmer Cabinet 192 chn, dmx in: 0, dmx out: (internal - direct to dimmers)

#define OemCinEcb1		0x0ac0		//Co: Cinetix Medien und Interface GmbH, D-60599 Frankfurt 2)Product name:  Ethernet/DMX512 Control Box, 3)1 DMX input, 4)1 DMX output, 5)both are physical. 5p XLR, available upon customers reqest with 3pin XLR or clamps 6,7)RDM is not supported
#define OemCinEg1		0x0ac1		//Co: Cinetix Medien und Interface GmbH, D-60599 Frankfurt 2)Product name:  Ethernet/DMX512 Generator 3)NO DMX input, 4)1 DMX output, 5)DMX OUT is physical. 5p XLR, available upon customers reqest with 3pin XLR or clamps 6,7)RDM is not supported
#define OemCinEgio1		0x0ac2		//Co: Cinetix Medien und Interface GmbH, D-60599 Frankfurt 2)Product name:  Ethernet/DMX512 GenIO 3)NO DMX input, 4)1 DMX output, 5)DMX OUT is physical. 5p XLR, available upon customers reqest with 3pin XLR 6,7)RDM is not supported

#define OemWerpaxMd1		0x0ad0		//Co: WERPAX bvba, Product name:  MULTI-DMX, Number of channels (and universes): 2 independently configurable for:  OUTPUT ONLY / OUTPUT WITH RDM /or  INPUT, DMX ports are physical, RDM release V1.0 compatible,


#define OemChainZoneRt1		0x0ae0		//1) Company Name : chainzone, 2) Product Name:RoundTable, 3) Number of DMX inputs:0, 4) Number of DMX outputs:1, 5) Are DMX ports physical or emulated. : emulated, 6) Is RDM supported : no

#define OemCityTheatPds750Trx	0x0af0		//1) Company Name: City Theatrical, Inc., 2) Product Name: PDS-750TRX, 3) Number of DMX inputs: 0, 4) Number of DMX outputs: 1, 5) Are DMX ports physical or emulated: Physical, 6) Is RDM supported: Yes, 7) If so, is it draft or release: Release V1.0
#define OemCityTheatPds375Trx	0x0af1		//1) Company Name: City Theatrical, Inc., 2) Product Name: PDS-375TRX, 3) Number of DMX inputs: 0, 4) Number of DMX outputs: 1, 5) Are DMX ports physical or emulated: Physical, 6) Is RDM supported: Yes, 7) Is so, is it draft or release: Release 1.0


#define OemStcDdr2404		0x0b00		//1) Company Name: STC Mecatronica, ProductName DDR 2404 Digital Dimmer Rack, NumberofDMXinputs 2 inputs, NumberofDMXoutputs 0, AreDMXportsphysicaloremulated. physical, IsRDMsupported yes, if so, is it Draft or Release V1.0: draft.

#define OemLscOut1		0x0b10	       	// LSC, Dmx out = 1, Dmx in =0, rdm = no
#define OemLscIn1		0x0b11	       	// LSC, Dmx out = 0, Dmx in =1, rdm = no
#define OemLscOut4		0x0b12	       	// LSC, Dmx out = 4, Dmx in =0, rdm = no
#define OemLscIn4		0x0b13	       	// LSC, Dmx out = 0, Dmx in =4, rdm = no

#define OemEuroNode8		0x0b20	       	// EUROLITE, Product Name: Node 8 Artnet/DMX, Number of DMX inputs : 0, Number of DMX outputs: 4, Are DMX ports physical or emulated: Physical, Is RDM supported: no

#define OemAbsFxShow1		0x0b30	       	// Company: Absolute FX Pte Ltd, Product: Showtime, 1 x DMX in port, 4 x DMX out ports, DMX ports can be emulated and / or physical, No RDM
#define OemAbsFxVirtFount1	0x0b40	       	// Company: Mediamation Inc, Product: Virtual Fountain, 4 x DMX in ports, 0 x DMX out ports, DMX ports are emulated, No RDM

#define OemVanIntCham1		0x0b50	       	// Company Name: Vanilla Internet Ltd. Product Name: Chameleon. Number of DMX inputs: 4. Number of DMX outputs: 4. Are the ports physical or emulated: Emulated. Is RDM supported: No

#define OemLightWildDataB1	0x0b60	       	// Company Name: LightWild LC, Product: LightWild DataBridge, DMX Inputs: 0 - 4, DMX Outputs: 0 - 4, Physical or Emulated: Physical Ports, RDM Supported: Yes - currently implemented internally but not released, RDM Version: 1.2 - we also have an official RDM manufacture ID

#define OemFlexVisFlexNode1	0x0b70	       	// Company Name - Flexvisual, 2) Product Name - FlexNode, 3) Number of DMX inputs - 4, 4) Number of DMX outputs - none, 5) Are DMX ports physical or emulated. - emulated, 6) Is RDM supported - No, 7) If so, is it Draft or Release V1.0 - NA

#define OemAinDigiNet1		0x0b80	       	// Company Name - Company NA 2) Digi Network 3) 4  4) 4  5) DMX ports are physical 6) no RDM support  7) --

#define OemD4aArtDmxUni41	0x0b90	       	// Company Name - DMX4ALL GmbH, 2) Product Name: ArtNet-DMX-UNIVERSE 4.1 3) Number of DMX inputs: 1 4) Number of DMX outputs: 4 5) Are DMX ports physical or emulated:  All ports are physical 6) Is RDM supported: No RDM support

#define OemD4aArtDmxSp		0x0b91	       	// Company Name - DMX4ALL GmbH, 2) Product Name: ArtNet-DMX STAGE-PROFI 1.1, 3) Number of DMX inputs: 1, 4) Number of DMX outputs: 1, 5) All ports are physical, 6) No RDM support

#define OemD4aMagLedFpc		0x0b92	       	// Company Name - DMX4ALL GmbH, 2) Product Name:  MagiarLED II flex PixxControl, 3) Number of DMX inputs: 0, 4) Number of DMX outputs: 8, 5) All ports are physical, 6) No RDM support

#define OemBeijXinNd1		0x0ba0	       	// Company Name - Beijing Xingguang Film & TV Equipment Technologies   co.,Ltd. Starlighting for short. Product:Net-DMX Notes:3*DMX in,3*DMX out RDM: no support Node's firmware revision:V0.1

#define OemMedienMg4		0x0bb0	       	// Company Name -  medien technik cords, Product Name: MGate4, Number DMX out supported: 4, Number DMX in supported: 4 (In/Out selectable) RDM Support? Yes,


#define OemJoshSysEcgM32mx	0x0bc0	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECG-M32MX, 3 - Varies, 4 - Varies, 5 - Varies, 6 - No, 7 -

#define OemJoshSysEcgDr2	0x0bc1	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECG-DR2, 3 - 2, 4 - 2, 5 - Physical, 6 - No, 7 -

#define OemJoshSysEcgDr4	0x0bc2	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECG-DR4, 3 - 4, 4 - 4, 5 - Physical, 6 - No, 7 -

#define OemJoshSysEcgPix8	0x0bc3	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECG-PIX8, 3 - 8, 4 - 0, 5 - Virtual (Physical Pixel Driver), 6 - No, 7 -

#define OemJoshSysEcgProD1	0x0bc4	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECGPro-D1, 3 - 1, 4 - 1, 5 - Physical, 6 - Yes, 7 - v1.0

#define OemJoshSysEcgProD4	0x0bc5	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECGPro-D4, 3 - 4, 4 - 4, 5 - Physical, 6 - Yes, 7 - v1.0

#define OemJoshSysEcgProD8	0x0bc6	       	// 1 - Joshua 1 Systems Inc. (www.j1sys.com), 2 - ECGPro-D8, 3 - 8, 4 - 8, 5 - Physical, 6 - Yes, 7 - v1.0

#define OemAsteraAc4		0x0bd0	       	// 1 - Astera, 2 - AC4, 3 - 0, 4 - 4, 5 - Physical, 6 - No, 7 - v1.0

#define OemMarumoMbk350e	0x0be0		// 1) Company name MARUMO ELECTRIC Co.,Ltd. 2) Product name MBK-350E 3) Number of DMX inputs 0 4) Number of DMX outputs 4 5) Are DMX ports physical or emulated physical 6) Is RDM supported No 7) If so, is it Draft or Release V1.0
#define OemMarumoMbk360e	0x0be1		// 1) Company name MARUMO ELECTRIC Co.,Ltd. 2) Product name MBK-360E 3) Number of DMX inputs 0 4) Number of DMX outputs 4 5) Are DMX ports physical or emulated physical 6) Is RDM supported No 7) If so, is it Draft or Release V1.0
#define OemMarumoMbk370e	0x0be2		// 1) Company name MARUMO ELECTRIC Co.,Ltd. 2) Product name MBK-370E 3) Number of DMX inputs 2 4) Number of DMX outputs 0 5) Are DMX ports physical or emulated physical 6) Is RDM supported No 7) If so, is it Draft or Release V1.0

#define OemWeiglProIo1		0x0bf0		// 1) Company name: Weigl Elektronik & Mediaprojekte, Manfred Weigl, 2.	Product Name: 1. Pro I/O, 2. WEMC-1 ProCommander, 3.	Number of DMX inputs: 1, 4.	Number of DMX outputs: 1, 5.	DMX ports are physical., 6.	RDM is not supported.

#define OemGlpImpSpot1		0x0c00		// 1) GLP German Light Products GmbH, 2) Impression Spot.one 3) 1 Input 4) 1 Output (will be switchable from input to output), 5)	1 physical DMX Port, 6)	RDM will be supported (but not in the early beginning), 7)	RDM is Release V1.0
#define OemGlpImpWash1		0x0c01		// 1) GLP German Light Products GmbH, 2) Impression Wash.one 3) 1 Input 4) 1 Output (will be switchable from input to output), 5)	1 physical DMX Port, 6)	RDM will be supported (but not in the early beginning), 7)	RDM is Release V1.0

#define OemSjaekDmxScreen	0x0c10		// Man s-jaekel (www.s-jaekel.de,) Prod: DmxScreen, Out (1-16 configured using binding), In 0, RDM No

#define OemSjaekTcSend		0x0c11		// Man s-jaekel (www.s-jaekel.de,) Prod: TimecodeSender, DMX Out: 0, DMX In: 0, RDM: No, (send only timecode)

#define OemSjaekTcView		0x0c12		// Man s-jaekel (www.s-jaekel.de,) Prod: TimecodeViewer, DMX Out: 0, DMX In: 0, RDM: No, (receive only timecode)

#define OemSjaekDmxSnuf		0x0c13		// Man s-jaekel (www.s-jaekel.de,) Prod: DmxSnuffler, DMX Out: 1, DMX In: 1, RDM: No

#define OemSjaekDmxCons1 	0x0c14		// Man s-jaekel (www.s-jaekel.de,) Prod: DmxConsole, DMX Out: 4, DMX In: 4, RDM: No

#define OemSjaekTcsaPlayer 	0x0c15		// Man s-jaekel (www.s-jaekel.de,) Prod: TimecodeSyncAudioPlayer, DMX Out: 0, DMX In: 0, RDM: No


#define OemPeterMaesEthDmxD1	0x0d00		// 1) Company Name = Peter Maes Technology, 2) Product Name = EtherDmxLinkDuo, 3) Number of DMX inputs = 2, 4) Number of DMX outputs = 2, 5) Are DMX ports physical or emulated = 2 physical ports (port can be input or output depending on software configuration), 6) Is RDM supported = YES, 7) If so, is it Draft or Release = Release

#define OemSoundlightUsbDmx2	0x0d10		// 1) Company Name = SOUNDLIGHT, 2) Product Name = USBDMX-TWO, 3) Number of DMX inputs = optional, max. 2, 4) Number of DMX outputs = 2, 5) Are DMX ports physical or emulated = physical, 6) Is RDM supported = yes, 7) If so, is it Draft or Release V1.0 = Release 1.0

#define OemIbhLoox1		0x0d20		// 1) Company Name = IBH, 2) Product Name = loox, 3) Number of DMX inputs = 0, 4) Number of DMX outputs = 1, 5) Are DMX ports physical or emulated = emulated, 6) Is RDM supported: not at the moment, but planned in the future, 7) If so, is it Draft or Release V1.0: N/A

#define OemThornArtLynxOp	0x0d30		//Company Name: Thorn Lighting Ltd, Product Name: SensaPro eDMX, Number of DMX inputs: 0, Number of DMX outputs: 2, Ports: are physical, RDM Supported: Yes, RDM Version: Release V1.0

#define OemChromateqLp		0x0d40		//Company name : Chromateq SARL, Product Names : LED Player, Number of Inputs : 0, Number of Output : 4, Emulated ports by our software, RDM supported
#define OemChromateqPd		0x0d41		//Company name : Chromateq SARL, Product Names : Pro DMX, Number of Inputs : 0, Number of Output : 4, Emulated ports by our software, RDM supported

#define OemKiboNode16		0x0d50		// 1) Company Name KiboWorks, 2) Product Name KiboNode 16 Port, 3) Number of DMX inputs 0, 4) Number of DMX outputs 4, 5) Are DMX ports physical or emulated. Physical, 6) Is RDM supported Yes, 7) If so, is it Draft or Release V1.0  Draft but soon released.

#define OemWhiteRabbitMcm1	0x0d60		// 1) Company Name: The White Rabbit Company, Inc., 2) Product Name: MCM - Mini-Communications Module, 3) Number of DMX inputs? 4. 4) Number of DMX outputs? 4. 5) Are DMX ports physical or emulated.? physical. 6) Is RDM supported? No

#define OemProPlexIq1		0x0d70		// 1) Company Name: TMB 2) Product Name: ProPlex IQ 3) Number of DMX inputs? 4. 4) Number of DMX outputs? 4. 5) Are DMX ports physical or emulated.? physical. 6) Is RDM supported? No

#define OemCelAud8s		0x0d80		// 1) Company Name: Celestial Audio 2) Product Name: EtherDMXArt8-Simple 3) Number of DMX inputs? 0. 4) Number of DMX outputs? 4. 5) Are DMX ports physical or emulated.? physical. 6) Is RDM supported? No
#define OemCelAud8p		0x0d81		// 1) Company Name: Celestial Audio 2) Product Name: EtherDMXArt8-Pro 3) Number of DMX inputs? 0. 4) Number of DMX outputs? 4. 5) Are DMX ports physical or emulated.? physical. 6) Is RDM supported? No
#define OemCelAud36		0x0d82		// 1) Company Name: Celestial Audio 2) Product Name: DMX36 3) Number of DMX inputs? 1. 4) Number of DMX outputs? 1. 5) Are DMX ports physical or emulated.? physical. 6) Is RDM supported? No

#define OemDfdNode4 		0x0d90	        // 1) Company Name: Doug Fleenor Design Inc. 2) Product Name: Node4  3) Number of DMX inputs  4) Number of DMX outputs 5) Are DMX ports physical or emulated  There are 4 ports on the device and they can be switched from inputs to outputs at will 6) Is RDM supported: No

#define OemLex5k 		0x0da0	        // 1) Company Name: Lex. 2) Product Name: AL5003-Lex  3) Number of DMX inputs 0  4) Number of DMX outputs 1 5) Are DMX ports physical or emulated: Phys 6) Is RDM supported: Yes

#define OemRevoDisp1 		0x0db0	        // 1) Company Name:  Revolution Display, Inc, 2) Product Name:  Navigator, 3) Number of DMX inputs:  1 physical input, 4) Number of DMX outputs:  0, 5) Are DMX ports physical or emulated.:  Both.  In some applications it will consume many virtual DMX ports via ArtNet to drive LED's., 6) Is RDM supported:  Yes, but not over ArtNet.

#define OemVisProdCueCore1	0x0dc0	        // 1) Company: Visual Productions, 2) Product: CueCore, 3) DMX Inputs: 1, 4) DMX Outputs: 2, 5) Physical: yes, 6) RDM: no

#define OemVisProdIoCore1	0x0dc1	        // 1) Company: Visual Productions, 2) Product: IoCore, 3) DMX Inputs: 1*, 4) DMX Outputs: 1*, 5) Physical: yes, 6) RDM: no, * Port can be configured as input or output

#define OemLltSms28a		0x0dd0	        // 1.) Company Name: LLT Lichttechnik GmbH&Co.KG, 2.) Product Name: SMS-28A, 3.) 2 DMX-Inputs (receiving 2 DMX-Universes), 4.) No DMX-Outputs (no DMX-Universes sended), 5.) Physical ports, 6.) No RDM supported


#define OemChrmlechElidyS	0x0de0	        // 1) Company Name : Chromlech, 2) Product Name : Elidy S, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated : physical, 6) Is RDM supported : no
#define OemChrmlechElidySR	0x0de1	        // 1) Company Name : Chromlech, 2) Product Name : Elidy S RDM, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated : physical, 6) Is RDM supported : yes
#define OemChrmlechElidy	0x0de2	        // 1) Company Name : Chromlech, 2) Product Name : Elidy, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated : physical, 6) Is RDM supported : no
#define OemChrmlechElidyR	0x0de3	        // 1) Company Name : Chromlech, 2) Product Name : Elidy RDM, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated : physical, 6) Is RDM supported : yes

#define OemIntSysTechThor36	0x0df0	        // 1) Company Name: Integrated System Technologies Ltd, 2) Product Name: iDrive Thor 36, 3) Number of DMX inputs - 1 Emulated and 1 Physical, 4) Number of DMX outputs 1 Emulated and 1 Physical, 5) Are DMX ports physical or emulated. - As above, 6) Is RDM supported - YES

#define OemRayCompSoft		0x0e00	        // 1) Company Name : RayComposer - R. Adams, 2) Product Name : RayComposer Software, 3) Number of DMX inputs : 4, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated. : virtual/software, 6) Is RDM supported : yes.
#define OemRayCompNet		0x0e01	        // 1) Company Name : RayComposer - R. Adams, 2) Product Name : RayComposer NET, 3) Number of DMX inputs : 1, 4) Number of DMX outputs : 1, 5) Are DMX ports physical or emulated. : both are physical, 6) Is RDM supported : yes.,

#define OemEldoPowerBox		0x0e10	        // 1)  CompanyName eldoLED, 2)  ProductName PowerBOX Addresser, 3)  NumberofDMXinputs none, 4)  NumberofDMXoutputs 1, 2 or 3 depending on configuration, 5)  Are DMX ports physical or emulated. Physical, 6)  Is RDMsupported. Yes

#define OemCoolPand1		0x0e20	        // 1) coolux GmbH, 2) Pandoras Box Mediaserver, 5) emulated, 6) no RDM supported
#define OemCoolWidg1		0x0e21	        // 1) coolux GmbH, 2) Widget Designer, 5) emulated, 6) no RDM supported


#define OemElettrolabAccendoSlp	0x0e30		// 1. Company Name: ELETTROLAB Srl, 2. Product Name: Accendo Smart Light Power, 3. DMX In: 1, 4. Dmx Out: 1, 5. Physical, 6) RDM supported.

#define OemPhilColKinBlazeTrx	0x0e40		// 1) Company Name: Philips Color Kinetics, 2) Product Name: ColorBlaze TRX, 3) Number of DMX Inputs: 1, 4) Number of DMX Outputs: 1, 5) DMX ports are physical, 6) RDM is not supported.

#define OemXiamenGtDmx2000	0x0e70		// 1)Xiamen GreenTao Opto Electronics Co.,Ltd. 2)GT-DMX-2000 3)2 INPUT DMX 4)2 OUTPUT DMX 5)physical DMX (use hardware of uart) 6)will be supported.
#define OemXiamenGtDmx4000	0x0e71		// 1)XiamenGreenTao Opto Electronics Co.,Ltd. 2)GT-DMX-4000 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)will be supported.

#define OemRnetRnet8		0x0e80		// 1)Rnet. 2)Rnet-8 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)RDM supported.
#define OemRnetRnet6		0x0e81		// 1)Rnet. 2)Rnet-6 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)RDM supported.
#define OemRnetRnet4		0x0e82		// 1)Rnet. 2)Rnet-4 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)RDM supported.
#define OemRnetRnet2		0x0e83		// 1)Rnet. 2)Rnet-2 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)RDM supported.
#define OemRnetRnet1		0x0e84		// 1)Rnet. 2)Rnet-1 3)4 INPUT DMX 4)4 OUTPUT DMX 5)physical DMX 6)RDM supported.

#define OemDmx4PlayerAn		0x0e90		// 1)Dmx4All. 2)Player AN 3)1 INPUT DMX 4)1 OUTPUT DMX 5)physical DMX 6)RDM not supported.
#define OemDmx4AnLedDim		0x0e91		// 1)Dmx4All. 2)AN-Led-Dimmer AN 3)0 INPUT DMX 4)1 OUTPUT DMX 5)physical DMX 6)RDM not supported.


#define OemEquipsWkLm5		0x0ea0		//1. Company Name: EQUIPSON S.A. 2. Product Name: WORK LM 5, 3. Number of DMX inputs: 0, 4. Number of DMX outputs: 1, 5. DMX ports are physical, 6. RDM is not supported
#define OemEquipsWkLm3r3	0x0ea1		//1. Company Name: EQUIPSON S.A., 2. Product Name: WORK LM 3R2, 3. Number of DMX inputs: 0, 4. Number of DMX outputs: 2, 5. DMX ports are physical, 6. RDM is not supported
#define OemEquipsWkLm5w		0x0ea2		//1. Company Name: EQUIPSON S.A., 2. Product Name: WORK LM 5W, 3. Number of DMX inputs: 0, 4. Number of DMX outputs: 1, 5. DMX ports are physical, 6. RDM is not supported
#define OemEquipsWkDmxNet4	0x0ea3		//1. Company Name: EQUIPSON S.A., 2. Product Name: WORK DMXNET 4, 3. Number of DMX inputs: 0, 4. Number of DMX outputs: 4, 5. DMX ports are physical, 6. RDM is not supported
#define OemEquipsWkDmxNet8	0x0ea4		//1. Company Name: EQUIPSON S.A., 2. Product Name: WORK DMXNET 8, 3. Number of DMX inputs: 0, 4. Number of DMX outputs: 8, 5. DMX ports are physical, 6. RDM is not supported

#define OemSanDevicesE680       0x0eb0          //Company Name: SanDevices. Product Name: E680 pixel controllers Number of DMX inputs:  0 Number of DMX Outputs: 4 DMX Ports:  Physical outputs. RDM Support:  No
#define OemSanDevicesE681       0x0eb1          //Company Name: SanDevices. Product Name: E681 pixel controllers Number of DMX inputs:  0 Number of DMX Outputs: 4 DMX Ports:  Physical outputs. RDM Support:  No
#define OemSanDevicesE682       0x0eb2          //Company Name: SanDevices. Product Name: E682 pixel controllers Number of DMX inputs:  0 Number of DMX Outputs: 4 DMX Ports:  Physical outputs. RDM Support:  No
#define OemSanDevicesE6804      0x0eb3          //Company Name: SanDevices. Product Name: E6804 pixel controllers Number of DMX inputs:  0 Number of DMX Outputs: 4 DMX Ports:  Physical outputs. RDM Support:  No

#define OemBrainsaltBsmConPro   0x0ec0          //1) BRAINSALT MEDIA GMBH, 2) BSM Conductor PRO, 3) 1 DMX Inputs, 4) 1 DMX Outputs, 5) Are DMX ports physical or emulated: EMULATED, 6) Is RDM supported: NO

#define OemElectroLabAvvio4     0x0ed0          //1.Company Name ELETTROLAB Srl, 2. Product Name Avvio 04, 3. Number of DMX inputs 0, 4. Number of DMX outputs 0, 5. Are DMX ports physical or emulated? Emulated, 6. Is RDM supported? YES
#define OemElectroLabRemoto     0x0ed1          //1.Company Name ELETTROLAB Srl, 2. Product Name Remoto, 3. Number of DMX inputs 2, 4. Number of DMX outputs 2, 5. Are DMX ports physical or emulated? Physical, 6. Is RDM supported? YES


#define OemProSolDmxPro02       0x0ee0          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-02 DMX inputs: 0 DMX outputs: 2 DMX outport is physical RDM is not supported
#define OemProSolDmxPro01       0x0ee1          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-01 DMX inputs: 0 DMX outputs: 1 DMX outport is physical RDM is not supported
#define OemProSolDmxPro10       0x0ee2          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-10 DMX inputs: 1 DMX outputs: 0 DMX inport is physical RDM is not supported
#define OemProSolDmxPro11       0x0ee3          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-11 DMX inputs: 1 DMX outputs: 1 DMX inport is physical DMX outport is physical RDM is not supported
#define OemProSolDmxPro04       0x0ee4          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-04 DMX inputs: 0 DMX outputs: 4 DMX outports are physical RDM is not supported
#define OemProSolDmxPro14       0x0ee5          //Company name: PRO-SOLUTIONS Product name: DMX-PRO Net-14 DMX inputs: 1 DMX outputs: 4 DMX inport is physical DMX outports are physical RDM is not supported

#define OemCreatTechEthShow2    0x0ef0          //1) Company Name eIdea - Creative Technology 2) Product Name EtherShow 2 3) DMX inputs = 2 4) DMX outputs = 2, 5) Are DMX ports physical or emulated. Both ports are physical 6) Is RDM supported No. It's not supported.

#define OemBrinkNetNode01       0x0f00          //1.Company Name: Brink Electronics 2.	Product Name: net-node-01 3.	Number of DMX inputs: 0 4.	Number of DMX outputs: 1 5.	Are DMX ports physical or emulated: Physical 6.	Is RDM supported: No
#define OemBrinkNetNode10       0x0f01          //1.Company Name: Brink Electronics 2.	Product Name: net-node-10 3.	Number of DMX inputs: 1 4.	Number of DMX outputs: 0 5.	Are DMX ports physical or emulated: Physical 6.	Is RDM supported: No
#define OemBrinkNetNode11       0x0f02          //1.Company Name: Brink Electronics 2.	Product Name: net-node-11 3.	Number of DMX inputs: 1 4.	Number of DMX outputs: 1 5.	Are DMX ports physical or emulated: Physical 6.	Is RDM supported: No








#define	OemAL5001	0x2000
#define	OemDataLynxOp	0x2010
#define	OemRailLynxOp	0x2020
#define	OemDownLynx4	0x2030
#define	OemNetLynxOp4	0x2040
#define	OemAL5002	0x2050
#define	OemDataLynxIp	0x2060
#define	OemCataLynxNtIp	0x2070
#define	OemCataLynxNtOp	0x2075
#define	OemRailLynxIp 	0x2080
#define	OemUpLynx4	0x2090
#define	OemNetLynxIp4	0x20a0
#define	OemArtPlay	0x20b0

#define	OemArtDemux	0x20d0
#define	OemArtRelay	0x20e0
#define	OemArtPipe	0x20f0
#define	OemArtMedia	0x2100
#define	OemArtBoot	0x2110
#define	OemArtLynxOp	0x2120
#define	OemArtLynxIp		0x2130
#define	OemEtherLynxII		0x2140
#define	OemArtE2		0x2150
#define	OemArtMonitorBase	0x2160
#define	OemArtE1		0x2170

#define	OemArtMicroScope5	0x2200
#define	OemArtTwoPlay		0x2210
#define	OemArtTwoPlayXt		0x2211
#define	OemArtMultiPlay		0x2212

#define	OemArtDiamond		0x2220
#define	OemArtQuartz		0x2221
#define	OemArtZircon		0x2222
#define	OemArtGraphite		0x2223
#define	OemArtOpal		0x2224
#define	OemArtMica		0x2225
#define	OemArtSense		0x2230
#define	OemArtSenseXt		0x2231
#define	OemDvNet		0x2240

#define	OemAL5003		0x2250





// Bit 15 hi for enhanced funtionality devices:

#define OemNetgateXT	0x8000	       //	Dip 0001 or 1001
#define OemNetPatch	0x8001	       //	Dip 0010 or 1010
#define OemDMXHubXT	0x8002	       //	Dip 0000 or 1000
#define OemFourPlay	0x8003	       //	Network version of No-Worries

#define OemUnknown	0x00ff	       //	Lo byte == ff is unknown or non-registered type
#define OemGlobal	0xffff	       //	Used by ArtTrigger for general purpose codes

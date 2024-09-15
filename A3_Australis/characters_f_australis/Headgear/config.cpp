//Arma 3 Australis Characters_F_Australis Headgear Configuration
/*Basic Definitions and Patches*/
#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

/*Configuration*/
#include "cfgVehicles.hpp"
class CfgWeapons
{	
	/*Base Classes*/
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo: ItemInfo{};
	};
	class H_Cap_red;
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_HelmetIA;
	class H_Beret_02;
	class H_MilCap_ocamo;
	/*Arma 3 Aegis*/
	class H_Booniehat_aucamo_F: H_Booniehat_khk
	{
		class ItemInfo: ItemInfo{};
	};
	class H_Beret_red;
	
	/*Arma 3 Contact (Enoch)*/
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;

	
	/*Arma 3 Australis*/
	/*Berets*/
	//ADF Commando
	class H_Beret_02_CDO: H_Beret_02 
	{
		scope = public;
		author = "Lowaltitude";
		displayName = "Beret (Commando)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_brn_SF_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_beret02_cdo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_beret02_cdo.rvmat"};
	};
	
	/* Arma 3 Aegis */
	//BAF Para Beret move to Aegis TBD
	class H_Beret_red_02: H_Beret_red 
	{
		scope = public;
		displayName = "Beret (Parachute Regiment)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_beret01_red_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_red.rvmat"};
	};
	
	
	/*Arma 3 Atlas - ADF*/ //MOVE TO ATLAS
	// Booniehat [ADF] (Arid)
	class H_Booniehat_aucamo_ard_F: H_Booniehat_aucamo_F
	{
		author = "Lowaltitude";
		displayName = "Booniehat [ADF] (Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_ard_CO.paa"};
	};
	// Booniehat [ADF] (Arid, Headset)
	class H_Booniehat_aucamo_ard_hs_F: H_Booniehat_aucamo_ard_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Arid, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	// Booniehat [ADF] (Tropic)
	class H_Booniehat_aucamo_trp_F: H_Booniehat_khk
	{
		author = "Lowaltitude and abb0t";
		displayName = "Booniehat [ADF] (Tropic)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_trp_CO.paa"};
	};
	// Booniehat [ADF] (Tropic, Headset)
	class H_Booniehat_aucamo_trp_hs_F: H_Booniehat_aucamo_trp_F
	{
		author = "Lowaltitude and abb0t";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Tropic, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	
	/*Arma 3 Australis - ADF*/
	
	// Booniehat [ADF] (AMC)
	class Australis_H_Booniehat_aucamo_F: H_Booniehat_aucamo_F
	{
		author = "Lowaltitude";
		displayName = "Booniehat [ADF] (AMC)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_CO.paa"};
	};
	// Booniehat [ADF] (AMC, Headset)
	class Australis_H_Booniehat_aucamo_hs_F: Australis_H_Booniehat_aucamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (AMC, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	//Cap [ADF] (AMC)
	class H_Cap_aucamo: H_Cap_red
	{
		author = "Lowaltitude";
	 	displayName = "Cap [ADF] (AMC)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_aucamo_co.paa"};
	};
	//Cap [ADF] (AMC, Flag)
	class H_Cap_aucamo_flag: H_Cap_red
	{
		author = "Lowaltitude";
	 	displayName = "Cap [ADF] (AMC, Flag)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_aucamo_flag_co.paa"};
	};
	
	// Modular Helmet [ADF] (AMC)
	class Australis_H_B_Helmet_canvas_aucamo: H_HelmetIA
	{
	  	author = "Lowaltitude";
		displayName = "Modular Helmet [ADF] (AMC)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_aucamo_CO.paa"};
	};
	
	// Advanced Modular Helmet [ADF] (AMC)
	class Australis_H_HelmetHBK_aucamo_srd_F: H_HelmetHBK_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC, Headset)
	class Australis_H_HelmetHBK_aucamo_srd_headset_F: H_HelmetHBK_headset_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC, Headset)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC, Ear Protectors)
	class Australis_H_HelmetHBK_aucamo_srd_ear_F: H_HelmetHBK_ear_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC, Ear Protectors)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC, Chops)
	class Australis_H_HelmetHBK_aucamo_srd_chops_F: H_HelmetHBK_chops_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC, Chops)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	
	/*Arma 3 Australis - ADF Naval*/
	
	// Booniehat [ADF] (AMC-M)
	class Australis_H_Booniehat_aucamo_nvy_F: H_Booniehat_khk
	{
		author = "Lowaltitude and Foxtonnes";
		displayName = "Booniehat [ADF] (AMC-M)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_nvy_CO.paa"};
	};
	// Booniehat [ADF] (AMC-M, Headset)
	class Australis_H_Booniehat_aucamo_nvy_hs_F: Australis_H_Booniehat_aucamo_nvy_F
	{
		author = "Lowaltitude and Foxtonnes";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (AMC-M, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	//Cap [ADF] (AMC-M)
	class H_Cap_aucamo_nvy: H_Cap_red
	{
		author = "Lowaltitude";
	 	displayName = "Cap [ADF] (AMC)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_aucamo_nvy_co.paa"};
	};
	
	// Modular Helmet [ADF] (AMC-M)
	class Australis_H_B_Helmet_canvas_aucamo_nvy_F: H_HelmetIA
	{
	  	author = "OokamiJamie";
		displayName = "Modular Helmet [ADF] (AMC-M)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_aucamo_nvy_CO.paa"};
	};
	
	// Advanced Modular Helmet [ADF] (AMC-M)
	class Australis_H_HelmetHBK_aucamo_nvy_F: H_HelmetHBK_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC-M)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_nvy_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC-M, Headset)
	class Australis_H_HelmetHBK_aucamo_nvy_headset_F: H_HelmetHBK_headset_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC-M, Headset)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_nvy_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC-M, Ear Protectors)
	class Australis_H_HelmetHBK_aucamo_nvy_ear_F: H_HelmetHBK_ear_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC-M, Ear Protectors)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_nvy_CO.paa"};
	};
	// Advanced Modular Helmet [ADF] (AMC-M, Chops)
	class Australis_H_HelmetHBK_aucamo_nvy_chops_F: H_HelmetHBK_chops_base_F
	{
		author = "Lowaltitude, Foxtonnes";
		scope = public;
		displayName = "Advanced Modular Helmet [ADF] (AMC-M, Chops)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\H_HelmetHBK_01_aucamo_nvy_CO.paa"};
	};
	
	
	/*Arma 3 Australis - NZDF*/
	
	// Booniehat [NZDF]
	class Australis_H_Booniehat_nzcamo_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [NZDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_nzcamo_CO.paa"};
	};
	// Booniehat [NZDF] (Headset)
	class Australis_H_Booniehat_nzcamo_hs_F: Australis_H_Booniehat_nzcamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [NZDF] (Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	// Modular Helmet (NZDF)
	class H_B_Helmet_canvas_nzcamo: H_HelmetIA
	{
	  	author = "OokamiJamie";
		displayName = "Modular Helmet (NZDF)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_nzcamo_CO.paa"};
	};
	
	// Combat Helmet [NZDF] (Cover)
	class H_HelmetB_nzcamo_cover: H_HelmetB
	{
		author = "Charms,Lowaltitude";
		displayName = "Combat Helmet [NZDF] (Cover)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\equip1_nzcamo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\MICH.rvmat"};
	};
	// Enhanced Combat Helmet [NZDF] (Cover)
	class H_HelmetSpecB_nzcamo_cover: H_HelmetSpecB
	{
		author = "Charms,Lowaltitude";
		displayName = "Enhanced Combat Helmet [NZDF] (Cover)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\equip1_nzcamo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\MICH.rvmat"};
	};
	
	
	/*Arma 3 Australis - Pacific Union (PNGDF)*/
	
	
	class H_Booniehat_pngcamo_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [PNGDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_pngcamo_CO.paa"};
	};
	class H_Booniehat_pngcamo_hs_F: H_Booniehat_pngcamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [PNGDF] (Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	/*Patrol Booniehat*/
	//ADF
	class H_PatrolBooniehat_aucamo_F: HelmetBase
	{
		weaponPoolAvailable=1;
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [ADF]";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		model="\A3_Australis\Characters_F_Australis\Headgear\H_PatrolBoonie_F";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_aucamo_CO.paa"
		};
		descriptionShort="Hat Patrol Short Brim";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			uniformModel="\A3_Australis\Characters_F_Australis\Headgear\H_PatrolBoonie_F";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	
	//ADF Arid
	class H_PatrolBooniehat_aucamo_ard_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [ADF] (Arid)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_aucamo_ard_CO.paa"
		};	
	};
	
	//ADF Tropic
	class H_PatrolBooniehat_aucamo_trp_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [ADF] (Tropic)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_aucamo_trp_CO.paa"
		};	
	};
	
	//ADF Naval
	class H_PatrolBooniehat_aucamo_navy_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [ADF] (Naval)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_aucamo_ran_CO.paa"
		};	
	};
	
	//BAF MTP
	class H_PatrolBooniehat_mtp_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat (MTP)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_mtp_CO.paa"
		};	
	};
	
	//BAF MTP-W
	class H_PatrolBooniehat_mtp_wdl_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat (MTP-W)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_mtp_wdl_CO.paa"
		};	
	};
	
	//BAF MTP-T
	class H_PatrolBooniehat_mtp_trp_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat (MTP-T)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_mtp_trp_CO.paa"
		};	
	};
	
	//NZDF Tropic
	class H_PatrolBooniehat_nzcamo_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [NZDF]";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_nzcamo_CO.paa"
		};	
	};
	
	//NZDF Woodland
	class H_PatrolBooniehat_nzcamo_wdl_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [NZDF] (Woodland)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_nzcamo_wdl_CO.paa"
		};	
	};
	
	//NZDF Arid
	class H_PatrolBooniehat_nzcamo_ard_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [NZDF] (Arid)";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_nzcamo_ard_CO.paa"
		};	
	};
	//AAF
	class H_PatrolBooniehat_aaf_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [AAF]";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_aaf_CO.paa"
		};	
	};

	//HIMF
	class H_PatrolBooniehat_jungle_F: H_PatrolBooniehat_aucamo_F 
	{
		scope=2;
		author="OokamiJamie";
		displayName="Patrol Booniehat [HIMF]";
		picture="\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\Characters_F_Australis\Headgear\Data\patrolboonie_jungle_CO.paa"
		};	
	};
	
	
	/*Caps*/
	/*
	class H_Cap_autism: H_Cap_red
	{
		author = "Foxtonnes";
	 	displayName = "Cap (Autism Awareness)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_autism.paa"};
	};
	*/
	

	
	/*Mil Caps*/
	/*
	class H_MilCap_merc: H_MilCap_ocamo
	{
		author = "Lowaltitude";
		displayName = "Military Cap (Mercernaries)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\cappatrol_merc_CO.paa"};
	};
	*/
	
	/*Helmets*/
	//Combat Helmet
	
	/*
	class H_HelmetB_nzcamo_blu_cover: H_HelmetB
	{
		author = "Charms,Foxtonnes,Lowaltitude";
		displayName = "Combat Helmet (Urban DDPM)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\equip1_nzcamo_blu.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\MICH.rvmat"};
	};
	*/

	

	
	//Modular Helmet


	//ADF Arid
	class H_B_Helmet_canvas_aucamo_ard: H_HelmetIA
	{
	  	author = "OokamiJamie";
		displayName = "Modular Helmet (ADF Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_aucamo_ard_CO.paa"};
	};

	//ADF Tropic
	class H_B_Helmet_canvas_aucamo_trp: H_HelmetIA
	{
	  	author = "OokamiJamie";
		displayName = "Modular Helmet (ADF Tropic)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_aucamo_trp_CO.paa"};
	};



	//ADF Semi-Arid
	class H_B_Helmet_canvas_aucamo_srd: H_HelmetIA
	{
	  	author = "OokamiJamie";
		displayName = "Modular Helmet (ADF Semi-Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_helmet_canvas_aucamo_srd_CO.paa"};
	};
	

};
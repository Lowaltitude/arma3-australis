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
	class H_Beret_02;
		/*Arma 3 Aegis*/
	class H_Booniehat_aucamo_F: H_Booniehat_khk
	{
		class ItemInfo: ItemInfo{};
	};

	
	/*Arma 3 Australis*/
	/*Berets*/
	class H_Beret_02_CDO: H_Beret_02 
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_brn_SF_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_beret02_cdo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\headgear_beret02_cdo.rvmat"};
	};
	
	/*Booniehats*/
	class H_Booniehat_aucamo_ard_F: H_Booniehat_aucamo_F
	{
		author = "Lowaltitude and abb0t";
		displayName = "Booniehat [ADF] (Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_ard_CO.paa"};
	};
	class H_Booniehat_aucamo_ard_hs_F: H_Booniehat_aucamo_ard_F
	{
		author = "Lowaltitude and abb0t";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Arid, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_aucamo_trp_F: H_Booniehat_khk
	{
		author = "Lowaltitude and abb0t";
		displayName = "Booniehat [ADF] (Tropic)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_trp_CO.paa"};
	};
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
	class H_Booniehat_aucamo_navy_F: H_Booniehat_khk
	{
		author = "Lowaltitude and Foxtonnes";
		displayName = "Booniehat [ADF] (Naval)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_aucamo_navy_CO.paa"};
	};
	class H_Booniehat_aucamo_navy_hs_F: H_Booniehat_aucamo_navy_F
	{
		author = "Lowaltitude and Foxtonnes";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Naval, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_nzcamo_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [NZDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_nzcamo_CO.paa"};
	};
	class H_Booniehat_nzcamo_hs_F: H_Booniehat_nzcamo_F
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
	class H_Booniehat_nzcamo_ard_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [NZDF] (Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_nzcamo_ard_CO.paa"};
	};
	class H_Booniehat_nzcamo_ard_hs_F: H_Booniehat_nzcamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [NZDF] (Arid, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_nzcamo_wdl_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [NZDF] (Woodland)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_nzcamo_wdl_CO.paa"};
	};
	class H_Booniehat_nzcamo_wdl_hs_F: H_Booniehat_nzcamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [NZDF] (Woodland, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_nzcamo_navy_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat [NZDF] (Naval)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_nzcamo_navy_CO.paa"};
	};
	class H_Booniehat_nzcamo_navy_hs_F: H_Booniehat_nzcamo_navy_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat [NZDF] (Naval, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_serco_F: H_Booniehat_khk
	{
		author = "Lowaltitude";
		displayName = "Booniehat (DDPCU)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\booniehat_serco_CO.paa"};
	};
	class H_Booniehat_serco_hs_F: H_Booniehat_nzcamo_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = "Booniehat (DDPCU, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	
	/*Caps*/
	class H_Cap_autism: H_Cap_red
	{
		author = "Foxtonnes";
	 	displayName = "Cap (Autism Awareness)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_autism.paa"};
	};
	
	/*Helmets*/
	class H_HelmetB_nzcamo_blu_cover: H_HelmetB
	{
		author = "Charms,Foxtonnes,Lowaltitude";
		displayName = "Combat Helmet (Urban DPM)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\equip1_nzcamo_blu.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\MICH.rvmat"};
	};
	class H_HelmetB_nzcamo_cover: H_HelmetB
	{
		author = "Charms,Lowaltitude";
		displayName = "Combat Helmet [NZDF]";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\equip1_nzcamo.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\MICH.rvmat"};
	};
};
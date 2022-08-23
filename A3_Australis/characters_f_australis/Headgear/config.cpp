#include "cfgPatches.hpp"
class CfgWeapons
{	
	class ItemCore;
	class HeadgearItem;
	class ItemInfo;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo: ItemInfo{};
	};
	class H_Booniehat_aucamo_F;
	class H_Cap_red;
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
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_aucamo_trp_F: H_Booniehat_aucamo_F
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
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};	
	class H_Booniehat_aucamo_navy_F: H_Booniehat_aucamo_F
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
		class ItemInfo: HeadgearItem
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
		class ItemInfo: HeadgearItem
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
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Cap_autism: H_Cap_red
	{
		author = "Foxtonnes";
	 	displayName = "Cap (Autism Awareness)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Headgear\Data\capb_autism.paa"};
	};
};
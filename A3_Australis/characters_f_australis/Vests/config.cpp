// Arma 3 Australis Characters_F_Australis Vests config.cpp
#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class cfgWeapons 
{
	/* Inheritance Tree */
	class ItemCore;
	class VestItem;
	
	/*Arma 3*/
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr;
	
	/*Arma 3 Australis*/
	//Placeholder GL Rig
	class V_PlateCarrierGL_aucamo_F: V_PlateCarrierGL_rgr
	{
		author = $STR_A3_A_Lowaltitude;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierGL_aucamo_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierGL_aucamo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Carrier_Rig_GL_aucamo_CO.paa"
		};
	};
	class V_PlateCarrier1_aucamo_srd_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_Lowaltitude;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier1_aucamo_F_CA.paa";
		displayName = "Carrier Lite [ADF] (Semi Arid)";
		hiddenSelectionsTextures[] =
		{
			"\A3_Australis\Characters_F_Australis\Vests\Data\vests_aucamo_srd_CO.paa"
		};
	};
	class V_PlateCarrier2_aucamo_srd_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_Lowaltitude;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_aucamo_F_CA.paa";
		displayName = "Carrier Rig [ADF] (Semi Arid";
		hiddenSelectionsTextures[] =
		{
			"\A3_Australis\Characters_F_Australis\Vests\Data\vests_aucamo_srd_CO.paa"
		};
	};
};
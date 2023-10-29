#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgVehicles
{
	/* Inheritance Tree */
    #include "\A3_Aegis\cfgUAVs.hpp"

    /* Bases */

	class UAV_05_Base_F: UAV 
	{
		class TextureSources
		{
			class ADF
			{
				displayName = "ADF";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_australis\Air_F_australis\UAV_05\Data\uav05_fuselage_01_adf_co.paa",
					"\A3_australis\Air_F_australis\UAV_05\Data\uav05_fuselage_02_adf_co.paa",
				};
				factions[] = {};
			};
		};
	};

	/*Aegis/Jets Compatability*/
	class B_UAV_05_F: UAV_05_Base_F{};
	class B_T_UAV_05_F: UAV_05_Base_F{};
	class B_W_UAV_05_F: UAV_05_Base_F{};
	
    /* Factions */
    #include "cfgADF.hpp"    // ADF
};
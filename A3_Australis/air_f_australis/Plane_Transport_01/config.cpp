#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgVehicles
{
	/* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"

    /* Bases */
	class Plane_Transport_01_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class ADF
			{
				displayName = "ADF";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_body_adf_CO.paa",
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
			class ADFGrey
			{
				displayName = "ADF (Grey)";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_body_adf_grey_CO.paa",
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_body_nzdf_CO.paa",
					"\A3_australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_wings_nzdf_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};			
		};
	};

	/*Aegis Compatability*/
	class Plane_Transport_01_infantry_base_F: Plane_Transport_01_base_F{};
	class Plane_Transport_01_vehicle_base_F: Plane_Transport_01_base_F{};
	
    /* Factions */
    #include "cfgADF.hpp"    // ADF
};
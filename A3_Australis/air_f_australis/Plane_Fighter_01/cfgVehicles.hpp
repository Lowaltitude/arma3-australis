class CfgVehicles
{
    // Arma 3
	class Plane_Base_F;
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class EjectionSystem;
        class TextureSources
        {
            class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_01\Data\Fighter_01_fuselage_01_adf_CO.paa",
                    "\A3_Australis\Air_F_Australis\Plane_Fighter_01\Data\Fighter_01_fuselage_02_adf_CO.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_01_CA.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_01_CO.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_02_CO.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_03_CO.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_05_CO.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_00_CA.paa",
                    "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa"
				};
				factions[] = {};
            };
        };
    };
	class Ejection_Seat_Plane_Fighter_01_base_F;
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
    // Arma 3 Australis
    //#include "cfgBlufor_Atlas.hpp"      // ADF
    // Deprecated classes
    //#include "deprecated.hpp"
};
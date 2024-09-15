class CfgVehicles
{
	/* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"
	// Arma 3 Aegis
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
		class AnimationSources: AnimationSources
		{
			class pylon_1_hide;
			class pylon_2_hide;
			class pylon_3_hide;
			class pylon_4_hide;
			class pylon_5_hide;
			class pylon_6_hide;
		};
        class Components: Components
        {
            class TransportPylonsComponent
            {
			    class pylons
                {
                    class pylons1;
                    class pylons2;
                    class pylons3;
                    class pylons4;
                    class pylons5;
                    class pylons6;
                    class pylonBayRight1;
                    class pylonBayLeft1;
                    class pylonBayRight2;
                    class pylonBayLeft2;
                    class pylonCenter1;
                };
			    class presets
                {
                    class default;
                    class AA;
                    class CAS;
                    class Cluster;
                };
                class Bays
                {
                    class BayLeft1;
                    class BayRight1;
                };
            };
        };
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_aucamo_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] = {};
			};
			/*
			class Australis_ADF_Geo_Green
			{
				displayName = "RAN Fleet Air Arm Geometric";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_ran_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
			*/
			class ADFGrey
			{
				displayName = "ADF (Grey)";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_adf_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_kahu_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
		};
		class EjectionSystem;
	};
	class B_Plane_Fighter_05_F: Plane_Fighter_05_Base_F{};
	class B_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F{};
	class Ejection_Seat_Plane_Fighter_05_base_F;
	// Arma 3 Australis
	#include "cfgADF_Atlas.hpp" 	//ADF - Atlas Patch
	#include "cfgADF.hpp" 			// ADF
};
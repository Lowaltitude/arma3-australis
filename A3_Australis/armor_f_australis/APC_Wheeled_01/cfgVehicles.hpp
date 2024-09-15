class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};

    /* Bases */
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_base_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_nzdf_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F{};

	/* Arma 3 - West Sahara bases */
	class APC_Wheeled_01_command_base_lxWS: APC_Wheeled_01_base_F
	{
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_ADF_CO.paa"
				};
				factions[] = {};
			};			
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_base_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_nzdf_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_nzdf_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class APC_Wheeled_01_mortar_base_lxWS: APC_Wheeled_01_base_F
	{
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_ADF_CO.paa"
				};
				factions[] = {};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_base_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_nzdf_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_nzdf_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class APC_Wheeled_01_atgm_base_lxWS;
	class APC_Wheeled_01_atgm_base_v2: APC_Wheeled_01_atgm_base_lxWS
	{
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_ADF_CO.paa"
				};
				factions[] = {};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_base_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_nzdf_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_nzdf_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa",
					"\A3_Australis\Armor_f_Australis\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_nzdf_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	/* Arma 3 Atlas */
	#include "cfgADF_Atlas.hpp"		// Arma 3 Atlas Patch
	#include "cfgADF.hpp"			// ADF (Australis)
	#include "cfgNZDF.hpp"			// NZDF 
};
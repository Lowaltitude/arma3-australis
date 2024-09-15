class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};

    /* Bases */
	class MBT_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class TextureSources
		{
			class ADF_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_ADF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_ADF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_ADF_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	/* Factions */
	#include "cfgADF_Atlas.hpp"   // Atlas ADF Patch
	#include "cfgADF.hpp"	// ADF

    /* Deprecated */
    //#include "deprecated.hpp"
};
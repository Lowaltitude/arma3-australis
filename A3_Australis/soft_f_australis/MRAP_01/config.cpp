#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class MRAP_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class TextureSources
		{
			class ADF
			{
				DisplayName = $STR_A3_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Australis\Soft_F_Australis\MRAP_01\Data\MRAP_01_base_adf_CO.paa",
					"\A3_Australis\Soft_F_Australis\MRAP_01\Data\MRAP_01_adds_adf_CO.paa",
					"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	// Arma 3 Australis
	#include "cfgADF.hpp"				// ADF
};
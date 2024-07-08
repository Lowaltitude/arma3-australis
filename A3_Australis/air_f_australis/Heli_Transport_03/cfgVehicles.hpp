class CfgVehicles 
{
	/* Inheritance Tree */
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	
	/*Base Classes*/
	class Heli_Transport_03_base_F: Helicopter_Base_H 
	{
		/* Turrets */
		class Turrets: Turrets
		{
			class MainTurret;
			class CopilotTurret;
			class RightDoorGun;
		};
		class TextureSources 
		{
			class InfernalRescue_Camo
			{
				displayName = "Huronderbird 2";
				author = "Foxtonnes";
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Heli_Transport_03\Data\Heli_Transport_03_ext01_IR_camo_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_03\Data\Heli_Transport_03_ext02_IR_camo_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = "ADF";
				author = "Lowaltitude";
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Heli_Transport_03\Data\Heli_Transport_03_ext01_adf_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_03\Data\Heli_Transport_03_ext02_adf_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F{};
	
	/* Factions */
	#include "cfgADF.hpp"	//ADF
};

class CfgVehicles
{
	/* Inheritance Tree */
	#include "\A3_Aegis\cfgHelis.hpp"

    /* Bases */
	class Heli_Attack_03_base_F: Helicopter_Base_F
	{
		/* Textures */
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_ADF_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_ADF_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_ADF_CO.paa"
				};
				factions[] = {};
			};
        };
    };
    /* Factions */
    #include "cfgADF_Atlas.hpp" 	//ADF - Atlas Patch
	#include "cfgADF.hpp"			//ADF (Australis)
};
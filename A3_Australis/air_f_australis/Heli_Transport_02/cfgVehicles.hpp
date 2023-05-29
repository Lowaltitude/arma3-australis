class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
        /* Liveries */
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = "Lowaltitude";
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_1_adf_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_2_adf_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_3_adf_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = "Lowaltitude";
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_1_nzcamo_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_2_nzcamo_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_3_nzcamo_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
			class FRMarine
			{
				displayName = "French (Marine)";
				author = "Lowaltitude";
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_1_marine_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_2_marine_CO.paa",
					"\A3_Australis\Air_F_Australis\Heli_Transport_02\Data\Heli_Transport_02_3_marine_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
		};
	};

    /* Factions */
    #include "cfgADF.hpp"   //ADF
	//#include "cfgNZDF.hpp"	//NZDF
};
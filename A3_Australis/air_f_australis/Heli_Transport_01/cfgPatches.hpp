class CfgPatches
{
	class A3_Australis_Air_F_Australis_Heli_Transport_01
	{
		addonRootClass = A3_Australis_Air_F_Australis;
		requiredAddons[] =
		{
			A3_Air_F,
			A3_Aegis_Air_F_Aegis,
			A3_Atlas_Air_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
			//ADF
			Atlas_B_A_Heli_Transport_01_F,
			Atlas_B_A_Heli_Transport_01_ard_F,
			Atlas_B_A_Heli_Transport_01_trp_F
        };
		weapons[] = {/* Automated */};
	};
};
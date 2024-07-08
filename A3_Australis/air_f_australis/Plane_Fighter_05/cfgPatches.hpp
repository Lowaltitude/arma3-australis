class CfgPatches
{
	class A3_Australis_Air_F_Australis_Plane_Fighter_05
	{
		addonRootClass = A3_Australis_Air_F_Australis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Atlas_Air_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
			//Arma 3 Aegis
			Plane_Fighter_05_Base_F
			//Arma 3 Atlas
            Atlas_B_A_Plane_Fighter_05_F,
			Atlas_B_A_Plane_Fighter_05_Stealth_F,
			Atlas_B_A_Ejection_Seat_Plane_Fighter_05_F
        };
		weapons[] = {/* Automated */};
	};
};
class CfgPatches
{
	class A3_Australis_Air_F_Australis_Plane_Transport_01
	{
		addonRootClass = A3_Australis_Air_F_Australis;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas,A3_Australis_Air_F_Australis};
		requiredVersion = 0.1;
		units[] =
        {
			//Arma 3 Aegis
			Plane_Transport_01_base_F,
			Plane_Transport_01_infantry_base_F,
			Plane_Transport_01_vehicle_base_F,
            // ADF
            Atlas_B_A_Plane_Transport_01_infantry_F,
            Atlas_B_A_Plane_Transport_01_vehicle_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};
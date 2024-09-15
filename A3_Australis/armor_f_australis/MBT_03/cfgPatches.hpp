class CfgPatches
{
	class A3_Australis_Armor_F_Australis_MBT_03
	{
		addonRootClass = A3_Australis_Armor_F_Australis;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas,A3_Australis_Armor_F_Australis};
		requiredVersion = 0.1;
		units[] =
        {
			// Arma 3 Atlas - ADF
			Atlas_B_A_MBT_03_cannon_F,
			Atlas_B_A_MBT_03_cannon_ard_F,
			Atlas_B_A_MBT_03_cannon_trp_F
			
			//ADF (Australis)
			Australis_B_A_MBT_03_base_F,
			Australis_B_A_MBT_03_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};
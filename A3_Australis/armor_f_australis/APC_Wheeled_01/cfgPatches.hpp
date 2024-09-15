class CfgPatches
{
	class A3_Australis_Armor_F_Australis_APC_Wheeled_01
	{
		addonRootClass = A3_Australis_Armor_F_Australis;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas,A3_Australis_Armor_F_Australis};
		requiredVersion = 0.1;
		units[] =
        {
			//Arma 3 Atlas - ADF
			Atlas_B_A_APC_Wheeled_01_cannon_v2_F,
			Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F,
			Atlas_B_A_APC_Wheeled_01_cannon_v2_trp_F,
			Atlas_B_A_APC_Wheeled_01_command_lxWS,
			Atlas_B_A_APC_Wheeled_01_command_ard_lxWS,
			Atlas_B_A_APC_Wheeled_01_command_trp_lxWS,
			Atlas_B_A_APC_Wheeled_01_mortar_lxWS,
			Atlas_B_A_APC_Wheeled_01_mortar_ard_lxWS,
			Atlas_B_A_APC_Wheeled_01_mortar_trp_lxWS,
			Atlas_B_A_APC_Wheeled_01_atgm_v2,
			Atlas_B_A_APC_Wheeled_01_atgm_ard_v2,
			Atlas_B_A_APC_Wheeled_01_atgm_trp_v2,
			
			//ADF (Australis)
			Australis_B_A_APC_Wheeled_01_cannon_v2_F,
			Australis_B_A_APC_Wheeled_01_command_lxWS,
			Australis_B_A_APC_Wheeled_01_mortar_lxWS,
			Australis_B_A_APC_Wheeled_01_atgm_v2
        };
		weapons[] = {/* Automated */};
	};
};
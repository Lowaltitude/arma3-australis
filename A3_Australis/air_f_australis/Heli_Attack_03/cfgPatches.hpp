class CfgPatches
{
	class A3_Australis_Air_F_Australis_Heli_Attack_03
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
			/*cfg Vehicles*/
			Heli_Attack_03_base_F,
			
			/* cfgADF_Atlas */
			Atlas_B_A_Heli_Attack_03_F,
			Atlas_B_A_Heli_Attack_03_ard_F,
			Atlas_B_A_Heli_Attack_03_trp_F,
			
            /* cfgADF */
            Australis_B_A_Heli_Attack_03_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};
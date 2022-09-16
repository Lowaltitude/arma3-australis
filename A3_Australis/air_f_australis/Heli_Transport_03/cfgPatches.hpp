class CfgPatches
{
	class A3_Australis_Air_F_Australis_Heli_Transport_03
	{
		addonRootClass = A3_Australis_Air_F_Australis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Heli_Transport_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_IR_Heli_Transport_03_F,
            B_IR_Heli_Transport_03_unarmed_F,
            B_IR_Heli_Transport_03_camo_F,
            B_IR_Heli_Transport_03__camo_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};
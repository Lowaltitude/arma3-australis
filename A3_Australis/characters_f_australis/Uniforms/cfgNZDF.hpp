class U_I_CombatUniform_tshirt;
class U_B_K_CombatUniform_tshirt: U_I_CombatUniform_tshirt
{
	scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_I_CombatUniform_tshirt0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_CombatUniform_tshirt_CA.paa";
	hiddenSelectionsTextures[]=
		{
			"a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",
			"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
		};
	class ItemInfo: UniformItem
	{
		uniformClass = I_support_MG_F;
	};
};
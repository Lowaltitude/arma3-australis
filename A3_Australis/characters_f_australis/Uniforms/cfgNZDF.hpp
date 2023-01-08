//Arma 3 Australis Characters_F_Australis Uniforms cfgNZDF

/*class U_B_K_CombatUniform_tshirt: U_I_CombatUniform_tshirt
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
		uniformClass = B_K_support_MG_F;
	};
};*/

/*NZDF Tropic*/
class Australis_U_B_K_CombatUniform_nzcamo: Uniform_Base
{
	author = "Lowaltitude";
	scope = public;
	displayName = Combat Fatigues [NZDF] (Tropic);
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_B_K_CombatFatigues_01_nzcamo_F;
		containerClass = Supply40;
		mass = 40;
	};
};

/*NZDF Arid*/
class Australis_U_B_K_CombatUniform_nzcamo_ard: Uniform_Base
{
	author = "Lowaltitude";
	scope = public;
	displayName = Combat Fatigues [NZDF] (Arid);
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_B_K_CombatFatigues_01_nzcamo_ard_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Australis_U_B_K_CombatUniform_shortsleeve_nzcamo_ard: Uniform_Base
{
	author = "Lowaltitude";
	scope = public;
	displayName = Combat Fatigues [NZDF] (Arid, Rolled-Up);
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_B_K_CombatFatigues_01_RolledUp_nzcamo_ard_F;
		containerClass = Supply40;
		mass = 40;
	};
};

/*NZDF Woodland*/
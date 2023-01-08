//Arma 3 Australis Characters_F_Australis cfgUniforms
#include "\A3_Aegis\basicDefines_A3.hpp"

/*ADF Naval*/
class Australis_B_A_CombatFatigues_01_aucamo_navy_F: I_soldier_F
{
  	scope = public;
  	scopeCurator = public;
	uniformClass = Australis_U_B_A_CombatUniform_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_navy_CO.paa"};
};
class Australis_B_A_CombatFatigues_01_RolledUp_aucamo_navy_F: I_soldier_lite_F
{
  	scope = public;
  	scopeCurator = public;
	uniformClass = Australis_U_B_A_CombatUniform_shortsleeve_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_navy_CO.paa"};
};

/*NZDF Tropic*/
class Australis_B_K_CombatFatigues_01_nzcamo_F: I_soldier_F
{
  	scope = public;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_nzcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_CO.paa"};
};

/*NZDF Arid*/
class Australis_B_K_CombatFatigues_01_nzcamo_ard_F: I_soldier_F
{
  	scope = public;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_nzcamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
};
class Australis_B_K_CombatFatigues_01_RolledUp_nzcamo_ard_F: I_soldier_lite_F
{
  	scope = public;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_shortsleeve_nzcamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
};

//Shadow Company Test
class B_ShadowCombatFatigues_01_tgr_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_Shadow_tgr_f;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_ShadowCombatFatigues_01_Tshirt_tgr_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_Shadow_tshirt_tgr_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_ShadowReconFatigues_01_tgr_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_Shadow_vest_tgr_f;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
//Arma 3 Australis Characters_F_Australis cfgUniforms
#include "\A3_Aegis\basicDefines_A3.hpp"

/*BLUFOR*/

//ADF
/*Arma 3 Atlas (Flag Patch Fix)*/
class Atlas_B_A_CombatFatigues_01_aucamo_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_CO.paa"};
};

class Atlas_B_A_CombatFatigues_01_aucamo_ard_F: Atlas_B_A_CombatFatigues_01_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_ard_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_ard_F: Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_ard_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_aucamo_trp_F: Atlas_B_A_CombatFatigues_01_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_trp_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_trp_F: Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_trp_CO.paa"};
};


/*ADF Semi-Arid*/
class Australis_B_A_CombatUniform_01_aucamo_srd_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_A_CombatUniform_srd;
	hiddenSelectionsTextures[] =
	{
		//Shirt (LDF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_E_Soldier_01_aucamo_srd_co.paa",
		//Pants (AAF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_srd_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class Australis_B_A_CombatFatigues_01_aucamo_srd_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_A_CombatUniform_aucamo_srd;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_srd_CO.paa"};
};
class Australis_B_A_CombatFatigues_01_sweater_aucamo_srd_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
	uniformClass = Australis_U_B_A_CombatUniform_sweater_aucamo_srd;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_sweater_aucamo_srd_CO.paa"};
};
class Australis_B_A_CombatFatigues_01_RolledUp_aucamo_srd_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_A_CombatUniform_shortsleeve_aucamo_srd;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_srd_CO.paa"};
};

/*ADF Arid*/
class Australis_B_A_CombatFatigues_01_sweater_aucamo_ard_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
	uniformClass = Australis_U_B_A_CombatUniform_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_sweater_aucamo_ard_CO.paa"};
};

/*ADF Woodland*/
class Australis_B_A_CombatFatigues_01_sweater_aucamo_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
	uniformClass = Australis_U_B_A_CombatUniform_sweater_aucamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_sweater_aucamo_CO.paa"};
};

/*ADF Tropic*/
class Australis_B_A_CombatFatigues_01_sweater_aucamo_trp_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
	uniformClass = Australis_U_B_A_CombatUniform_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_sweater_aucamo_trp_CO.paa"};
};

/*ADF Naval*/
class Australis_B_A_CombatFatigues_01_aucamo_navy_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_A_CombatUniform_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_nvy_CO.paa"};
};
class Australis_B_A_CombatFatigues_01_RolledUp_aucamo_navy_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_A_CombatUniform_shortsleeve_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_aucamo_nvy_CO.paa"};
};
class Australis_B_A_CombatFatigues_01_sweater_aucamo_nvy_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
	uniformClass = Australis_U_B_A_CombatUniform_sweater_aucamo_navy;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_sweater_aucamo_nvy_CO.paa"};
};



//NZDF
/*NZDF Tropic*/
class Australis_B_K_CombatFatigues_01_nzcamo_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_nzcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_CO.paa"};
};

/*NZDF Arid*/
class Australis_B_K_CombatFatigues_01_nzcamo_ard_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_nzcamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
};
class Australis_B_K_CombatFatigues_01_RolledUp_nzcamo_ard_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_K_CombatUniform_shortsleeve_nzcamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_ard_CO.paa"};
};
/*NZDF Navy*/
class Australis_B_K_CombatUniform_01_nzcamo_nvy_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_K_CombatUniform_nzcamo_nvy;
	hiddenSelectionsTextures[] =
	{
		//Shirt (LDF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_E_Soldier_01_nzcamo_nvy_CO.paa",
		//Pants (AAF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_K_Soldier_01_nzcamo_nvy_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
/*Pacfic Union - Timor Leste*/
class Australis_B_P_CombatFatigues_01_tlcamo_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};
class Australis_B_P_CombatFatigues_01_RolledUp_tlcamo_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_shortsleeve_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};

/*Pacfic Union - Fiji*/
class Australis_B_F_CombatUniform_fjcamo_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_P_CombatUniform_fjcamo;
	hiddenSelectionsTextures[] =
	{
		//Shirt (LDF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_E_Soldier_01_fjcamo_co.paa",
		//Pants (AAF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_F_Soldier_01_fjcamo_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};

//France Tropic
class Australis_B_CombatFatigues_01_tdm_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_tdm_F;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_trp_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class Australis_B_CombatFatigues_01_tshirt_tdm_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_tshirt_tdm_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_trp_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class Australis_B_ReconFatigues_01_tdm_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_vest_tdm_F;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_trp_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
//France Arid
class Australis_B_CombatFatigues_01_ffl_ard_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_ffl_ard_F;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_ard_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class Australis_B_CombatFatigues_01_tshirt_ffl_ard_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_tshirt_ffl_ard_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_ard_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class Australis_B_ReconFatigues_01_ffl_ard_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_CombatUniform_vest_ffl_ard_F;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_france_ard_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/*OPFOR*/

//Indonesia
/*Light Fatigues*/
class O_LightFatigues_01_idcamo_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_idcamo_F;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\officer_noinsignia_idcamo_CO.paa"};
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


//cfgTEST Uniforms
class Australis_Test_Uniform_AAF_01_holder: I_soldier_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};
class Australis_Test_Uniform_shortsleeve_AAF_01_holder: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_shortsleeve_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};
class Australis_Test_Uniform_AAF_02_holder: I_soldier_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};
class Australis_Test_Uniform_shortsleeve_AAF_02_holder: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = public;
	uniformClass = Australis_U_B_P_CombatUniform_shortsleeve_tlcamo;
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_P_Soldier_01_tlcamo_CO.paa"};
};
class Australis_Test_Uniform_LDF_01_holder: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Australis_U_B_P_CombatUniform_fjcamo;
	hiddenSelectionsTextures[] =
	{
		//Shirt (LDF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_E_Soldier_01_fjcamo_wdl_co.paa",
		//Pants (AAF Template)
		"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_F_Soldier_01_fjcamo_wdl_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
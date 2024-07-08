//Arma 3 Australis Weapons_F_Australis Rifles

/*Base Classes*/
class arifle_Galat_base_lxWS;
class arifle_Galat_lxWS;
class arifle_Katiba_F;

/*Arma 3 Australis*/
/*Galat 5.56 mm*/
class arifle_Galat_556_F: arifle_Galat_lxWS
{
	author = "Lowaltitude";
	scope = public;
	baseWeapon="arifle_Galat_556_F";
	displayName = "Galat 5.56 mm";
	magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS"};
	magazineWell[] = {"556x45_Velko"};
};
/*AUR 90s*/

/*G36 5.56 mm*/
/*LX 6.5mm (Royal Ordnance Licensed MX)*/
class arifle_MX_F;
class arifle_MXC_F;
class arifle_MX_GL_F;
class arifle_MX_SW_F;
class arifle_MXM_F;

class arifle_MX_UK_F: arifle_MX_F
{
	baseWeapon="arifle_MX_UK_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="LX 6.5mm";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\XMX_Base_uk_co.paa",
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
	magazines[]=
	{
		"30Rnd_65x39_caseless_black_mag"
	};
};
class arifle_MX_Green_F: arifle_MX_F
{
	baseWeapon="arifle_MX_UK_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="MX 6.5mm (Dunkelgrun)";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MX_olive_CO.paa",
		"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MXC_olive_CO.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
	magazines[]=
	{
		"30Rnd_65x39_caseless_black_mag"
	};
};
class arifle_MXC_Green_F: arifle_MXC_F
{
	baseWeapon="arifle_MXC_Green_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="MXC 6.5mm (Dunkelgrun)";
    hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MXC_olive_CO.paa"};
    hiddenSelectionsMaterials[]=
	{
		"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXC.rvmat"
	};
};
class arifle_MX_GL_Green_F: arifle_MX_GL_F
{
	baseWeapon="arifle_MX_GL_Green_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="MX 3GL 6.5mm (Dunkelgrun)";
    hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MX_olive_CO.paa",
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
	};
    hiddenSelectionsMaterials[]=
	{
		"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MX.rvmat",
        "\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXGL.rvmat"
	};
};
class arifle_MX_SW_Green_F: arifle_MX_SW_F
{
	baseWeapon="arifle_MX_SW_Green_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="MXSW 6.5mm (Dunkelgrun)";
    hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MXSW_olive_CO.paa"};
    hiddenSelectionsMaterials[]=
	{
		"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXSW.rvmat"
	};
};
class arifle_MXM_green_F: arifle_MXM_F
{

	baseWeapon="arifle_MXM_green_F";
	author="$STR_A3_Bohemia_Interactive";
	_generalMacro="arifle_MX_Black_F";
	displayName="MXM 6.5mm (Dunkelgrun)";
    hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\MX\Data\arifle_MXM_olive_CO.paa"};
    hiddenSelectionsMaterials[]=
	{
		"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXM.rvmat"
	};
};

class CfgGlasses
{
    /* Items */
	/* Armband */
	class None;
	class G_Armband_blu_F: None
	{
		author = OokamiJamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Armband (Blue)";
		model = "\A3_Australis\characters_f_australis\Facewear\G_Armband.p3d";
		hiddenSelections[] =
		{
			camo
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Australis\characters_f_australis\Facewear\Data\G_Armband_blu_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 10;
	};
	/* Helmet Band */
	class G_HelmetBand_blu_F: None
	{
		author = OokamiJamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Helmet Band (Blue)";
		model = "\A3_Australis\characters_f_australis\Facewear\G_HelmetBand.p3d";
		hiddenSelections[] =
		{
			camo
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Australis\characters_f_australis\Facewear\Data\G_HelmetBand_blu_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 10;
	};
};
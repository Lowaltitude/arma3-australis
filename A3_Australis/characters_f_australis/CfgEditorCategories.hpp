//A3_Data_F_Australis_EditorCategories


class CfgFactionClasses
{
	/*class B_AU_F 
	{
		displayName = "NATO (Oceanic)";
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon
	};*/
	class B_NZ_F
	{
		displayName = "New Zealand";
        priority = 3;
        side = 1;
        icon = "A3\data_f_australis\flags\flag_nz_ca.paa";
	};
	class B_PACUNION_F
	{
		displayName = "Pacfic Union Peacekeepers";
        priority = 3;
        side = 1;
        icon = "A3\data_f_australis\flags\flag_pu_ca.paa";
	};
	class B_Serco_F
	{
		displayName = "Defence Services";
        priority = 3;
        side = 2;
        icon = "";	//Flag and logo pending
	};
	class O_ID_F
	{
		displayName = "Indonesia";
        priority = 3;
        side = 0;
        icon = "A3\data_f_australis\flags\flag_id_ca.paa";
	};
	class O_TPR_F
	{
		displayName = "Pirates (Tanoan)";
        priority = 3;
        side = 0;
        icon = ""; // Use Horizon Islands Flag
	};
	class I_AFP_F
	{
		displayName = "Federal Police";
        priority = 3;
        side = 2;
        icon = "A3\data_f_australis\flags\flag_au_ca.paa";		
	};
	class I_MRC_F
	{
		displayName = "Mercernaries";
        priority = 3;
        side = 2;
        icon = ""; //Flag yet to be made
	};
	class I_TPR_F
	{
		displayName = "Pirates (Tanoan)";
        priority = 3;
        side = 2;
        icon = ""; //Use Horizon Islands flag
	};
	class I_Eco_F
	{
		displayName = "Ecowarriors";
        priority = 3;
        side = 2;
        icon = "A3\data_f_australis\flags\flag_eco_ca.paa"; //flag yet to be made		
	};
};
class CfgEditorSubcategories
{
	class EdSubCat_Personnel_Navy
	{
		displayName = "Men (Navy)";
	};
	class EdSubCat_Personnel_NewCaledonia
	{
		displayName = "$STR_A3_Australis_Peacekeepers_NC";
	};
	class EdSubCat_Personnel_Fiji
	{
		displayName = "$STR_A3_Australis_Peacekeepers_FJ";
	};
	class EdSubCat_Personnel_Timor
	{
		displayName = "$STR_A3_Australis_Peacekeepers_TL";
	};
};
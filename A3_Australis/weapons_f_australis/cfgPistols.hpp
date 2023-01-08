//Arma 3 Australis Weapons_F_Australis Pistols

/*Base Classes*/
class hgun_ACPC2_F;
class hgun_ACPC2_black_F: hgun_ACPC2_F
{
	class WeaponSlotsInfo;
};


/*Arma 3 Australis*/
class hgun_ABPM3_F : hgun_ACPC2_black_F
{
	author = "Avery, Foxtonnes, Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9 mm";
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Pistols\ACPC2\Data\ABPM3_wood_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Australis\weapons_f_australis\Pistols\ACPC2\Data\ABPM3.rvmat"};
	recoil = "recoil_pistol_g17";
	baseWeapon = hgun_ABPM3_F;
	//here is where the recoil reconfiguration goes
	magazines[] = //Replace with custom mags later
	{
	   16Rnd_9x21_Mag_v2,
       16Rnd_9x21_red_Mag_v2,
       16Rnd_9x21_green_Mag_v2,
       16Rnd_9x21_yellow_Mag_v2,
       // Compatibility classes, these are hidden
       30Rnd_9x21_Mag,
       30Rnd_9x21_Red_Mag,
       30Rnd_9x21_Yellow_Mag,
       30Rnd_9x21_Green_Mag,
       16Rnd_9x21_Mag,
       16Rnd_9x21_red_Mag,
       16Rnd_9x21_green_Mag,
       16Rnd_9x21_yellow_Mag
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=20;
		holsterScale=0.94999999;
		class CowsSlot
		{
		};
		class MuzzleSlot: asdg_MuzzleSlot_9MM
		{
			iconPosition[]={0.25,0.40000001};
			iconScale=0.2;
		};
		class PointerSlot: PointerSlot_Pistol
		{
			iconPosition[]={0.47999999,0.54000002};
			iconScale=0.25;
		};
	};
	magazineWell[] = {"Pistol_9x21"};
};
class hgun_ABPM3_green_F: hgun_ABPM3_F 
{
	author = "Avery, Foxtonnes, Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9 mm (Green)";
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Pistols\ACPC2\Data\ABPM3_green_CO.paa"};
	recoil = "recoil_pistol_g17";
	baseWeapon = hgun_ABPM3_green_F;
};
class hgun_ABPM3_tan_F: hgun_ABPM3_F 
{
	author = "Avery, Foxtonnes, Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9 mm (Tan)";
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Pistols\ACPC2\Data\ABPM3_khk_CO.paa"};
	recoil = "recoil_pistol_g17";
	baseWeapon = hgun_ABPM3_tan_F;
};
class hgun_ABPM3_olive_F: hgun_ABPM3_F 
{
	author = "Avery, Foxtonnes, Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9 mm (Olive)";
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Pistols\ACPC2\Data\ABPM3_olive_CO.paa"};
	recoil = "recoil_pistol_g17";
	baseWeapon = hgun_ABPM3_olive_F;
};
class hgun_ABPM3_black_F: hgun_ABPM3_F 
{
	author = "Avery, Foxtonnes, Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9 mm (Black)";
	hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Pistols\ACPC2\Data\ABPM3_black_CO.paa"};
	recoil = "recoil_pistol_g17";
	baseWeapon = hgun_ABPM3_black_F;
};
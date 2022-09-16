//Arma 3 Australis Weapons_F_Australis Pistols

/*Base Classes*/
class hgun_ACPC2_black_F;

/*Arma 3 Australis*/
class hgun_ABPM3_F : hgun_ACPC2_black_F
{
	author = "Lowaltitude"; //replace with StringTable entry later
	displayName = "ABP-M3 9mm";
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
	magazineWell[] = {"Pistol_9x21"};
};
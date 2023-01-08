//Arma 3 Australis Weapons_F_Australis Magazines
class CfgMagazines 
{
	/*Base Classes*/
	class CA_Magazine;
	class HandGrenade;
	class SatchelCharge_Remote_Mag;
	
	/*Arma 3 Australis*/
	/*7.62 mm Boxes*/
	class 120Rnd_762x51_Box: CA_Magazine
	{
		author="Lowaltitude";
		scope=2;
		displayName="7.62mm 120Rnd Box";
		descriptionShort="Caliber: 7.62x51 mm<br/>Rounds: 120<br />Used in: GPMG-5";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
		count=120;
		type="2*		256";
		ammo="B_762x51_Tracer_Green";
		initSpeed=860;
		tracersEvery=5;
		lastRoundsTracer=4;
		nameSound="mgun";
		mass=35;
	};
	class 120Rnd_762x51_Box_Tracer: 120Rnd_762x51_Box 
	{
		author="Lowaltitude";
		displayName="7.62mm 120Rnd Tracer (Green) Box";
		tracersEvery=1;
		lastRoundsTracer=120;
	};
	class 120Rnd_762x51_Box_Red:  120Rnd_762x51_Box
	{
		author="Lowaltitude";
		displayName="7.62mm 120Rnd Reload Tracer (Red) Box";
		ammo="B_762x51_Tracer_Red";
	};
	class 120Rnd_762x51_Box_Tracer_Red:  120Rnd_762x51_Box_Red
	{
		author="Lowaltitude";
		displayName="7.62mm 120Rnd Tracer (Red) Box";
		tracersEvery=1;
		lastRoundsTracer=120;
	};
	class 120Rnd_762x51_Box_Yellow:  120Rnd_762x51_Box
	{
		author="Lowaltitude";
		displayName="7.62mm 120Rnd Reload Tracer (Yellow) Box";
		ammo="B_762x51_Tracer_Yellow";
	};
	class 120Rnd_762x51_Box_Tracer_Yellow: 120Rnd_762x51_Box_Yellow 
	{
		author="Lowaltitude";
		displayName="7.62mm 120Rnd Tracer (Yellow) Box";
		tracersEvery=1;
		lastRoundsTracer=120;
	};
	
	/*5.56 mm Boxes*/
	class 150Rnd_556x45_Box_F: CA_Magazine
	{
		author="Lowaltitude";
		scope=2;
		displayName="5.56 mm 150Rnd Reload Tracer (Yellow)";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_556x45_Box_F1";
		ammo="B_556x45_Ball_Tracer_Yellow";
		count=150;
		initSpeed=915;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		tracersEvery=4;
		lastRoundsTracer=4;
		mass=30;
	};
	class 150Rnd_556x45_Box_Red_F: 150Rnd_556x45_Box_F
	{
		author="Lowaltitude";
		displayName="5.56 mm 150Rnd Reload Tracer (Red)";
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 150Rnd_556x45_Box_Tracer_F: 150Rnd_556x45_Box_F
	{
		author="Lowaltitude";
		displayName="5.56 mm 150Rnd Tracer (Yellow)";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 150Rnd_556x45_Box_Tracer_Red_F: 150Rnd_556x45_Box_Tracer_F
	{
		author="Lowaltitude";
		displayName="5.56 mm 150Rnd Tracer (Red)";
		ammo="B_556x45_Ball_Tracer_Red";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
	};
	
	/*9mm Hi-Power Mags*/
	
	/*Throwable Satchel Charge Magazine*/
	class HandGrenade_Satchel: HandGrenade
	{
		author = "Lowaltitude";
		scope = 2;
		mass = 80;
		displayName = "Satchel Charge";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\A3\Weapons_F\Explosives\satchel_i";
		ammo = "GrenadeSatchel";
		displayNameShort = "Satchel Charge";
	};
	
	/*Throwable Demo Charge Magazine*/
	class DemoCharge_RemoteThrow_Mag: SatchelCharge_Remote_Mag
	{
		author="Lowaltitude";
		scope=2;
		mass=20;
		displayName="Demo Charge";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		model="\A3\Weapons_F\Explosives\c4_charge_small";
		ammo="DemoCharge_RemoteThrow_Ammo";
		displayNameShort = "Demo Charge";
		descriptionShort="$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
	};
	
	/*Sticky Grenade Magazine*/
	class HandGrenade_Sticky: HandGrenade
	{
		author = "Lowaltitude";
		scope = 2;
		mass = 10;
		displayName = "Semtex Grenade";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east.p3d";
		ammo = "Grenade_Sticky_Ammo";
		displayNameShort = "Semtex Grenade";
	};
	
	
	/*Western Sahara Compatability Patch for Aegis*/
	#include "cfgWSPatch.hpp"
};
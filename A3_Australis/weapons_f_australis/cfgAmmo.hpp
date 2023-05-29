//Arma 3 Australis Weapons_F_Australis Ammo
class cfgAmmo 
{
	/*Base Classes*/
	class Default;
	class PipeBombBase;
	class ShotDeployBase;
	class SubmunitionBase;
	class SubmunitionBullet;
	class DemoCharge_Remote_Ammo;

	/*Arma 3*/ 
	
	
	/*Arma 3 Aegis*/
	class GrenadeHand;
	
	
	/*Arma 3 Australis*/
	//Throwable Satchel Charge
	class GrenadeSatchel: GrenadeHand 
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 5;
		dangerRadiusHit = 65;
		suppressionRadiusHit = 30;
		typicalspeed = 20;
		model = "\A3\Weapons_F\Explosives\satchel.p3d";
		deflecting = 7;
		fuseDistance = /*4*/ 0;
        explosionTime = 10;
		timeToLive = 18;
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
	};
	
	//Throwable Demo Charge
	class DemoCharge_RemoteThrow_Ammo: GrenadeHand
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		dangerRadiusHit = 65;
		suppressionRadiusHit = 30;
		typicalspeed = 20;
		model = "\A3\Weapons_F\explosives\c4_charge_small";
		deflecting = 7;
		fuseDistance = 0;
		explosionTime = 10;
		timeToLive = 18;
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	
	//Sticky Grenade
	class Grenade_Sticky_Ammo: ShotDeployBase
	{
		scope = 2;
		submunitionAmmo = Grenade_Sticky_Submunition_Stage1;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d"; //Aegis RGO Placeholder
		mineFloating = 1000;
		deleteParentWhenTriggered = false;
		timeToLive = 10;
	};
	
	/*Sub Munitions*/
	//Sticky Grenade Submunition Stage 1
	class Grenade_Sticky_Submunition_Stage1: SubmunitionBullet 
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d"; //Aegis RGO Placeholder
		submunitionAmmo = Grenade_Sticky_Submunition_Stage2;
		triggerTime = 2;
		deleteParentWhenTriggered = false;
		mineFloating = 1000;
	};
	
	//Sticky Grenade Submunition Stage 2
	class Grenade_Sticky_Submunition_Stage2: GrenadeHand 
	{		
		hit=500;
		indirectHit=500;
		indirectHitRange=3;
		model="\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d";
		mineModelDisabled="\A3\Weapons_F\empty.p3d";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine="HandGrenade_Sticky";
		explosionTime = 0.2;
		timeToLive = 20;
		triggerWhenDestroyed = 1;
	};
	
	//Submunition Throwable use for Sticky Nades later
	/*class DemoCharge_RemoteThrow_Ammo: ShotDeployBase
	{
		submunitionAmmo = DemoCharge_Remote_Ammo;
		model = "\A3\Weapons_F\explosives\c4_charge_small.p3d";
		mineFloating = 1000;
	};*/
};
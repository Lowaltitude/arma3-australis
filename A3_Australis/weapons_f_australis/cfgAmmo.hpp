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
	class SmokeShell;
	
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
	
	//M106 Bursting Smoke Grenade
	/*class SmokeShell_Burst_Ammo: SmokeShell 
	{
		effectsSmoke = "lxWS_Smoke_BarrageEffect";
	};*/
	
	class SmokeShell_Burst_Ammo: SmokeShell
	{
		model="\A3\Weapons_f\ammo\smokegrenade_white_throw";
		scope = 2;
		scopeCurator = 2;
		hit=0;
		indirectHit=0;
		indirectHitRange=0.2;
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		typicalspeed=22;
		cost=100;
		simulation="shotSmokeX";
		explosive=0;
		deflecting=7;
		explosionTime=2;
		timeToLive=20;
		fuseDistance=0;
		aiAmmoUsageFlags="4 + 2";
		smokeColor[]={1,1,1,1};
		effectsSmoke = "lxWS_Smoke_BarrageEffect";
		whistleDist=0;
		class CamShakeExplode
		{
			power=3.2;
			duration=0.80000001;
			frequency=20;
			distance=56;
		};
		soundHit[]=
		{
			"",
			0,
			1
		};
		SmokeShellSoundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			3.1622777,
			1,
			1300
		};
		SmokeShellSoundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			3.1622777,
			1,
			1300
		};
		SmokeShellSoundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			3.1622777,
			1,
			1300
		};
		SmokeShellSoundLoop1[]=
		{};
		SmokeShellSoundLoop2[]=
		{};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			0.25,
			"SmokeShellSoundHit2",
			0.25,
			"SmokeShellSoundHit3",
			0.5
		};
		grenadeBurningSound[]=
		{};
	};
	//Throwable Demo Charge
	class DemoCharge_RemoteThrow_Ammo: ShotDeployBase
	{
		scope = 2;
		submunitionAmmo = DemoCharge_Remote_Ammo_Scripted;
		model = "\A3\Weapons_F\explosives\c4_charge_small";
		mineFloating = 1000;
		deleteParentWhenTriggered = false;
		timeToLive = 10;
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
/*Arma 3 Weapons_F_Australis Configuration*/
#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "ASDG.hpp"


/*Base Classes*/
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;

/*Configs*/
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgMagazineWells.hpp"
#include "cfgRecoils.hpp"

/*Cfg Weapons*/
class CfgWeapons //Move to cfgWeapons.hpp later
{
	#include "cfgPistols.hpp"
	#include "cfgRifles.hpp"
	#include "cfgMachineguns.hpp"
	#include "cfgThrow.hpp"
};
	//Arma 3 Australis Weapons_F_Australis cfgThrow.hpp
	/*Base Classes*/
	class GrenadeLauncher;
	
	/*Arma 3 Australis*/
	
	class Throw: GrenadeLauncher
	{
        muzzles[] +=
        {
			"HandGrenade_StickyMuzzle",
			"HandGrenade_SatchelMuzzle",
			"DemoCharge_ThrowMuzzle"
        };
        class ThrowMuzzle;
		class HandGrenade_SatchelMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_Satchel};
		};
		class DemoCharge_ThrowMuzzle: ThrowMuzzle 
		{
			magazines[] = {DemoCharge_RemoteThrow_Mag};
			enableAttack=1;
		};
		class HandGrenade_StickyMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_Sticky};
		};
    };
class CfgPatches
{
	class A3_Australis_Boat_F_Destroyer_01_Australis
	{
		addonRootClass="A3_Australis_Boat_F_Destroyer_Australis";
		requiredAddons[]=
		{
			"A3_Boat_F_Destroyer",
			"A3_Australis_Data_F_Australis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Destroyer_202_base_F",
			"Land_Destroyer_202_hull_01_F",
			"Land_Destroyer_202_hull_05_F",
			"ShipFlag_AU_F"
		};
		weapons[]={};
	};
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
	class Land_Destroyer_01_base_F;
	class Land_Destroyer_01_hull_base_F;
	class Land_Destroyer_01_hull_05_F;
	class Land_Destroyer_01_hull_01_F;
	class Land_Destroyer_202_base_F: Land_Destroyer_01_base_F
	{
		author="Lowaltitude";
		model="\A3\Boat_F_Destroyer\Destroyer_01\Destroyer_01_hull_base_F.p3d";
		reversed=0;
		scope=2;
		scopeCurator=2;
		DLC="Jets";
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_assembled.jpg";
		editorCategory="EdCat_Structures";
		editorSubcategory="EdSubcat_StaticShips";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayName="HMAS Hammersley";
		mapsize=155;
		destrType=0;
		featureType=2;
		multiStructureParts[]=
		{
			
			{
				"Land_Destroyer_202_hull_01_F",
				"pos_hull_1"
			},
			
			{
				"Land_Destroyer_01_hull_02_F",
				"pos_hull_2"
			},
			
			{
				"Land_Destroyer_01_hull_03_F",
				"pos_hull_3"
			},
			
			{
				"Land_Destroyer_01_hull_04_F",
				"pos_hull_4"
			},
			
			{
				"Land_Destroyer_202_hull_05_F",
				"pos_hull_5"
			},
			
			{
				"Land_Destroyer_01_interior_02_F",
				"pos_hull_2"
			},
			
			{
				"Land_Destroyer_01_interior_03_F",
				"pos_hull_3"
			},
			
			{
				"Land_Destroyer_01_interior_04_F",
				"pos_hull_4"
			},
			
			{
				"Land_HelipadEmpty_F",
				"pos_heliPad"
			},
			
			{
				"ShipFlag_AU_F",
				"pos_Flag"
			}
		};
		class Attributes
		{
			class CustomShipNameTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipNameTexture0";
				control="Edit";
				expression="([_this, 'Land_Destroyer_202_hull_05_F'] call bis_fnc_destroyer01GetShipPart) setObjectTextureGlobal [0, _value];";
				typeName="STRING";
				defaultValue="'A3_Australis\destroyer_f_australis\destroyer_01\data\destroyer_01_tag_202_co'";
			};
			class CustomShipFlagTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipFlagTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipFlagTexture0";
				control="Edit";
				expression="([_this, 'ShipFlag_AU_F'] call bis_fnc_destroyer01GetShipPart) setFlagTexture _value;";
				typeName="STRING";
				defaultValue="'\A3_Australis\data_f_australis\Flags\flag_ane_ca.paa'";
			};
			class ShipHangarDoorState
			{
				displayName="$STR_3den_object_attribute_ShipHangarDoorState_displayname";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipHangarDoorState";
				control="CheckboxNumber";
				expression="[([_this, 'Land_Destroyer_01_hull_04_F'] call bis_fnc_destroyer01GetShipPart), _value, true] spawn bis_fnc_destroyer01AnimateHangarDoors;";
				defaultValue="0";
				typeName="NUMBER";
			};
			class CustomShipNumber1
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber1_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber1_tooltip";
				property="CustomShipNumber1";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_202_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 0] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="2";
				validate="number";
				typeName="NUMBER";
			};
			class CustomShipNumber2
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber2_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber2_tooltip";
				property="CustomShipNumber2";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_202_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 1] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="0";
				validate="number";
				typeName="NUMBER";
			};
			class CustomShipNumber3
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber3_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber3_tooltip";
				property="CustomShipNumber3";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_202_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 2] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="2";
				validate="number";
				typeName="NUMBER";
			};
		};
		class Eventhandlers
		{
			init="_this call BIS_fnc_Destroyer01Init;";
			attributesChanged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			dragged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			registeredToWorld3DEN="_this call BIS_fnc_Destroyer01EdenInit;";
			unregisteredFromWorld3DEN="_this call BIS_fnc_Destroyer01EdenDelete;";
		};
	};
	class Land_Destroyer_202_hull_01_F: Land_Destroyer_01_hull_01_F
	{
		displayName="$STR_A3_Land_Destroyer_01_hull_01_F";
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_hull1.jpg";
		model="\A3\Boat_F_Destroyer\Destroyer_01\Destroyer_01_hull_01_F.p3d";
		hiddenSelections[]=
		{
			"HullNumber1",
			"HullNumber2",
			"HullNumber3"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa"
		};
	};
	class Land_Destroyer_202_hull_05_F: Land_Destroyer_01_hull_05_F
	{
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_hull5.jpg";
		displayName="$STR_A3_Land_Destroyer_01_hull_05_F";
		model="\A3\Boat_F_Destroyer\Destroyer_01\Destroyer_01_hull_05_F.p3d";
		hiddenSelections[]=
		{
			"shipNameTag"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Australis\destroyer_f_australis\destroyer_01\data\destroyer_01_tag_202_co.paa"
		};
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end"
			},
			
			{
				"Ladder_2_start",
				"Ladder_2_end"
			}
		};
	};
	class ShipFlag_AU_F: FlagCarrier
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_US_F.jpg";
		_generalMacro="Flag_AU_F";
		scope=1;
		scopeCurator=0;
		displayName="Royal Australian Navy Ensign";
		model="\A3\Boat_F_Destroyer\Destroyer_01\ShipFlag_SmallMast_F.p3d";
		mapSize=2.4400001;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3_Australis\data_f_australis\Flags\flag_ane_ca.paa'";
		};
	};
};

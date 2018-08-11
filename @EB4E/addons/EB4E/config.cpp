#include "BIS_AddonInfo.hpp"
/* Declaration as Addon-Content.*/
class CfgPatches 		{
	/* "Hey ArmA3is is an addon and it's named "EB4E"*/
	/* The name should be indentical to the folder's name*/
	class EB4E	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_epoch_config"
		};
        author = "Ghostrider";
		authorUrl = "http://www.ghostridergaming.net";		
	};
};

/* The category in the editor like "Objects" or "Cars".*/
class CfgVehicleClasses {

	class EB4EVehicleClass {
		displayName = "Extended Bases 4 Epoch";
	};
};

class CfgVehicles
{
    class Static;
    class Const_Ghost_EPOCH : Static {};
    class NonStrategic;
    class WeaponHolder;
    class ThingX;
    class Constructions_modular_F : ThingX
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
        interactMode = 1;
    };
    class Constructions_static_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 5000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        interactMode = 1;
    };
    class Buildable_Storage : WeaponHolder
    {
        scope = 0;
        forceSupply = 0;
        isGround = 0;
        destrType = "DestructBuilding";
        armor = 8000;
        maximumLoad = 1000;
    };	
	class WoodenRack_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model= "\A3\Structures_F\Furniture\Rack_F.p3d";
        displayName = "Wood Rack";
		descriptionShort = "A Small Wood Rack";			
    };
    class WoodenRack_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F\Furniture\Rack_F.p3d";
        displayName = "Wood Rack";
		descriptionShort = "A Small Wood Rack";		
    };
    class WoodenRack_EB4E : Buildable_Storage
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;   //  May need optimization
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F\Furniture\Rack_F.p3d";
        displayName = "Wood Rack";
		descriptionShort = "A Small Wood Rack";			
		vehicleClass = "Epoch_objects";
		maximumLoad = 1600;		// may need scalling relative to other objects
		destrType = "DestructDefault";
	};	
	
    class MetalRackTall_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_Tall_F.p3d";
        displayName = "Tall Metal Rack (5 shelves)";
		descriptionShort = "Tall Metal Rack";			
    };
    class MetalRackTall_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_Tall_F.p3d";
        displayName = "Tall Metal Rack (5 shelves)";
		descriptionShort = "Tall Metal Rack";		
    };
    class MetalRackTall_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_Tall_F.p3d";
        displayName = "Tall Metal Rack (5 shelves)";
		descriptionShort = "Tall Metal Rack";		
		vehicleClass = "Epoch_objects";
		maximumLoad = 3000;
		destrType = "DestructDefault";
	};		
	
    class MetalRack_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_F.p3d";
        displayName = "Small Metal Rack";
		descriptionShort = "Small Metal Rack";		
    };
    class MetalRack_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_F.p3d";
        displayName = "Small Metal Rack";
		descriptionShort = "Small Metal Rack";		
    };
    class MetalRack_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F\Furniture\Metal_rack_F.p3d";
        displayName = "Small Metal Rack";
		descriptionShort = "Small Metal Rack";		
		vehicleClass = "Epoch_objects";
		maximumLoad = 2500;		
		destrType = "DestructDefault";
	};	
    class ToolTrollyBlue_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_02_F.p3d";
        displayName = "Tool Cart (Blue)";
		descriptionShort = "Blue Tool Trolly";
    };
    class ToolTrollyBlue_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_02_F.p3d";
        displayName = "Tool Cart (Blue)";
		descriptionShort = "Blue Tool Trolly";		
    };
    class ToolTrollyBlue_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_02_F.p3d";
        displayName = "Tool Cart (Blue)";
		descriptionShort = "Blue Tool Trolly";		
		vehicleClass = "Epoch_objects";
		maximumLoad = 2500;		
		destrType = "DestructDefault";
	};	
    class ToolTrollyRed_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Red Tool Trolly";
		descriptionShort = "Red Tool Trolly";		
    };
    class ToolTrollyRed_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Red Tool Trolly";
		descriptionShort = "Red Tool Trolly";		
    };
    class ToolTrollyRed_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Red Tool Trolly";
		descriptionShort = "Red Tool Trolly";		
		vehicleClass = "Epoch_objects";
		maximumLoad = 2500;		
		destrType = "DestructDefault";
	};	
    class Icebox_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Icebox";
		descriptionShort = "Icebox";		
		model = "\A3\Structures_F\Furniture\Icebox_F.p3d";
    };
    class Icebox_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Icebox";
		descriptionShort = "Icebox";			
		model = "\A3\Structures_F\Furniture\Icebox_F.p3d";
    };
    class Icebox_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Icebox";
		descriptionShort = "Icebox";			
		model = "\A3\Structures_F\Furniture\Icebox_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 3500;		
		destrType = "DestructDefault";
	};	

    class WoodenShelvesBlue_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Blue Wood Shelves";
		descriptionShort = "Blue Wood Shelves";			
		model = "\A3\Structures_F\Furniture\ShelvesWooden_blue_F.p3d";
    };
    class WoodenShelvesBlue_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Blue Wood Shelves";
		descriptionShort = "Blue Wood Shelves";
		model = "\A3\Structures_F\Furniture\ShelvesWooden_blue_F.p3d";
    };
    class WoodenShelvesBlue_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Blue Wood Shelves";
		descriptionShort = "Blue Wood Shelves";
		model = "\A3\Structures_F\Furniture\ShelvesWooden_blue_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 2000;		
		destrType = "DestructDefault";
	};	

    class WoodenShelves_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Wood Shelves";
		descriptionShort = "Wood Shelves";
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_F.p3d";
    };
    class WoodenShelves_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Wood Shelves";
		descriptionShort = "Wood Shelves";
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_F.p3d";
    };
    class WoodenShelves_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Wood Shelves";
		descriptionShort = "Wood Shelves";
		model = "\A3\Structures_F_EPB\Furniture\ShelvesWooden_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 2000;		
		destrType = "DestructDefault";
	};	
	/////////////////////
	// Small square cargo containers
	////////////////////
    class Cargo10_yellow_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Yellow)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_yellow_F.p3d";

    };
    class Cargo10_yellow_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Yellow)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_yellow_F.p3d";
    };
    class Cargo10_yellow_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, Yellow)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_yellow_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_white_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, White)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_white_F.p3d";

    };
    class Cargo10_white_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, White)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_white_F.p3d";
    };
    class Cargo10_white_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, White)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_white_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_red_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_red_F.p3d";

    };
    class Cargo10_red_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_red_F.p3d";
    };
    class Cargo10_red_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_red_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_brick_red_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Brick Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_brick_red_F.p3d";

    };
    class Cargo10_brick_red_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Brick Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_brick_red_F.p3d";
    };
    class Cargo10_brick_red_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Brick Red)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_brick_red_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_orange_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Orange)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_orange_F.p3d";

    };
    class Cargo10_orange_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Orange)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_orange_F.p3d";
    };
    class Cargo10_orange_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, Orange)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_orange_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_military_green_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Military Green)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_military_green_F.p3d";

    };
    class Cargo10_military_green_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Military Green)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_military_green_F.p3d";
    };
    class Cargo10_military_green_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, Military Green)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_military_green_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};	
    class Cargo10_cyan_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Cyan)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_cyan_F.p3d";

    };
    class Cargo10_cyan_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName = "Cargo Container (Short, Cyan)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_cyan_F.p3d";
    };
    class Cargo10_cyan_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName = "Cargo Container (Short, Cyan)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_cyan_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};					
   class Cargo10_blue_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		displayName =  "Cargo Container (Short, Blue)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_blue_F.p3d";

    };
    class Cargo10_blue_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		displayName =  "Cargo Container (Short, Blue)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_blue_F.p3d";
    };
    class Cargo10_blue_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		displayName =  "Cargo Container (Short, Blue)";
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_blue_F.p3d";
		vehicleClass = "Epoch_objects";
		maximumLoad = 7500;		
		destrType = "DestructDefault";
	};							
	/*	
    class ToolTrollyRed_SIM_EB4E : Constructions_modular_F
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Tool Cart (Red)";
    };
    class ToolTrollyRed_Ghost_EB4E : Const_Ghost_EPOCH
    {
        author = "Ghostrider";
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Tool Cart (Red)";
    };
    class ToolTrollyRed_EB4E : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.87;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.359;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model="\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_01_F.p3d";
        displayName = "Tool Cart (Red)";
		vehicleClass = "Epoch_objects";
		maximumLoad = 1600;		
		destrType = "DestructDefault";
	};	
	*/				
};
//  @ExtendedBase4Epoch
// class definitions for the mod
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class KitMetalRack_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Metal_rack_F.jpg";
		displayName = "Metal Rack (4 Shelves)";
		scope = 2;
		count = 1;
		mass = 30;
	};
	class KitMetalRackTall_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Metal_rack_Tall_F.jpg";
		displayName = "Metal Rack (5 shelves)";
		scope = 2;
		count = 1;
		mass = 40;
	};	
	class KitWoodenRack_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Rack_F.jpg";
		displayName = "Wooden Rack";
		scope = 2;
		count = 1;
		mass = 20;
	};
	class KitToolTrollyRed_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ToolTrolley_01_F.jpg";
		displayName = "Tool Trolly (Red)";
		scope = 2;
		count = 1;
		mass = 30;		
	};
	class KitToolTrollyBlue_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ToolTrolley_02_F.jpg";
		displayName = "Tool Trolly (Blue)";
		scope = 2;
		count = 1;
		mass = 30;		
	};	
	class KitIcebox_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Icebox_F.jpg";
		displayName = "Icebox";
		scope = 2;
		count = 1;
		mass = 40;		
	};

	class KitWoodenShelvesBlue_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ShelvesWooden_blue_F.jpg";
		displayName = "Shelves (Wooden, Blue)";
		scope = 2;
		count = 1;
		mass = 20;		
	};
	class KitWoodenShelves_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ShelvesWooden_F.jpg";
		displayName = "Shelves (Wooden)";
		scope = 2;
		count = 1;
		mass = 20;		
	};
	///////////////////
	// Small containers
	//////////////////
	class KitCargo10_yellow_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_yellow_F.jpg";
		displayName = "Cargo Container (Yellow)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	
	class KitCargo10_white_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_white_F.jpg";
		displayName = "Cargo Container (White)";
		scope = 2;
		count = 1;
		mass = 50;		
	};
	class KitCargo10_red_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_red_F.jpg";
		displayName = "Cargo Container (Red)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	
	class KitCargo10_orange_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_orange_F.jpg";
		displayName = "Cargo Container (Orange)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	
	class KitCargo10_military_green_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_military_green_F.jpg";
		displayName = "Cargo Container (Military Green)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	class KitCargo10_cyan_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture ="\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_cyan_F.jpg";
		displayName = "Cargo Container (Cyan)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	
	class KitCargo10_brick_red_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_brick_red_F.jpg";
		displayName = "Cargo Container (Brick Red)";
		scope = 2;
		count = 1;
		mass = 50;		
	};	
	class KitCargo10_blue_EB4E : CA_Magazine
	{
		author = "Ghostrider";
		model="\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_blue_F.jpg";
		displayName = "Cargo Container (Blue)";
		scope = 2;
		count = 1;
		mass = 50;		
	};		
};

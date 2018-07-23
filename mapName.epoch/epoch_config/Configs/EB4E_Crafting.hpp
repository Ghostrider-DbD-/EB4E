

/*
	CfgCrafting Recipies
	Extended Bases for Epoch
	by Ghostider-GRG
	7/21/18
*/

    class KitMetalRack_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"ItemCorrugatedLg",1}};
		usedIn[] = {"MetalRack_EB4E"};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Metal Rack (4 Shelves)";
		descriptionFull = "Storage Space";
    };
	class KitMetalRackTall_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"ItemCorrugatedLg",2}};
		usedIn[] = {"MetalRackTall_EB4E"};		
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Metal Rack (5 Shelves)";
		descriptionFull = "Storage Space";
    };
	class KitWoodenRack_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"ItemPlywoodPack",1}};
        usedIn[] = {"WoodenRack_EB4E"};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Wood Shelf";
		descriptionFull = "Storage Space";
    };
	class KitToolTrolleyRed_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanRed",1},{"ItemCorrugatedLg",1}};
        usedIn[] = {"ToolTrollyRed_EB4E"};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Tool Cart on Trollys (Red)";
		descriptionFull = "Storage Space";
    };	
	class KitToolTrolleyBlue_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanBlu",1},{"ItemCorrugatedLg",1}};
        usedIn[] = {"ToolTrollyBlue_EB4E"};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Tool Cart on Trollys (Blue)";
		descriptionFull = "Storage Space";
    };
	///
	class KitCargo10_blue_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanBlu",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_blue_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_blue_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_blue_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Blue)";
		descriptionFull = "Storage Space";
    };	
	class KitCargo10_cyan_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanTeal",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_cyan_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_cyan_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_cyan_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Cyan)";
		descriptionFull = "Storage Space";
    };		
	class KitCargo10_green_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanGrn",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_green_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_military_green_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_military_green_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Military Green)";
		descriptionFull = "Storage Space";
    };	
	class KitCargo10_orange_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanOra",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_orange_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_orange_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_orange_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Orange)";
		descriptionFull = "Storage Space";
    };	
	class KitCargo10_red_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanRed",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_red_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_red_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_red_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Red)";
		descriptionFull = "Storage Space";
    };		
	class KitCargo10_white_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanClear",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_white_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_white_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_white_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (White)";
		descriptionFull = "Storage Space";
    };		
	class KitCargo10_yellow_EB4E : Kit
    {
        recipe[] = {{"PartPlankPack",2},{"PaintCanYel",1},{"ItemCorrugatedLg",4}};
        usedIn[] = {"Cargo10_white_EB4E"};
		model = "\A3\Structures_F_Heli\Ind\Cargo\Cargo10_yellow_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Cargo10_yellow_F.jpg";
        nearby[] = {{"Workbench","","workbench",{1,{"WorkBench_EPOCH"}},3,1,0,1}};
        previewPosition[] = {0.797675,1,0.398882};
        previewScale = 0.07;
        previewVector = 0;
		descriptionShort = "Storage Container (Yellow)";
		descriptionFull = "Storage Space";
    };		
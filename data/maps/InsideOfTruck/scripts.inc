InsideOfTruck_MapScripts:: @ 823BEDA
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_MapScript1_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_MapScript1_OnResume
	.byte 0

InsideOfTruck_MapScript1_OnLoad: @ 823BEE5
	setmetatile 4, 1, 520, 0
	setmetatile 4, 2, 528, 0
	setmetatile 4, 3, 536, 0
	end

InsideOfTruck_MapScript1_OnResume: @ 823BF01
	setstepcallback 5
	end

@ -----------------------------------------------------

InsideOfTruck_SetPrologueVarsScript:: @ 823BF04
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq InsideOfTruck_SetPrologueVarsScript_Boy
	compare VAR_RESULT, FEMALE
	goto_if_eq InsideOfTruck_SetPrologueVarsScript_Girl
	end

InsideOfTruck_SetPrologueVarsScript_Boy: @ 823BF20
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_DAD
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_OLDALE_ROADBLOCK_AFTERMATCH
	setvar VAR_LITTLEROOT_HOUSES_STATE_2, 1
	setflag FLAG_SYS_B_DASH @ Give Fast Movement
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	releaseall
	end

InsideOfTruck_SetPrologueVarsScript_Girl: @ 823BF46
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_DAD
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_OLDALE_ROADBLOCK_AFTERMATCH
	setvar VAR_LITTLEROOT_HOUSES_STATE, 1
	setflag FLAG_SYS_B_DASH @ Give Fast Movement
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBoxText:: @ 823BF6C
	msgbox InsideOfTruck_Text_MovingBoxText, MSGBOX_DESCRIBE
	end
InsideOfTruck_Text_MovingBoxText: @ 823BF75
	.string "The box is printed with a Pokémon logo.\p"
	.string "It's a Pokémon brand moving and\n"
	.string "delivery service.$"

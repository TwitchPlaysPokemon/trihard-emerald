RustboroCity_CuttersHouse_MapScripts:: @ 8215BD3
	.byte 0

RustboroCity_CuttersHouse_EventScript_215BD4:: @ 8215BD4
	lock
	faceplayer
	markasdialog
	goto_if_set FLAG_RECEIVED_TM51, RustboroCity_CuttersHouse_EventScript_215C00
	msgbox RustboroCity_CuttersHouse_Text_215C13, MSGBOX_DEFAULT
	giveitem_std ITEM_TM51
	setflag FLAG_RECEIVED_TM51
	msgbox RustboroCity_CuttersHouse_Text_215D33, MSGBOX_DEFAULT
	release
	end
RustboroCity_CuttersHouse_Text_215C13: @ 8215C13
	.string "That sneering expression…\n"
	.string "That lanky way you move…\l"
	.string "And your hard-worked Pokémon…\p"
	.string "You're obviously a skilled trainer!\p"
	.string "No, wait, don't say a word.\n"
	.string "I can tell just by looking at you.\p"
	.string "I'm sure that you can put this\n"
	.string "Technical Machine to use.$"
RustboroCity_CuttersHouse_EventScript_215C00:: @ 8215C00
	msgbox RustboroCity_CuttersHouse_Text_215D33, MSGBOX_DEFAULT
	release
	end
RustboroCity_CuttersHouse_Text_215D33: @ 8215D33
	.string "That Technical Machine, or TM for\n"
	.string "short, is Cut.\p"
	.string "This TM move is one that tunes\n"
	.string "a Pokémon's natural capabilities for\l"
	.string "use in battle!\p"
	.string "Any Pokémon that can cut down thin\n"
	.string "trees and grass in your way can use\l"
	.string "this move in battle!\p"
	.string "It's like learning how to use your\n"
	.string "own weight against someone in combat!$"


RustboroCity_CuttersHouse_EventScript_215C0A:: @ 8215C0A
	msgbox RustboroCity_CuttersHouse_Text_215E39, MSGBOX_NPC
	end
RustboroCity_CuttersHouse_Text_215E39: @ 8215E39
	.string "When they were expanding the city of\n"
	.string "Rustboro, my dad helped out.\p"
	.string "He had his Pokémon clear the land\n"
	.string "of trees to make room to build.$"


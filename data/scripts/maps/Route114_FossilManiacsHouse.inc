Route114_FossilManiacsHouse_MapScripts:: @ 822AD30
	map_script 3, Route114_FossilManiacsHouse_MapScript1_22AD36
	.byte 0

Route114_FossilManiacsHouse_MapScript1_22AD36: @ 822AD36
	setflag FLAG_0x8B7
	end

Route114_FossilManiacsHouse_EventScript_22AD3A:: @ 822AD3A
	lock
	faceplayer
	checkflag FLAG_0x105
	goto_eq Route114_FossilManiacsHouse_EventScript_22AD69
	msgbox Route114_FossilManiacsHouse_Text_22AD85, 4
	giveitem_std ITEM_TM28
	compare_var_to_value VAR_RESULT, 0
	goto_eq Route114_FossilManiacsHouse_EventScript_272054
	setflag FLAG_0x105
	release
	end

Route114_FossilManiacsHouse_EventScript_22AD69:: @ 822AD69
	msgbox Route114_FossilManiacsHouse_Text_22AE48, 4
	release
	end

Route114_FossilManiacsHouse_EventScript_22AD73:: @ 822AD73
	msgbox Route114_FossilManiacsHouse_Text_22AE92, 3
	end

Route114_FossilManiacsHouse_EventScript_22AD7C:: @ 822AD7C
	msgbox Route114_FossilManiacsHouse_Text_22AEC2, 3
	end

Route114_FossilManiacsHouse_Text_22AD85: @ 822AD85
	.string "My big brother’s the FOSSIL MANIAC…\n"
	.string "He’s a nice guy who loves FOSSILS…\p"
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…\p"
	.string "You can have this, so you can DIG\n"
	.string "holes just like my big brother…$"

Route114_FossilManiacsHouse_Text_22AE48: @ 822AE48
	.string "If you make a POKéMON DIG inside a\n"
	.string "cave, you’re returned to the entrance…$"

Route114_FossilManiacsHouse_Text_22AE92: @ 822AE92
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

Route114_FossilManiacsHouse_Text_22AEC2: @ 822AEC2
	.string "THE COMPOSITION OF STRATA…\n"
	.string "HOW RAIN SHAPES THE LAND…\l"
	.string "STONES, SOIL, AND ROCK…\p"
	.string "It’s crammed with books.$"


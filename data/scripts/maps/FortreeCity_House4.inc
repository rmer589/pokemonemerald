FortreeCity_House4_MapScripts:: @ 8217C80
	.byte 0

FortreeCity_House4_EventScript_217C81:: @ 8217C81
	msgbox FortreeCity_House4_Text_217D33, 2
	end

FortreeCity_House4_EventScript_217C8A:: @ 8217C8A
	lockall
	checkflag FLAG_0x0DF
	goto_eq FortreeCity_House4_EventScript_217D06
	checkflag FLAG_0x0E0
	goto_eq FortreeCity_House4_EventScript_217CD8
	checkflag FLAG_0x0DE
	goto_eq FortreeCity_House4_EventScript_217CC4
	msgbox FortreeCity_House4_Text_217DB9, 4
	closemessage
	setflag FLAG_0x0DE
	clearflag FLAG_0x3A6
	applymovement 3, FortreeCity_House4_Movement_217D1A
	waitmovement 0
	removeobject 3
	releaseall
	end

FortreeCity_House4_EventScript_217CC4:: @ 8217CC4
	applymovement VAR_LAST_TALKED, FortreeCity_House4_Movement_27259E
	waitmovement 0
	msgbox FortreeCity_House4_Text_217DD2, 4
	releaseall
	end

FortreeCity_House4_EventScript_217CD8:: @ 8217CD8
	applymovement VAR_LAST_TALKED, FortreeCity_House4_Movement_27259E
	waitmovement 0
	msgbox FortreeCity_House4_Text_217E05, 4
	giveitem_std ITEM_MENTAL_HERB
	compare_var_to_value VAR_RESULT, 0
	goto_eq FortreeCity_House4_EventScript_272054
	setflag FLAG_0x0DF
	releaseall
	end

FortreeCity_House4_EventScript_217D06:: @ 8217D06
	applymovement VAR_LAST_TALKED, FortreeCity_House4_Movement_27259E
	waitmovement 0
	msgbox FortreeCity_House4_Text_217EA8, 4
	releaseall
	end

FortreeCity_House4_Movement_217D1A: @ 8217D1A
	step_15
	step_15
	step_18
	step_25
	step_13
	step_end

FortreeCity_House4_EventScript_217D20:: @ 8217D20
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, 0
	msgbox FortreeCity_House4_Text_217EE0, 4
	waitmoncry
	release
	end

FortreeCity_House4_Text_217D33: @ 8217D33
	.string "By being together with POKéMON,\n"
	.string "people make more and more friends.\p"
	.string "And that brings the world closer\n"
	.string "together. I think it’s wonderful!$"

FortreeCity_House4_Text_217DB9: @ 8217DB9
	.string "There!\n"
	.string "Go, BIRD POKéMON!$"

FortreeCity_House4_Text_217DD2: @ 8217DD2
	.string "Heheh, I asked my WINGULL to run\n"
	.string "an errand for me.$"

FortreeCity_House4_Text_217E05: @ 8217E05
	.string "Good!\n"
	.string "Welcome back, WINGULL!\p"
	.string "Huh? What is this?\n"
	.string "What is it holding?\p"
	.string "A MENTAL HERB?\n"
	.string "It must have picked it up somewhere.\p"
	.string "But I’m not a TRAINER, so you can\n"
	.string "have it.$"

FortreeCity_House4_Text_217EA8: @ 8217EA8
	.string "Thanks to my WINGULL, I have friends\n"
	.string "who live far away.$"

FortreeCity_House4_Text_217EE0: @ 8217EE0
	.string "WINGULL: Pihyoh!$"


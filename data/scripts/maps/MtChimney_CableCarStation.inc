MtChimney_CableCarStation_MapScripts:: @ 822ABFA
	map_script 3, MtChimney_CableCarStation_MapScript1_22AC05
	map_script 2, MtChimney_CableCarStation_MapScript2_22AC1D
	.byte 0

MtChimney_CableCarStation_MapScript1_22AC05: @ 822AC05
	compare_var_to_value VAR_0x40A3, 1
	call_if 1, MtChimney_CableCarStation_EventScript_22AC11
	end

MtChimney_CableCarStation_EventScript_22AC11:: @ 822AC11
	setobjectxyperm 1, 5, 4
	setobjectmovementtype 1, 10
	return

MtChimney_CableCarStation_MapScript2_22AC1D: @ 822AC1D
	map_script_2 VAR_0x40A3, 1, MtChimney_CableCarStation_EventScript_22AC27
	.2byte 0

MtChimney_CableCarStation_EventScript_22AC27:: @ 822AC27
	lockall
	applymovement 255, MtChimney_CableCarStation_Movement_22ACB4
	applymovement 1, MtChimney_CableCarStation_Movement_22ACAA
	waitmovement 0
	setvar VAR_0x40A3, 0
	setobjectxyperm 1, 6, 7
	setobjectmovementtype 1, 8
	releaseall
	end

MtChimney_CableCarStation_EventScript_22AC4B:: @ 822AC4B
	lock
	faceplayer
	msgbox MtChimney_CableCarStation_Text_22ACB9, 5
	compare_var_to_value VAR_RESULT, 1
	goto_eq MtChimney_CableCarStation_EventScript_22AC6C
	compare_var_to_value VAR_RESULT, 0
	goto_eq MtChimney_CableCarStation_EventScript_22AC9B
	end

MtChimney_CableCarStation_EventScript_22AC6C:: @ 822AC6C
	msgbox MtChimney_CableCarStation_Text_22ACF8, 4
	closemessage
	applymovement 1, MtChimney_CableCarStation_Movement_22ACA5
	applymovement 255, MtChimney_CableCarStation_Movement_22ACAF
	waitmovement 0
	setvar VAR_0x8004, 1
	setvar VAR_0x40A3, 2
	incrementgamestat 48
	special sub_8138B8C
	special sub_814FC9C
	waitstate
	release
	end

MtChimney_CableCarStation_EventScript_22AC9B:: @ 822AC9B
	msgbox MtChimney_CableCarStation_Text_22AD0E, 4
	release
	end

MtChimney_CableCarStation_Movement_22ACA5: @ 822ACA5
	step_up
	step_up
	step_left
	step_28
	step_end

MtChimney_CableCarStation_Movement_22ACAA: @ 822ACAA
	step_14
	step_right
	step_down
	step_down
	step_end

MtChimney_CableCarStation_Movement_22ACAF: @ 822ACAF
	step_up
	step_up
	step_up
	step_14
	step_end

MtChimney_CableCarStation_Movement_22ACB4: @ 822ACB4
	step_down
	step_down
	step_down
	step_14
	step_end

MtChimney_CableCarStation_Text_22ACB9: @ 822ACB9
	.string "The CABLE CAR is ready to go down.\n"
	.string "Would you like to be on it?$"

MtChimney_CableCarStation_Text_22ACF8: @ 822ACF8
	.string "Please step this way.$"

MtChimney_CableCarStation_Text_22AD0E: @ 822AD0E
	.string "Please ride with us another time.$"


MarineCave_End_MapScripts:: @ 823AFDF
	map_script 5, MarineCave_End_MapScript1_23AFEA
	map_script 3, MarineCave_End_MapScript1_23B008
	.byte 0

MarineCave_End_MapScript1_23AFEA: @ 823AFEA
	checkflag FLAG_SYS_CTRL_OBJ_DELETE
	call_if 1, MarineCave_End_EventScript_23AFF4
	end

MarineCave_End_EventScript_23AFF4:: @ 823AFF4
	specialvar VAR_RESULT, sub_8138B80
	compare_var_to_value VAR_RESULT, 7
	goto_if 5, MarineCave_End_EventScript_27374E
	removeobject 1
	return

MarineCave_End_MapScript1_23B008: @ 823B008
	checkflag FLAG_0x1BE
	call_if 0, MarineCave_End_EventScript_23B012
	end

MarineCave_End_EventScript_23B012:: @ 823B012
	clearflag FLAG_0x30E
	setvar VAR_0x4001, 1
	return

MarineCave_End_EventScript_23B01B:: @ 823B01B
	lockall
	applymovement 255, MarineCave_End_Movement_2725B2
	waitmovement 0
	applymovement 1, MarineCave_End_Movement_23B09D
	waitmovement 0
	waitse
	playmoncry SPECIES_KYOGRE, 2
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 1
	setwildbattle SPECIES_KYOGRE, 70, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special sub_80B0934
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x4001, 0
	specialvar VAR_RESULT, sub_8138B80
	compare_var_to_value VAR_RESULT, 1
	goto_eq MarineCave_End_EventScript_23B084
	compare_var_to_value VAR_RESULT, 4
	goto_eq MarineCave_End_EventScript_23B092
	compare_var_to_value VAR_RESULT, 5
	goto_eq MarineCave_End_EventScript_23B092
	setvar VAR_0x4039, 1
	setflag FLAG_0x1BE
	releaseall
	end

MarineCave_End_EventScript_23B084:: @ 823B084
	setvar VAR_0x4039, 1
	setflag FLAG_0x1BE
	goto MarineCave_End_EventScript_27376D
	end

MarineCave_End_EventScript_23B092:: @ 823B092
	setvar VAR_0x8004, 404
	goto MarineCave_End_EventScript_273776
	end

MarineCave_End_Movement_23B09D: @ 823B09D
	step_5e
	step_62
	step_14
	step_14
	step_63
	step_14
	step_14
	step_63
	step_end


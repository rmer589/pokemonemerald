MossdeepCity_House4_MapObjects: @ 8532CAC
	object_event 1, MAP_OBJ_GFX_WOMAN_3, 0, 0, 3, 4, 3, 9, 0, 0, 0, 0, MossdeepCity_House4_EventScript_222DD8, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_LITTLE_BOY_1, 0, 0, 6, 6, 3, 5, 1, 0, 0, 0, MossdeepCity_House4_EventScript_222DF7, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_SKITTY, 0, 0, 2, 4, 3, 1, 17, 0, 0, 0, MossdeepCity_House4_EventScript_222E1E, 0, 0, 0

MossdeepCity_House4_MapWarps: @ 8532CF4
	warp_def 4, 7, 0, 7, MOSSDEEP_CITY
	warp_def 3, 7, 0, 7, MOSSDEEP_CITY

MossdeepCity_House4_MapEvents:: @ 8532D04
	map_events MossdeepCity_House4_MapObjects, MossdeepCity_House4_MapWarps, 0x0, 0x0


SeafloorCavern_Room5_MapObjects: @ 85359F8
	object_event 1, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 3, 11, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2908BA, 17, 0, 0
	object_event 2, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 4, 11, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2908BA, 18, 0, 0
	object_event 3, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 11, 7, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2908BA, 19, 0, 0
	object_event 4, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 0, 3, 13, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2907A6, 21, 0, 0
	object_event 5, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 0, 13, 8, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2907A6, 22, 0, 0
	object_event 6, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 12, 8, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room5_EventScript_2908BA, 20, 0, 0

SeafloorCavern_Room5_MapWarps: @ 8535A88
	warp_def 4, 1, 3, 1, SEAFLOOR_CAVERN_ROOM_1
	warp_def 15, 12, 3, 1, SEAFLOOR_CAVERN_ROOM_4
	warp_def 7, 17, 3, 2, SEAFLOOR_CAVERN_ROOM_4

SeafloorCavern_Room5_MapEvents:: @ 8535AA0
	map_events SeafloorCavern_Room5_MapObjects, SeafloorCavern_Room5_MapWarps, 0x0, 0x0


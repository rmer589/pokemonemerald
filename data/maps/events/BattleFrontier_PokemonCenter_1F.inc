BattleFrontier_PokemonCenter_1F_MapObjects: @ 853D55C
	object_event 1, MAP_OBJ_GFX_NURSE, 0, 0, 7, 2, 3, 8, 0, 0, 0, 0, BattleFrontier_PokemonCenter_1F_EventScript_267908, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_SCHOOL_KID_M, 0, 0, 4, 5, 3, 14, 1, 0, 0, 0, BattleFrontier_PokemonCenter_1F_EventScript_267916, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_4, 0, 0, 11, 4, 3, 8, 1, 0, 0, 0, BattleFrontier_PokemonCenter_1F_EventScript_26791F, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_PICNICKER, 0, 0, 2, 3, 3, 9, 1, 0, 0, 0, BattleFrontier_PokemonCenter_1F_EventScript_267928, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_SKITTY, 0, 0, 1, 3, 3, 10, 1, 0, 0, 0, BattleFrontier_PokemonCenter_1F_EventScript_267931, 0, 0, 0

BattleFrontier_PokemonCenter_1F_MapWarps: @ 853D5D4
	warp_def 7, 8, 3, 12, BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 6, 8, 3, 12, BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 1, 6, 4, 0, BATTLE_FRONTIER_POKEMON_CENTER_2F

BattleFrontier_PokemonCenter_1F_MapEvents:: @ 853D5EC
	map_events BattleFrontier_PokemonCenter_1F_MapObjects, BattleFrontier_PokemonCenter_1F_MapWarps, 0x0, 0x0


//
// Created by scott on 9/7/2017.
//

#ifndef GUARD_MAP_OBJ_8097404_H
#define GUARD_MAP_OBJ_8097404_H

// Exported type declarations

// Exported RAM declarations
extern void *gUnknown_020375B8;

// Exported ROM declarations
void sub_8097AC8(struct Sprite *);
void npc_sync_anim_pause_bits(struct MapObject *);
void oamt_npc_ministep_reset(struct Sprite *, u8, u8);
u8 sub_8097F78(struct MapObject *);

#endif //GUARD_MAP_OBJ_8097404_H

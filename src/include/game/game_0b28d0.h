#ifndef IN_GAME_GAME_0B28D0_H
#define IN_GAME_GAME_0B28D0_H
#include <ultra64.h>
#include "types.h"

u32 func0f0b28d0(void);
u32 func0f0b2904(void);
u32 func0f0b2b64(void);
u32 func0f0b30ac(void);
u32 func0f0b30cc(void);
u32 func0f0b3280(void);
u32 func0f0b32a0(void);
u32 func0f0b32e4(void);
u32 func0f0b3338(void);
u32 func0f0b3350(void);
u32 func0f0b33f8(void);
u32 func0f0b3468(void);
u32 func0f0b34d8(void);
u32 func0f0b3548(void);
u32 func0f0b35b8(void);
u32 func0f0b3988(void);
u32 func0f0b39c0(void);
u32 func0f0b4958(void);
u32 func0f0b4984(void);
u32 func0f0b4998(void);
u32 func0f0b49b8(void);
u32 func0f0b4a24(void);
u32 func0f0b4c3c(void);
u32 func0f0b4d04(void);
u32 func0f0b4d68(void);
u32 func0f0b4dec(void);
u32 func0f0b4e68(void);
u32 func0f0b4eb8(void);
u32 func0f0b4f78(void);
u32 func0f0b4f98(void);
u32 func0f0b4fa8(void);
u32 func0f0b4fb8(void);
u32 func0f0b4fc8(void);
u32 func0f0b4fd8(void);
u32 func0f0b4fe8(void);
u32 func0f0b4ff8(void);
u32 func0f0b5008(void);
u32 func0f0b5018(void);
u32 func0f0b5050(void);
u32 func0f0b53a4(void);
u32 func0f0b56f8(void);
u32 func0f0b5708(void);
u32 func0f0b5718(void);
u32 func0f0b5758(void);
u32 func0f0b5778(void);
u32 func0f0b5798(void);
u32 func0f0b57a8(void);
u32 func0f0b57b8(void);
f32 func0f0b57d8(void);
f32 func0f0b57e8(void);
f32 func0f0b57f8(void);
f32 func0f0b5808(void);
u32 func0f0b5828(void);
u32 func0f0b5838(void);
u32 func0f0b5b9c(void);
u32 func0f0b5d38(void);
u32 func0f0b6260(void);
u32 func0f0b63b0(void);
u32 func0f0b6470(void);
u32 func0f0b6534(void);
u32 func0f0b656c(void);
u32 func0f0b65a8(void);
u32 func0f0b65f8(void);
u32 func0f0b6764(void);
f32 func0f0b69d0(f32 arg0, s32 arg1, s32 arg2, struct prop *prop, s16 *arg4, s16 arg5);
f32 func0f0b72a8(f32 arg0, s32 arg1, s32 arg2, struct prop *prop);
u32 func0f0b72dc(void);
u32 func0f0b77cc(void);
u32 func0f0b7c60(void);
u32 func0f0b802c(void);
u32 func0f0b85a0(void);
u32 func0f0b85f8(void);
u32 func0f0b872c(void);
u32 func0f0b8ba0(void);
u32 func0f0b9538(void);
void setTickMode(s32 tickmode);
void func0f0b9650(void);
void func0f0b9674(void);
u32 func0f0b96e8(void);
void func0f0b9a20(void);
void func0f0b9afc(void);
void warpBondToPad(s16 pad_id);
void func0f0b9bac(s32 arg0, s32 arg1, s32 arg2);
void func0f0b9c1c(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5);
u32 func0f0b9cbc(void);
void func0f0ba010(void);
void cameraDoAnimation(s16 anim_id);
u32 func0f0ba190(u32 arg0);
u32 func0f0ba29c(void);
u32 func0f0ba838(void);
u32 func0f0ba844(void);
u32 func0f0ba87c(void);
u32 func0f0ba8b0(void);
u32 func0f0ba948(void);
u32 func0f0baac0(void);
u32 func0f0bace0(void);
u32 func0f0bad6c(void);
u32 func0f0baf0c(void);
u32 func0f0baf38(void);
u32 func0f0baf84(void);
u32 func0f0bb04c(void);
u32 func0f0bb2e8(void);
void currentPlayerSetFadeColour(s32 r, s32 g, s32 b, f32 a);
void currentPlayerAdjustFade(f32 maxfadetime, s32 r, s32 g, s32 b, f32 frac);
void currentPlayerSetFadeFrac(f32 maxfadetime, f32 frac);
bool currentPlayerIsFadeComplete(void);
u32 func0f0bb42c(void);
void func0f0bb57c(f32 arg0, f32 arg1);
u32 func0f0bb5ec(void);
u32 func0f0bb69c(void);
u32 func0f0bb814(void);
u32 func0f0bbf14(void);
u32 func0f0bbf78(void);
void currentPlayerSurroundWithExplosions(u32 arg0);
u32 func0f0bc120(void);
u32 func0f0bc3f0(void);
void optionsSetHiRes(bool enable);
u32 func0f0bc44c(void);
u32 func0f0bc478(void);
u32 func0f0bc4c0(void);
u32 func0f0bc554(void);
u32 func0f0bc7ac(void);
u32 func0f0bcaa0(void);
u32 func0f0bce24(void);
u32 func0f0bd358(void);
u32 func0f0bd3c4(void);
void currentPlayerAutoWalk(s16 aimpad, u8 walkspeed, u8 turnspeed, u8 lookup, u8 dist);
void func0f0bd4a8(u32 arg0);
u32 func0f0bd4e4(void);
u32 func0f0bd764(void);
u32 func0f0bd904(void);
void currentPlayerSetGlobalDrawWorldOffset(s32 arg0);
void currentPlayerSetGlobalDrawCameraOffset(void);
u32 func0f0bfc7c(void);
u32 func0f0bffcc(void);
u32 func0f0c00cc(void);
u32 func0f0c0190(void);
u32 func0f0c07c8(void);
void func0f0c13a8(s32 arg0);
void func0f0c1404(s32 shooter, s32 arg1);
u32 func0f0c160c(void);
u32 func0f0c16f4(void);
bool currentPlayerGet00fc(void);
void currentPlayerSetCameraMode(s32 mode);
u32 func0f0c1840(void);
u32 func0f0c1ba4(void);
u32 func0f0c1bd8(void);
void currentPlayerSetCamPropertiesWithRoom(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerSetCamPropertiesWithoutRoom(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerSetCamProperties(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerClearMemCamRoom(void);
void func0f0c1d20(void);
u32 func0f0c1e54(void);
u32 func0f0c1f08(void);
u32 func0f0c1ff4(void);
u32 func0f0c20b8(void);
u32 func0f0c2194(void);
u32 func0f0c21a4(void);
u32 func0f0c2210(void);
u32 func0f0c227c(void);
u32 func0f0c228c(void);
u32 func0f0c2364(void);
u32 func0f0c2a58(void);
u32 func0f0c32a0(void);
u32 func0f0c32fc(void);
u32 func0f0c3320(void);
u32 func0f0c33f0(void);

#endif

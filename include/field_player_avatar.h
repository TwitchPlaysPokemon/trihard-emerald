#ifndef GUARD_FIELD_PLAYER_AVATAR_H
#define GUARD_FIELD_PLAYER_AVATAR_H

void player_step(u8 a, u16 b, u16 c);
void ClearPlayerAvatarInfo(void);
void SetPlayerAvatarExtraStateTransition(u16, u8);
u8 GetPlayerAvatarGenderByGraphicsId(u16);
bool8 TestPlayerAvatarFlags(u8);
u8 GetPlayerAvatarObjectId(void);
void PlayerGetDestCoords(s16 *, s16 *);
u8 GetPlayerFacingDirection(void);
u8 GetPlayerMovementDirection(void);
u8 PlayerGetCopyableMovement(void);
void PlayerGoSpeed1(u8);
void PlayerGoSpeed2(u8);
void PlayerRideWaterCurrent(u8);
void PlayerGoSpeed4(u8);
void PlayerOnBikeCollide(u8);
void PlayerFaceDirection(u8 a);
void PlayerTurnInPlace(u8 a);
void PlayerJumpLedge(u8 a);
void PlayerIdleWheelie(u8 a);
void PlayerStartWheelie(u8 a);
void PlayerEndWheelie(u8 a);
void PlayerStandingHoppingWheelie(u8 a);
void PlayerMovingHoppingWheelie(u8 a);
void PlayerLedgeHoppingWheelie(u8 a);
void PlayerAcroTurnJump(u8 a);
void PlayerSetAnimId(u8 a, u8 b);
bool8 IsPlayerCollidingWithFarawayIslandMew(u8 direction);
void PlayerOnBikeCollideWithFarawayIslandMew(u8 direction);
u8 CheckForEventObjectCollision(struct EventObject *a, s16 b, s16 c, u8 d, u8 e);
u8 PlayerGetZCoord(void);
void SetPlayerAvatarTransitionFlags(u16 a);
void sub_808BCE8(void);
void InitPlayerAvatar(s16 a, s16 b, u8 c, u8 d);
void sub_808B864(void);
void sub_808BCF4(void);
void sub_808D074(u8);
void GetXYCoordsOneStepInFrontOfPlayer(s16 *xPtr, s16 *yPtr);
u16 GetRivalAvatarGraphicsIdByStateIdAndGender(u8, u8);
u16 GetPlayerAvatarGraphicsIdByStateIdAndGender(u8 state, u8 gender);
void sub_808C114(void);
u16 GetPlayerAvatarGraphicsIdByCurrentState(void);
void SetPlayerAvatarStateMask(u8 a);
u16 GetPlayerAvatarGraphicsIdByStateId(u8 a);
u8 GetJumpSpecialMovementAction(u32);
bool8 PartyHasMonWithSurf(void);
bool8 IsPlayerFacingSurfableFishableWater(void);
bool8 IsPlayerSurfingNorth(void);
void sub_808C228(u8 direction);
u8 sub_808BCD0(void);
void sub_808B578(void);
u16 GetFRLGAvatarGraphicsIdByGender(u8);
u16 GetRSAvatarGraphicsIdByGender(u8);
void sub_808B980(u8 direction);
void sub_808B9BC(u8 direction);
void sub_808B9A4(u8 direction);
void sub_808C1B4(u8 direction);
void sub_808B9D4(u8 direction);
void sub_808D194(void);
void sub_808D1C8(void);
bool32 sub_808D1B4(void);
bool32 sub_808D1E8(void);
void sub_808C0A8(u8 a);
u8 player_get_pos_including_state_based_drift(s16 *x, s16 *y);

#endif // GUARD_FIELD_PLAYER_AVATAR_H

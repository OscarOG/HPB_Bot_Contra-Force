//////////////////////////////////////////////
// HPB_bot - botman's High Ping Bastard bot //
//                                          //
// (http://planethalflife.com/botman/)      //
//                                          //
// bot_client.h                             //
//////////////////////////////////////////////

void BotClient_TFC_VGUI(void *p, int bot_index);
void BotClient_CS_VGUI(void *p, int bot_index);
void BotClient_CF_VGUI(void *p, int bot_index);
void BotClient_Gearbox_VGUI(void *p, int bot_index);
void BotClient_FLF_VGUI(void *p, int bot_index);


void BotClient_CS_ShowMenu(void *p, int bot_index);
void BotClient_CF_ShowMenu(void *p, int bot_index);
void BotClient_SC_ShowMenu(void *p, int bot_index);
void BotClient_BB_ShowMenu(void *p, int bot_index);

void BotClient_Generic_WeaponList(void *p, int bot_index);
void BotClient_TFC_WeaponList(void *p, int bot_index);
void BotClient_CS_WeaponList(void *p, int bot_index);
void BotClient_Gearbox_WeaponList(void *p, int bot_index);
void BotClient_FLF_WeaponList(void *p, int bot_index);
void BotClient_DMC_WeaponList(void *p, int bot_index);
void BotClient_CF_WeaponList(void *p, int bot_index);
void BotClient_SC_WeaponList(void *p, int bot_index);

void BotClient_Generic_CurrentWeapon(void *p, int bot_index);
void BotClient_TFC_CurrentWeapon(void *p, int bot_index);
void BotClient_CS_CurrentWeapon(void *p, int bot_index);
void BotClient_Gearbox_CurrentWeapon(void *p, int bot_index);
void BotClient_FLF_CurrentWeapon(void *p, int bot_index);
void BotClient_DMC_CurrentWeapon(void *p, int bot_index);
void BotClient_CF_CurrentWeapon(void *p, int bot_index);
void BotClient_SC_CurrentWeapon(void *p, int bot_index);

void BotClient_Generic_AmmoX(void *p, int bot_index);
void BotClient_TFC_AmmoX(void *p, int bot_index);
void BotClient_CS_AmmoX(void *p, int bot_index);
void BotClient_Gearbox_AmmoX(void *p, int bot_index);
void BotClient_FLF_AmmoX(void *p, int bot_index);
void BotClient_DMC_AmmoX(void *p, int bot_index);
void BotClient_CF_AmmoX(void *p, int bot_index);
void BotClient_SC_AmmoX(void *p, int bot_index);

void BotClient_Generic_AmmoPickup(void *p, int bot_index);
void BotClient_TFC_AmmoPickup(void *p, int bot_index);
void BotClient_CS_AmmoPickup(void *p, int bot_index);
void BotClient_Gearbox_AmmoPickup(void *p, int bot_index);
void BotClient_FLF_AmmoPickup(void *p, int bot_index);
void BotClient_DMC_AmmoPickup(void *p, int bot_index);
void BotClient_CF_AmmoPickup(void *p, int bot_index);
void BotClient_SC_AmmoPickup(void *p, int bot_index);

void BotClient_TFC_SecAmmoVal(void *p, int bot_index);

void BotClient_Generic_WeaponPickup(void *p, int bot_index);
void BotClient_TFC_WeaponPickup(void *p, int bot_index);
void BotClient_CS_WeaponPickup(void *p, int bot_index);
void BotClient_Gearbox_WeaponPickup(void *p, int bot_index);
void BotClient_FLF_WeaponPickup(void *p, int bot_index);
void BotClient_DMC_WeaponPickup(void *p, int bot_index);
void BotClient_CF_WeaponPickup(void *p, int bot_index);
void BotClient_SC_WeaponPickup(void *p, int bot_index);

void BotClient_Generic_ItemPickup(void *p, int bot_index);
void BotClient_TFC_ItemPickup(void *p, int bot_index);
void BotClient_CS_ItemPickup(void *p, int bot_index);
void BotClient_Gearbox_ItemPickup(void *p, int bot_index);
void BotClient_FLF_ItemPickup(void *p, int bot_index);
void BotClient_DMC_ItemPickup(void *p, int bot_index);
void BotClient_CF_ItemPickup(void *p, int bot_index);
void BotClient_SC_ItemPickup(void *p, int bot_index);

void BotClient_Generic_Health(void *p, int bot_index);
void BotClient_TFC_Health(void *p, int bot_index);
void BotClient_CS_Health(void *p, int bot_index);
void BotClient_Gearbox_Health(void *p, int bot_index);
void BotClient_FLF_Health(void *p, int bot_index);
void BotClient_DMC_Health(void *p, int bot_index);
void BotClient_CF_Health(void *p, int bot_index);
void BotClient_SC_Health(void *p, int bot_index);

void BotClient_Generic_Battery(void *p, int bot_index);
void BotClient_TFC_Battery(void *p, int bot_index);
void BotClient_CS_Battery(void *p, int bot_index);
void BotClient_Gearbox_Battery(void *p, int bot_index);
void BotClient_FLF_Battery(void *p, int bot_index);
void BotClient_DMC_Battery(void *p, int bot_index);
void BotClient_CF_Battery(void *p, int bot_index);
void BotClient_SC_Battery(void *p, int bot_index);

void BotClient_Generic_Damage(void *p, int bot_index);
void BotClient_TFC_Damage(void *p, int bot_index);
void BotClient_CS_Damage(void *p, int bot_index);
void BotClient_Gearbox_Damage(void *p, int bot_index);
void BotClient_FLF_Damage(void *p, int bot_index);
void BotClient_DMC_Damage(void *p, int bot_index);
void BotClient_CF_Damage(void *p, int bot_index);
void BotClient_SC_Damage(void *p, int bot_index);

void BotClient_CS_Money(void *p, int bot_index);
void BotClient_CF_Money(void *p, int bot_index);

void BotClient_CF_BarterArea(void *p, int bot_index);

void BotClient_Generic_DeathMsg(void *p, int bot_index);
void BotClient_TFC_DeathMsg(void *p, int bot_index);
void BotClient_CS_DeathMsg(void *p, int bot_index);
void BotClient_Gearbox_DeathMsg(void *p, int bot_index);
void BotClient_FLF_DeathMsg(void *p, int bot_index);
void BotClient_DMC_DeathMsg(void *p, int bot_index);
void BotClient_CF_DeathMsg(void *p, int bot_index);
void BotClient_SC_DeathMsg(void *p, int bot_index);

void BotClient_TFC_TextMsg(void *p, int bot_index);

void BotClient_FLF_TextMsg(void *p, int bot_index);
void BotClient_FLF_WarmUp(void *p, int bot_index);
void BotClient_FLF_WarmUpAll(void *p, int bot_index);
void BotClient_FLF_WinMessage(void *p, int bot_index);
void BotClient_FLF_HideWeapon(void *p, int bot_index);

void BotClient_Generic_ScreenFade(void *p, int bot_index);
void BotClient_TFC_ScreenFade(void *p, int bot_index);
void BotClient_CS_ScreenFade(void *p, int bot_index);
void BotClient_Gearbox_ScreenFade(void *p, int bot_index);
void BotClient_FLF_ScreenFade(void *p, int bot_index);
void BotClient_CF_ScreenFade(void *p, int bot_index);
void BotClient_SC_ScreenFade(void *p, int bot_index);

void BotClient_HolyWars_Halo(void *p, int bot_index);
void BotClient_HolyWars_GameMode(void *p, int bot_index);
void BotClient_HolyWars_HudText(void *p, int bot_index);

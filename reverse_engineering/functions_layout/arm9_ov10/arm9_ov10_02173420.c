
undefined4 FUN_02173420(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_34 [36];
  
  FUN_02052c44(auStack_34,0x21,s__03d_03d_021a3850,1,2);
  uVar1 = FUN_02004b04(auStack_34);
  iVar2 = FUN_02173e78(param_1,s_sdkver_021a385c,auStack_34,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2);
  iVar2 = FUN_02173e78(param_1,s_userid_021a3864,param_2,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0xe);
  iVar2 = FUN_02173e78(param_1,s_passwd_021a386c,param_2 + 0xe,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x41);
  iVar2 = FUN_02173e78(param_1,s_bssid_021a3874,param_2 + 0x41,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x6f);
  iVar2 = FUN_02173e78(param_1,s_apinfo_021a387c,param_2 + 0x6f,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x15);
  iVar2 = FUN_02173e78(param_1,s_gamecd_021a3884,param_2 + 0x15,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x1a);
  iVar2 = FUN_02173e78(param_1,s_makercd_021a388c,param_2 + 0x1a,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x1d);
  iVar2 = FUN_02173e78(param_1,s_unitcd_021a3894,param_2 + 0x1d,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x1f);
  iVar2 = FUN_02173e78(param_1,s_macadr_021a389c,param_2 + 0x1f,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x2c);
  iVar2 = FUN_02173e78(param_1,&DAT_021a38a4,param_2 + 0x2c,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x2f);
  iVar2 = FUN_02173e78(param_1,s_birth_021a38ac,param_2 + 0x2f,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_02004b04(param_2 + 0x34);
  iVar2 = FUN_02173e78(param_1,s_devtime_021a38b4,param_2 + 0x34,uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_02007620(param_2 + 0x7e);
  iVar2 = FUN_02173e78(param_1,s_devname_021a38bc,param_2 + 0x7e,iVar2 << 1);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_3 == 1) {
    uVar1 = FUN_02004b04(param_2 + 0x4e);
    iVar2 = FUN_02173e78(param_1,&DAT_021a38c4,param_2 + 0x4e,uVar1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  FUN_02052c44(auStack_34,0x21,s_Nitro_WiFi_SDK__d__d_021a38cc,1,2);
  iVar2 = FUN_02173f34(param_1,s_User_Agent_021a38e4,auStack_34);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_02173f34(param_1,s_HTTP_X_GAMECD_021a38f0,param_2 + 0x15);
  if (iVar2 == 0) {
    return 1;
  }
  return 0;
}


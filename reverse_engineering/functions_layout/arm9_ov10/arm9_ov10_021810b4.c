
int FUN_021810b4(int *param_1,undefined *param_2,undefined *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 local_320;
  undefined1 uStack_31f;
  undefined4 local_31c;
  undefined1 *local_318;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 auStack_312 [766];
  
  if (*param_1 != 1) {
    FUN_02002068(s_slist_>state____sl_disconnected_021a4d18,s_sb_serverlist_c_021a4cf0,0,0x20a);
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_021a4d38;
  }
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_021a4d38;
  }
  uVar1 = FUN_02004b04(param_2);
  if (0x100 < uVar1) {
    return 6;
  }
  uVar1 = FUN_02004b04(param_3);
  if (0x100 < uVar1) {
    return 6;
  }
  iVar2 = FUN_02181444(param_1);
  if (iVar2 == 0) {
    param_1[0x171] = param_4;
    FUN_021812f8(param_1);
    local_31c = 2;
    local_318 = auStack_312;
    FUN_021813f8(&local_318,0,&local_31c);
    FUN_021813f8(&local_318,1,&local_31c);
    FUN_021813f8(&local_318,3,&local_31c);
    FUN_021813c8(&local_318,param_1[0x12e],&local_31c);
    FUN_0218140c(&local_318,param_1 + 3,&local_31c);
    FUN_0218140c(&local_318,param_1 + 0xc,&local_31c);
    FUN_021813ac(&local_318,param_1 + 0x1d,8,&local_31c);
    FUN_0218140c(&local_318,param_3,&local_31c);
    FUN_0218140c(&local_318,param_2,&local_31c);
    FUN_021813c8(&local_318,
                 param_4 << 0x18 | (param_4 & 0xff00) << 8 | param_4 >> 0x18 | param_4 >> 8 & 0xff00
                 ,&local_31c);
    if ((param_1[0x171] & 8U) != 0) {
      FUN_021813c8(&local_318,param_1[0x129],&local_31c);
    }
    if ((param_1[0x171] & 0x80U) != 0) {
      FUN_021813c8(&local_318,param_5,&local_31c);
    }
    local_320 = (undefined1)((uint)local_31c >> 8);
    local_314 = local_320;
    uStack_31f = (undefined1)local_31c;
    local_313 = uStack_31f;
    iVar2 = FUN_02001a88(param_1[300],&local_314,local_31c,0);
    if (iVar2 < 1) {
      FUN_02180fe8(param_1);
      return 3;
    }
    *param_1 = 3;
    param_1[0x172] = 0;
    if (param_1[0x1f] == 0) {
      iVar2 = FUN_0217583c(0x1000);
      param_1[0x1f] = iVar2;
      if (param_1[0x1f] == 0) {
        return 5;
      }
      param_1[0x20] = 0;
    }
    iVar2 = 0;
  }
  return iVar2;
}


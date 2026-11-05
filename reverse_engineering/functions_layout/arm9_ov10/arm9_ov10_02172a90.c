
undefined4 FUN_02172a90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_a8 [152];
  
  if (DAT_021a7350 == 0 && DAT_021a734c == 0) {
    uVar1 = FUN_02004b04(s_acctcreate_021a3764);
    iVar2 = FUN_02173e78(param_1,s_action_021a3770,s_acctcreate_021a3764,uVar1);
    if (iVar2 != 0) {
      return 8;
    }
  }
  else {
    uVar1 = FUN_02004b04(s_login_021a3778);
    iVar2 = FUN_02173e78(param_1,s_action_021a3770,s_login_021a3778,uVar1);
    if (iVar2 != 0) {
      return 8;
    }
    uVar1 = FUN_02004b04(param_2);
    iVar2 = FUN_02173e78(param_1,s_gsbrcd_021a3780,param_2,uVar1);
    if (iVar2 != 0) {
      return 8;
    }
  }
  iVar2 = FUN_02173680(auStack_a8,&DAT_021a734c);
  if (iVar2 == 0) {
    return 5;
  }
  iVar2 = FUN_02173420(param_1,auStack_a8,DAT_021a736c);
  if (iVar2 == 0) {
    return 8;
  }
  if (DAT_021a7340 == 1) {
    uVar1 = FUN_02004b04(&DAT_021a3788);
    iVar2 = FUN_02173e78(param_1,s_iswfc_021a378c,&DAT_021a3788,uVar1);
    if (iVar2 != 0) {
      return 8;
    }
  }
  iVar2 = FUN_02007620(param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_02007620(param_3);
    iVar2 = FUN_02173e78(param_1,s_ingamesn_021a3794,param_3,iVar2 << 1);
    if (iVar2 != 0) {
      return 8;
    }
  }
  return 0;
}


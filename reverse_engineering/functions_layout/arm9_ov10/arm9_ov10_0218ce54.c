
void FUN_0218ce54(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_82c [20];
  undefined1 auStack_818 [2048];
  int local_18;
  
  local_18 = 0;
  FUN_0218d870(auStack_818,3,param_1 + 0x21);
  iVar5 = 0;
  if (0 < DAT_021a8384) {
    puVar4 = &DAT_021a8388;
    do {
      FUN_02003ce0(auStack_82c,s_localip_d_021a686c,iVar5);
      FUN_0218daf8(auStack_818,auStack_82c);
      uVar2 = FUN_02193658(*puVar4,puVar4 + 1);
      FUN_0218daf8(auStack_818,uVar2);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_021a8384);
  }
  FUN_0218daf8(auStack_818,s_localport_021a6878);
  FUN_0218db38(auStack_818,param_1[0x30]);
  FUN_0218daf8(auStack_818,s_natneg_021a6884);
  if (param_1[0x32] == 0) {
    puVar3 = &DAT_021a6890;
  }
  else {
    puVar3 = &DAT_021a688c;
  }
  FUN_0218daf8(auStack_818,puVar3);
  if (param_2 != 0) {
    FUN_0218daf8(auStack_818,s_statechanged_021a6894);
    FUN_0218db38(auStack_818,param_2);
  }
  FUN_0218daf8(auStack_818,s_gamename_021a68a4);
  FUN_0218daf8(auStack_818,param_1 + 1);
  if (param_1[0x2a] != 0) {
    FUN_0218daf8(auStack_818,s_publicip_021a68b0);
    FUN_0218db38(auStack_818,param_1[0x41]);
    FUN_0218daf8(auStack_818,s_publicport_021a68bc);
    FUN_0218db38(auStack_818,*(undefined2 *)(param_1 + 0x42));
  }
  if (param_2 == 2) {
    if (0 < 0x800 - local_18) {
      puVar1 = auStack_818 + local_18;
      local_18 = local_18 + 1;
      *puVar1 = 0;
    }
  }
  else {
    FUN_0218d5a0(param_1,auStack_818,0xff,0,0xff,0,0xff,0);
  }
  FUN_02001a50(*param_1,auStack_818,local_18,0,param_1 + 0x33,8);
  uVar2 = FUN_02001ed8();
  param_1[0x2b] = uVar2;
  param_1[0x2c] = param_1[0x2b];
  if (param_2 != 0) {
    param_1[0x2d] = 0;
  }
  return;
}


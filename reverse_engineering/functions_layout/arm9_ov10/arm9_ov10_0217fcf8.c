
void FUN_0217fcf8(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_118 [260];
  
  puVar4 = local_118;
  iVar3 = 0x100;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x620) = param_3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar5 = 0;
  if (0 < param_5) {
    do {
      puVar1 = (&PTR_DAT_021a6aa0)[*(byte *)(param_4 + iVar5)];
      iVar2 = FUN_02004b04();
      if (0xff < iVar3 + iVar2 + 1) break;
      iVar2 = FUN_02003ce0(local_118 + iVar3,&DAT_021a4cc0,puVar1);
      iVar3 = iVar3 + iVar2;
      FUN_0217f140(param_1,*(undefined1 *)(param_4 + iVar5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_5);
  }
  iVar3 = FUN_021810b4(param_1 + 0x4c,local_118,param_6,param_7,param_8);
  if ((iVar3 == 0) && (param_2 == 0)) {
    iVar3 = 0;
    while ((*(int *)(param_1 + 0x4c) == 3 || ((0 < *(int *)(param_1 + 0x10) && (iVar3 == 0))))) {
      thunk_FUN_02052ea0(10);
      iVar3 = FUN_0217fc38(param_1);
    }
  }
  return;
}


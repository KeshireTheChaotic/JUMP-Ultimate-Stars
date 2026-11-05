
int FUN_02173340(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (DAT_021a7348 != 0) {
    return 2;
  }
  DAT_021a7348 = (*(code *)param_1[0x10])(s_ALLOC_DWCauth_021a3840,0x13f4);
  if (DAT_021a7348 == 0) {
    return 2;
  }
  FUN_020517fc(DAT_021a7348,0,0x13f4);
  *(undefined4 *)(DAT_021a7348 + 0x1314) = param_2;
  DAT_021a7344 = 0;
  FUN_020517fc(DAT_021a7348 + 0x1008,0,0x1c4);
  *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
  iVar2 = DAT_021a7348;
  puVar5 = (undefined4 *)(DAT_021a7348 + 0x11cc);
  iVar4 = 9;
  do {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    param_1 = param_1 + 2;
    *puVar5 = uVar1;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(iVar2 + 0x11fe) = 0;
  *(undefined1 *)(DAT_021a7348 + 0x120b) = 0;
  uVar1 = FUN_021730a4(1);
  *(undefined4 *)(DAT_021a7348 + 0x1004) = uVar1;
  iVar2 = *(int *)(DAT_021a7348 + 0x1004);
  if (iVar2 == 0) {
    DAT_021a7340 = 0;
    FUN_021732cc();
    iVar2 = 0;
  }
  return iVar2;
}


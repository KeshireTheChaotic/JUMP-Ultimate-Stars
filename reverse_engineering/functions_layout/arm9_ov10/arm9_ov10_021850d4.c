
undefined4 FUN_021850d4(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(*param_1 + 0x100) == 0) {
    return 1;
  }
  FUN_02185058(param_2);
  uVar1 = FUN_0217583c(0xf0);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  puVar5 = *(undefined4 **)(param_2 + 0xc);
  if (puVar5 != (undefined4 *)0x0) {
    iVar3 = 0x1e;
    puVar4 = param_3;
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      puVar4 = puVar4 + 2;
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5 = puVar5 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar1 = FUN_02001e9c(*param_3);
    **(undefined4 **)(param_2 + 0xc) = uVar1;
    uVar1 = FUN_02001e9c(param_3[1]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 4) = uVar1;
    uVar1 = FUN_02001e9c(param_3[2]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = uVar1;
    uVar1 = FUN_02001e9c(param_3[3]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc) = uVar1;
    uVar1 = FUN_02001e9c(param_3[4]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10) = uVar1;
    uVar1 = FUN_02001e9c(param_3[5]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14) = uVar1;
    uVar1 = FUN_02001e9c(param_3[0x32]);
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 200) = uVar1;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  return 1;
}


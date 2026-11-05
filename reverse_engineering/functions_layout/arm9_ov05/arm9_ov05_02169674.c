
undefined4 FUN_02169674(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_021696d4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 4) + 0x15c));
  if (*(int *)(param_1 + 0x5c) == 1) {
    uVar1 = FUN_02075894(*(undefined4 *)(param_1 + 8),uVar1,param_3);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x5c) == 2) {
    uVar1 = FUN_0216d4c0(*(undefined4 *)(param_1 + 0xc),uVar1,param_3);
    return uVar1;
  }
  return 0;
}


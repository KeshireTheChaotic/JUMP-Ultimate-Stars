
void FUN_0201b3e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_020a0cb8;
  (**(code **)**(undefined4 **)(*(int *)(DAT_020a0cb8 + 0x54) + 4))();
  *(undefined4 *)(*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) * 0x10) = param_1;
  *(undefined4 *)(*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) * 0x10 + 4) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) * 0x10 + 8) = param_3;
  *(undefined4 *)(*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) * 0x10 + 0xc) = param_4;
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x50) - 1U & *(int *)(iVar1 + 0x4c) + 1U;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x54) + 4) + 4))();
  FUN_02028330(iVar1);
  return;
}


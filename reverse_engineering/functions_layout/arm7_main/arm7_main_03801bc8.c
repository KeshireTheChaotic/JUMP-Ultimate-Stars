
uint FUN_03801bc8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar2 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar3 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return uVar1 | iVar2 << 8 | iVar3 << 0x10;
}


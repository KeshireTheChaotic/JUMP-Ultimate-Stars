
ushort FUN_03801c28(int param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  sVar2 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return uVar1 | sVar2 << 8;
}


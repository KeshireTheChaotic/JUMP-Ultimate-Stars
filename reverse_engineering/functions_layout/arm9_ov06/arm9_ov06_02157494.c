
void FUN_02157494(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort in_stack_00000000;
  
  FUN_02159d34();
  if ((in_stack_00000000 & 0x10) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x56c);
    uVar1 = *(uint *)(iVar2 + 0x3c) & 0xfffffffd;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x56c);
    uVar1 = *(uint *)(iVar2 + 0x3c) | 2;
  }
  *(uint *)(iVar2 + 0x3c) = uVar1;
  return;
}


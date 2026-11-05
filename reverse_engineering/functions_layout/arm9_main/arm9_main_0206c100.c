
void FUN_0206c100(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x78) * 4 + 0x18) = *(undefined4 *)(param_1 + 0xe0);
  iVar1 = *(int *)(param_1 + 0x78) * 4;
  *(uint *)(param_1 + 0x18 + iVar1) = *(uint *)(param_1 + 0xe4) | *(uint *)(param_1 + 0x18 + iVar1);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



void FUN_021565c0(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c);
  *(undefined2 *)(iVar1 + 0x26) = 0;
  *(undefined2 *)(iVar1 + 0x24) = 0;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x1000;
  return;
}


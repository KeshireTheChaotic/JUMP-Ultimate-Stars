
void FUN_02160250(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar1 + 0xf6) = 0;
  *(undefined2 *)(iVar1 + 0xf4) = 600;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0216028c);
  FUN_0216028c(param_1);
  return;
}


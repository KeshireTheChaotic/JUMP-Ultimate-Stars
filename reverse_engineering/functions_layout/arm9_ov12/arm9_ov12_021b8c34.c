
void FUN_021b8c34(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar1 + 0x90) = param_2;
  *(undefined2 *)(iVar1 + 0x92) = param_3;
  return;
}


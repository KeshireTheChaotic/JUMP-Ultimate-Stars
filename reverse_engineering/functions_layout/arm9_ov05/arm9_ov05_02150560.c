
void FUN_02150560(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar1 + 0xbc) = param_2;
  *(undefined2 *)(iVar1 + 0xbe) = param_3;
  return;
}


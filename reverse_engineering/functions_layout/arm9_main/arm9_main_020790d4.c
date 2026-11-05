
void FUN_020790d4(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(*(int *)(iVar1 + 0x10) + param_2 * 2) = param_3;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  return;
}


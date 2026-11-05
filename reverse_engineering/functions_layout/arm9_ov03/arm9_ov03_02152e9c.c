
void FUN_02152e9c(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined1 *)(iVar1 + param_2 + 0x8fd) = param_3;
  return;
}


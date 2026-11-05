
void FUN_02152ee0(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x8ff) = param_2;
  *(undefined1 *)(iVar1 + 0x901) = 1;
  return;
}



void FUN_02152ecc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined4 *)(iVar1 + 0x8d4) = param_2;
  return;
}


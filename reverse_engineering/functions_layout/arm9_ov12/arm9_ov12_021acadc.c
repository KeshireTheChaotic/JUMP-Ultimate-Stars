
void FUN_021acadc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  FUN_021acaf8(iVar1,1);
  return;
}


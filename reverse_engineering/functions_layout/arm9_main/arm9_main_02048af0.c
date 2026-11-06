
void FUN_02048af0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  FUN_02024c3c(iVar1,1);
  return;
}



void FUN_02153684(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  FUN_0214f1cc(iVar1,1);
  return;
}


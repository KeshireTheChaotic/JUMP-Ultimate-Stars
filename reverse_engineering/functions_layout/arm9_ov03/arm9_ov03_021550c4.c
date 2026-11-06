
void FUN_021550c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  FUN_02153660(iVar1,1);
  return;
}


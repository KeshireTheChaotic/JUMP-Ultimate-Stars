
void FUN_02025174(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  FUN_02019bec(iVar1 + 0x14,param_2,param_3,*(undefined4 *)(iVar1 + 0x34));
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  return;
}


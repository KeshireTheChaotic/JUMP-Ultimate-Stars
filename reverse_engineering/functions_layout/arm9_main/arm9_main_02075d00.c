
void FUN_02075d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_0207342c(0x78,0xb,param_3,param_4,param_4);
  }
  iVar2 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02075d64);
  return;
}


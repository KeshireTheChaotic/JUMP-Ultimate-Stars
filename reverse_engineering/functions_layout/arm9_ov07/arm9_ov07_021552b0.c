
undefined4 FUN_021552b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x10);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_0214f1bc(iVar1,0,param_3,param_4,param_4);
  return uVar2;
}


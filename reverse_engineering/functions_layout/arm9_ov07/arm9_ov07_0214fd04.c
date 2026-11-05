
void FUN_0214fd04(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    if (iVar1 == 6) {
      FUN_0207342c(0x78,0);
      uVar3 = FUN_0214dd50();
      FUN_0214dd6c(uVar3,1);
      FUN_0214f7dc(iVar5,0);
      return;
    }
    iVar4 = 0;
    if (iVar1 == 4) {
      iVar4 = *(int *)(iVar5 + 0x34);
    }
    else if (iVar1 == 5) {
      iVar4 = *(int *)(iVar5 + 0x38);
    }
    if (iVar4 != 0) {
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar5 + 0x30) + 4),1);
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),1);
    }
  }
  return;
}


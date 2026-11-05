
void FUN_0215d4f0(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar5 = *(int *)(iVar4 + 0xac);
  (**(code **)(**(int **)(iVar5 + 4) + 0x194))();
  uVar2 = FUN_02072050();
  func_0x021b7170(*(undefined4 *)(iVar5 + 4));
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  iVar3 = (**(code **)(*param_2 + 8))();
  if (((iVar3 == -0x7ffef000) && (iVar3 = (**(code **)*param_2)(), iVar3 == 4)) &&
     (iVar3 = (**(code **)(**(int **)(iVar5 + 4) + 0x194))(), iVar3 != -1)) {
    iVar3 = func_0x021a2254(uVar2);
    if ((iVar3 == 0) || (iVar3 = func_0x021a2270(uVar2), iVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0207342c(0x78,0);
      func_0x021bac28(*(undefined4 *)(iVar4 + 0x2d8),0x38,0,0,0,0,0,0);
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4));
      while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x2d8)), iVar3 == 0) {
        (*DAT_020a0e18)();
      }
      iVar3 = func_0x021bacfc(*(undefined4 *)(iVar4 + 0x2d8));
      if (iVar3 != 0) {
        iVar3 = func_0x021a2310(uVar2);
        if (iVar3 == -2) {
          func_0x021bac28(*(undefined4 *)(iVar4 + 0x2d8),0x39,0,0,0,0,0,0);
          FUN_0207342c(0x78,2);
          while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x2d8)), iVar3 == 0) {
            (*DAT_020a0e18)();
          }
        }
        else if (iVar3 == 0) {
          func_0x021bac28(*(undefined4 *)(iVar4 + 0x2d8),0x3a,0,0,0,0,0,0);
          while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x2d8)), iVar3 == 0) {
            (*DAT_020a0e18)();
          }
        }
      }
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4));
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0xac) + 4),1);
      FUN_021594ec(iVar4);
    }
    else {
      FUN_0207342c(0x78,2);
    }
  }
  return;
}


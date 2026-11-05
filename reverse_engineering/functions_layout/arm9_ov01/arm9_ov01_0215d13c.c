
void FUN_0215d13c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    func_0x021bad80(*(undefined4 *)(iVar4 + 0x2d8),0);
    func_0x021bac28(*(undefined4 *)(iVar4 + 0x2d8),0x57,0,0,0,0,0,0);
    iVar1 = FUN_0203b3f4();
    FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,0);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x8c) + 4));
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    FUN_0207342c(0x78,0);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4));
    while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x2d8)), iVar1 == 0) {
      (*DAT_020a0e18)();
    }
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4));
    func_0x021bad80(*(undefined4 *)(iVar4 + 0x2d8),1);
    iVar1 = func_0x021bacfc(*(undefined4 *)(iVar4 + 0x2d8));
    if (iVar1 == 0) {
      func_0x021b7170(*(undefined4 *)(param_1 + 4));
      iVar1 = FUN_0203b3f4();
      FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x68) + 4),1);
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 0x8c) + 4));
    }
    else {
      uVar2 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xac) + 4) + 0x194))();
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0xac) + 4),1);
      FUN_020720e4(uVar2);
      FUN_021594ec(iVar4);
      FUN_0215a778(iVar4);
      piVar3 = *(int **)(*(int *)(iVar4 + 0x4c) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      piVar3 = *(int **)(*(int *)(iVar4 + 0x68) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 100) + 4));
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4),1);
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 0xac) + 4));
      FUN_0215aaf4();
    }
  }
  return;
}


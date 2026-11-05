
void FUN_0215c248(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(iVar5 + 0xac);
  func_0x021b7170();
  func_0x021b7170(*(undefined4 *)(iVar4 + 4));
  iVar1 = (**(code **)(*param_2 + 8))();
  if (((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) &&
     (iVar1 = (**(code **)(**(int **)(iVar4 + 4) + 0x194))(), iVar1 != -1)) {
    iVar1 = (**(code **)(**(int **)(*(int *)(iVar5 + 0xac) + 4) + 0x194))();
    if (*(char *)(iVar5 + 0x312) != iVar1) {
      iVar1 = (**(code **)(**(int **)(*(int *)(iVar5 + 0xac) + 4) + 0x194))();
      iVar2 = FUN_0215716c(iVar5);
      if (iVar1 != iVar2) {
        FUN_0207342c(0x78,0);
        func_0x021bac28(*(undefined4 *)(iVar5 + 0x2d8),0x55,0,0,0,0,0,0);
        func_0x021b65d8(*(undefined4 *)(*(int *)(iVar5 + 0x60) + 4));
        while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar5 + 0x2d8)), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        iVar1 = func_0x021bacfc(*(undefined4 *)(iVar5 + 0x2d8));
        if (iVar1 != 0) {
          (**(code **)(**(int **)(*(int *)(iVar5 + 0xac) + 4) + 0x194))();
          uVar3 = (**(code **)(**(int **)(*(int *)(iVar5 + 0xac) + 4) + 0x194))();
          FUN_02071fa4((int)*(char *)(iVar5 + 0x312),uVar3);
          FUN_021594ec(iVar5);
          FUN_0215babc(iVar5);
          FUN_02159ea8(iVar5,0x215b8bd);
          func_0x021b6760(*(undefined4 *)(*(int *)(iVar5 + 0x70) + 4),4,0x215a275);
          FUN_02159e60(iVar5,&LAB_0215ba30_1);
          FUN_02159790(iVar5,0);
        }
        func_0x021b65e0(*(undefined4 *)(*(int *)(iVar5 + 0x60) + 4));
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar5 + 0x60) + 4),1);
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar5 + 0xac) + 4),1);
        return;
      }
    }
    FUN_0207342c(0x78,2);
    func_0x021b7170(*(undefined4 *)(iVar4 + 4));
  }
  return;
}


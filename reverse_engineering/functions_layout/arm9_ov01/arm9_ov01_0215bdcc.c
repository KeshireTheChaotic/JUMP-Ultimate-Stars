
void FUN_0215bdcc(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    iVar1 = FUN_0203b3f4();
    FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,0);
    func_0x021bad80(*(undefined4 *)(iVar4 + 0x2d8),0);
    func_0x021bac28(*(undefined4 *)(iVar4 + 0x2d8),0x56,0,0,0,0,0,0);
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
    }
    else {
      uVar2 = FUN_02071f20();
      uVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xac) + 4) + 0x194))();
      FUN_02071fd4(uVar2,uVar3);
      *(undefined1 *)(iVar4 + 0x311) = 3;
      DAT_020afeb0 = FUN_0215728c(iVar4,uVar2);
      DAT_020afeb4 = (undefined1)uVar2;
      FUN_02159ef4(iVar4);
    }
  }
  return;
}


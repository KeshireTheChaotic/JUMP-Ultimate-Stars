
void FUN_0215c7f4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = *(int *)(iVar4 + 0xac);
  func_0x021b7170(*(undefined4 *)(iVar3 + 4));
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    iVar1 = (**(code **)(**(int **)(iVar3 + 4) + 0x194))();
    if (iVar1 == -1) {
      func_0x021b7170(*(undefined4 *)(iVar3 + 4));
      return;
    }
    iVar1 = FUN_0215a664(iVar4);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x194))();
      DAT_020afeb0 = FUN_0215728c(iVar4,uVar2);
      uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x194))();
      DAT_020afeb4 = FUN_02157268(iVar4,uVar2);
      *(undefined1 *)(iVar4 + 0x311) = 0;
      FUN_0207342c(0x78);
      FUN_02159ef4(iVar4);
    }
  }
  return;
}



void FUN_0215ca44(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(iVar5 + 0xac);
  func_0x021b7170(*(undefined4 *)(iVar4 + 4));
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  iVar2 = (**(code **)(*param_2 + 8))();
  if ((iVar2 == -0x7ffef000) && (iVar2 = (**(code **)*param_2)(), iVar2 == 4)) {
    iVar2 = (**(code **)(**(int **)(iVar4 + 4) + 0x194))();
    if (iVar2 == -1) {
      func_0x021b7170(*(undefined4 *)(iVar4 + 4));
      return;
    }
    iVar2 = FUN_0215a664(iVar5);
    if (iVar2 != 0) {
      iVar2 = (int)DAT_020afedd;
      uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0x194))();
      uVar1 = FUN_0215728c(iVar5,uVar3);
      (&DAT_020afeb0)[iVar2] = uVar1;
      uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0x194))();
      uVar1 = FUN_02157268(iVar5,uVar3);
      (&DAT_020afeb4)[iVar2] = uVar1;
      *(undefined1 *)(iVar5 + 0x311) = 0;
      FUN_0207342c(0x78);
      FUN_02159ef4(iVar5);
    }
  }
  return;
}


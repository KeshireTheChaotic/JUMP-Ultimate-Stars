
void FUN_02159f98(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = (**(code **)(**(int **)(piVar4[3] + 4) + 0x194))();
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == piVar4[6]) {
    FUN_0207342c(0x78,0);
    FUN_02159de4(piVar4,(int)*(char *)((int)piVar4 + 0x1e),0x1b);
    FUN_021596f0(piVar4);
    return;
  }
  FUN_0207342c(0x78,0);
  cVar1 = *(char *)((int)piVar4 + iVar2 + 0x20);
  if (*(char *)((int)piVar4 + 0x1d) == cVar1) {
    FUN_02159de4(piVar4,(int)*(char *)((int)piVar4 + 0x1e),0x1b);
  }
  else {
    *(char *)((int)piVar4 + 0x1d) = cVar1;
    FUN_02159de4(piVar4,(int)*(char *)((int)piVar4 + 0x1d),0x1b);
  }
  piVar5 = *(int **)(*(int *)(*piVar4 + 0x4c) + 4);
  (**(code **)(*(int *)piVar5[0x19] + 0x70))();
  (**(code **)(*piVar5 + 0xc4))();
  uVar3 = func_0x021bd710(*(undefined4 *)(*piVar4 + 0x88),(int)*(char *)((int)piVar4 + 0x1d));
  piVar5 = *(int **)(*(int *)(*(int *)(*piVar4 + 0x4c) + 4) + 100);
  (**(code **)(*piVar5 + 0x68))(piVar5,uVar3);
  FUN_021596f0(piVar4);
  return;
}



void FUN_0216adbc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) {
    (**(code **)(iVar3 + 4))(iVar3,*(undefined4 *)(iVar3 + 8),0);
    FUN_0207342c(0x78,1);
    return;
  }
  func_0x021b65cc();
  if (*(int *)(iVar3 + 0xa0) < 1) {
    return;
  }
  if (*(int *)(iVar3 + 0xa0) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x9c) + 1;
    *(int *)(iVar3 + 0x9c) = iVar2;
    if (*(int *)(iVar3 + 0xa0) < iVar2) {
      *(undefined4 *)(iVar3 + 0x9c) = 0;
    }
    FUN_0216ad04(iVar3,*(undefined4 *)(iVar3 + 0x9c));
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0207342c(0x78,0);
    return;
  }
  FUN_0207342c(0x78,2);
  return;
}


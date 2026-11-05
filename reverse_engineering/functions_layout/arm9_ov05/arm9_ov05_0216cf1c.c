
void FUN_0216cf1c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (iVar2 == 0xc) {
    iVar2 = *(int *)(iVar3 + 0x80) + -1;
    *(int *)(iVar3 + 0x80) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(iVar3 + 0x80) = 0xb;
    }
    FUN_0207342c(0x78,3);
    bVar1 = true;
  }
  else if (iVar2 == 0xd) {
    iVar2 = *(int *)(iVar3 + 0x80) + 1;
    *(int *)(iVar3 + 0x80) = iVar2;
    if (0xb < iVar2) {
      *(undefined4 *)(iVar3 + 0x80) = 0;
    }
    FUN_0207342c(0x78,3);
    bVar1 = true;
  }
  else if (iVar2 == 0xe) {
    (**(code **)(iVar3 + 8))(iVar3,*(undefined4 *)(iVar3 + 0xc),0);
    FUN_0207342c(0x78,1);
  }
  else {
    *(int *)(iVar3 + 0x80) = iVar2;
    bVar1 = true;
    FUN_0207342c(0x78,3);
  }
  if (bVar1) {
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),1);
    FUN_0216d010(iVar3);
    FUN_0216d108(iVar3,0,*(undefined4 *)(iVar3 + 0x80));
    return;
  }
  return;
}


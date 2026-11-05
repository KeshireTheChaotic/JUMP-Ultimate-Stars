
void FUN_021516b4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (*(int **)(param_1 + 4))[4];
  if (*(int *)(*(int *)(*(int *)(iVar5 + 0x68) + 4) + 0x148) == 0) {
    func_0x021b65cc();
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    if (*(int *)(iVar5 + 0x3f0) == 2) {
      return;
    }
    FUN_0207342c(0x78,2);
    return;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  puVar3 = (ushort *)FUN_0214ff0c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x15c),uVar2);
  iVar4 = FUN_021517ec(iVar5,puVar3);
  if (iVar4 == 0) {
    func_0x021b65cc();
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    FUN_0207342c(0x78,2);
    return;
  }
  iVar5 = (**(code **)(iVar5 + 0x2c))
                    (iVar5,*(undefined4 *)(iVar5 + 0x30),2,(int)(short)uVar2,puVar3);
  if (iVar5 == 0) {
    func_0x021b65cc();
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    return;
  }
  if (*(int *)(DAT_0214bd80 + 0x18e4) == 2) {
    iVar5 = *(int *)(DAT_0214bd80 + 0x60) + 0x74;
    uVar1 = (uint)(*puVar3 >> 5);
    *(uint *)(iVar5 + uVar1 * 4) = *(uint *)(iVar5 + uVar1 * 4) & ~(1 << (*puVar3 & 0x1f));
  }
  else {
    FUN_020713bc(*puVar3);
  }
  FUN_0207342c(0x78,0);
  return;
}


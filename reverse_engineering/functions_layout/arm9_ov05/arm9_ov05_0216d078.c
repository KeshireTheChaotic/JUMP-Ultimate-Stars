
void FUN_0216d078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (*(int **)(param_1 + 4))[4];
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0x30) + 4) + 0x148) == 0) {
    func_0x021b65cc();
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    FUN_0207342c(0x78,2);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  uVar2 = *(undefined4 *)
           (iVar1 * 0x24 + *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x15c) + 8) + 0x20) +
           0x18);
  *(undefined4 *)(iVar3 + 0x7c) = uVar2;
  (**(code **)(iVar3 + 8))(iVar3,*(undefined4 *)(iVar3 + 0xc),2,uVar2,param_4);
  FUN_0207342c(0x78,0);
  return;
}


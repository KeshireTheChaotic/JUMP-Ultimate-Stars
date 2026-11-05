
void FUN_021684c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 == 1) {
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    iVar1 = FUN_02168598(iVar2,uVar3,param_3,param_4,param_4);
    if (iVar1 == 0) {
      (**(code **)(iVar2 + 4))(iVar2,*(undefined4 *)(iVar2 + 8),4,0x4a);
      return;
    }
    (**(code **)(iVar2 + 4))
              (iVar2,*(undefined4 *)(iVar2 + 8),4,u_EFGHI_021715ec[*(int *)(iVar2 + 0x48)]);
    return;
  }
  if (param_2 != 4) {
    return;
  }
  iVar1 = FUN_02168598(iVar2,uVar3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    func_0x021b65cc();
    FUN_0207342c(0x78,2);
    return;
  }
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x20) + 4));
  (**(code **)(iVar2 + 4))(iVar2,*(undefined4 *)(iVar2 + 8),0,uVar3);
  FUN_0207342c(0x78,0);
  return;
}



void FUN_0216bfb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (iVar2 == 2 || iVar2 == 3) {
    FUN_0207342c(0x78,0);
    (**(code **)(iVar1 + 0xc))(iVar1,*(undefined4 *)(iVar1 + 0x10),0,iVar2);
    return;
  }
  if (iVar2 == 0xb) {
    FUN_0207342c(0x78,1);
    (**(code **)(iVar1 + 0xc))(iVar1,*(undefined4 *)(iVar1 + 0x10),0,0xb);
    return;
  }
  func_0x021b65cc();
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  return;
}


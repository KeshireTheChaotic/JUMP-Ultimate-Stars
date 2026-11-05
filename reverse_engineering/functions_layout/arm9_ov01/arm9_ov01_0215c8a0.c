
void FUN_0215c8a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(iVar3 + 0xac);
  func_0x021b7170(*(undefined4 *)(iVar2 + 4));
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  func_0x021b65cc();
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 4) {
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x194))();
  if (iVar1 == -1) {
    func_0x021b7170(*(undefined4 *)(iVar2 + 4));
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    return;
  }
  iVar1 = FUN_0215a664(iVar3);
  if (iVar1 != 0) {
    FUN_0215c944(iVar3);
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
  }
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  return;
}


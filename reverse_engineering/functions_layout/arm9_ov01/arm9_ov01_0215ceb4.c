
void FUN_0215ceb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(param_1 + 0xac);
  uStack_14 = param_4;
  iVar1 = (**(code **)(**(int **)(iVar3 + 4) + 0x19c))();
  iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x194))();
  iVar1 = (iVar3 - iVar1) * 0x18 + 0x39;
  local_18 = iVar1 * 0x1000;
  FUN_0215b3f4(*(undefined4 *)(param_1 + 0x4c),&local_18);
  piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  FUN_0215b874(param_1,*(undefined4 *)(param_1 + 0x68),iVar1);
  piVar2 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 4));
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 100) + 4));
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x68) + 4),1);
  piVar2 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x170))(piVar2,0);
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  func_0x021b6214(*(undefined4 *)(piVar2[6] + 4),1);
  FUN_0215aaa0();
  return;
}


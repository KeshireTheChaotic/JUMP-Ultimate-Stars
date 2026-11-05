
void FUN_0215bd4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 4) + 0x19c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 4) + 0x19c))();
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 6U) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x44) + 4);
      (**(code **)(*piVar2 + 0x1a0))(piVar2,*(uint *)(param_1 + 0x5c) - 5,0,0x1a0,param_4);
    }
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 4) + 0x194))();
  if ((*(int *)(param_1 + 0x5c) < iVar1) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 4) + 0x194))(), 5 < iVar1)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x44) + 4);
    (**(code **)(*piVar2 + 0x198))(piVar2,*(undefined4 *)(param_1 + 0x5c));
    return;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 4) + 0x194))();
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x5c))) {
    iVar1 = iVar1 * 4;
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + iVar1) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + iVar1) + 4),1);
    if ((*(uint *)(param_1 + 0x6c) & 0x2000) == 0) {
      func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar1) + 4),0);
      func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar1) + 4),1);
      return;
    }
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1) + 4),1);
    return;
  }
  if (-1 < iVar1) {
    iVar1 = iVar1 * 4;
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + iVar1) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + iVar1) + 4),1);
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar1) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar1) + 4),1);
  }
  return;
}


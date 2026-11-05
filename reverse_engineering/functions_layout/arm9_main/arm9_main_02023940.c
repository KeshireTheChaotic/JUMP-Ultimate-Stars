
void FUN_02023940(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0xe0))();
  if (iVar1 == 0x414e5944) {
    return;
  }
  iVar1 = jus_AllocDebug(0x4c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x021b21e0(iVar1,param_1,*(undefined4 *)(param_1 + 0x68));
  }
  (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  return;
}


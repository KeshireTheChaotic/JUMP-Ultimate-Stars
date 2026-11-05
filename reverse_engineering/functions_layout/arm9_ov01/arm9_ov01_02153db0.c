
void FUN_02153db0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x4c) != 0) {
    FUN_0216442c();
    *(undefined4 *)(iVar3 + 0x4c) = 0;
  }
  if (*(int *)(iVar3 + 0x50) != 0) {
    FUN_021681d8();
    *(undefined4 *)(iVar3 + 0x50) = 0;
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(iVar3 + iVar1 * 4 + 0x24);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      *(undefined4 *)(iVar3 + iVar1 * 4 + 0x24) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    piVar2 = *(int **)(iVar3 + iVar1 * 4 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
      *(undefined4 *)(iVar3 + iVar1 * 4 + 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(iVar3 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 8) + 8))();
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  func_0x021b65cc();
  FUN_0207367c(8);
  FUN_0207372c(8);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  if (*(int *)(iVar3 + 4) != 0) {
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 4) + 0xc))();
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  FUN_0201b244(iVar3);
  return;
}



void FUN_0207974c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 8) + 4),FUN_02078f84);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x14) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4 + 0xb8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      iVar2 = param_1 + iVar3 * 4;
      *(undefined4 *)(iVar2 + 0xb8) = 0;
      *(undefined4 *)(iVar2 + 0xc0) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}


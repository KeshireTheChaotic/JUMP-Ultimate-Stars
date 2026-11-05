
void FUN_021c4728(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_02084a64();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_02085a18();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 4;
    iVar1 = *(int *)(iVar4 + 0x2c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x40);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 2;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x50);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 8))();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  }
  return;
}


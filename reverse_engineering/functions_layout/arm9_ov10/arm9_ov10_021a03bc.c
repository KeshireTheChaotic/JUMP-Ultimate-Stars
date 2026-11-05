
void FUN_021a03bc(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    puVar1 = *(undefined4 **)(param_1 + iVar3 * 4 + 0x8a4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar1 + 0xc))();
    }
    piVar2 = *(int **)(param_1 + iVar3 * 4 + 0x8b4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if (*(undefined4 **)(param_1 + 0xb08) != (undefined4 *)0x0) {
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xb08) + 0xc))();
  }
  if (*(int **)(param_1 + 0xb0c) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xb0c) + 8))();
  return;
}


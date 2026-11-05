
void FUN_02154ce4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x3bc) != 0) {
    FUN_02078f88();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x41c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  (**(code **)(**(int **)(param_1 + 0x434) + 8))();
  (**(code **)(**(int **)(param_1 + 0x438) + 8))();
  iVar2 = 0;
  do {
    puVar3 = (undefined4 *)(iVar2 * 0x9c + param_1);
    if (*(char *)((int)puVar3 + 0x99) != '\0') {
      iVar4 = 0;
      do {
        if ((int *)puVar3[iVar4 + 1] != (int *)0x0) {
          (**(code **)(*(int *)puVar3[iVar4 + 1] + 8))();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      iVar4 = 0;
      do {
        if ((int *)puVar3[iVar4 + 0x11] != (int *)0x0) {
          (**(code **)(*(int *)puVar3[iVar4 + 0x11] + 8))();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x12);
      iVar4 = 0;
      do {
        if ((int *)puVar3[iVar4 + 0x23] != (int *)0x0) {
          (**(code **)(*(int *)puVar3[iVar4 + 0x23] + 8))();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      (**(code **)(*(int *)*puVar3 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x3d8) + 4) + 0xc))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x3dc) + 4) + 0xc))();
  FUN_02157ba8(param_1);
  FUN_02156ec0(param_1);
  FUN_021576b8(param_1);
  if (*(int *)(param_1 + 0x3c0) != 0) {
    FUN_0214cde4();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x3e0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    if (*(int *)(param_1 + iVar2 * 4 + 0x3f8) != 0) {
      FUN_02034d7c();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  (**(code **)(**(int **)(param_1 + 0x410) + 8))();
  (**(code **)(**(int **)(param_1 + 0x414) + 8))();
  (**(code **)(**(int **)(param_1 + 0x3d0) + 8))();
  (**(code **)(**(int **)(param_1 + 0x3d4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}


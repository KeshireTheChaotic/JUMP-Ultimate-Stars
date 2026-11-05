
void FUN_0202b864(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  for (uVar2 = 1; uVar2 < *(uint *)(param_1 + 0x70); uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + uVar2 * 4 + 0x50) + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  if (*(uint *)(param_1 + 0x70) == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 4) + 0xc))();
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}


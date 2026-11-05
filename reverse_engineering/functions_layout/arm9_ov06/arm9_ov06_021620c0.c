
void FUN_021620c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[10] != 0) {
    FUN_02084a64();
  }
  if (param_1[0xd] != 0) {
    FUN_02163440();
  }
  if (param_1[0xb] != 0) {
    FUN_02166ca8();
  }
  if (param_1[0xc] != 0) {
    FUN_02085a18();
  }
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(param_1[4] + 0x2c); iVar2 = iVar2 + 1) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar2 * 0x34 + param_1[7] + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
        *(undefined4 *)(iVar2 * 0x34 + param_1[7] + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  if (param_1[9] != 0) {
    FUN_02164ca8();
    param_1[9] = 0;
  }
  iVar2 = 0;
  do {
    if (param_1[iVar2 + 1] != 0) {
      (**(code **)(**(int **)(param_1[iVar2 + 1] + 4) + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xc))();
  }
  (**(code **)(*(int *)*param_1 + 8))();
  if (param_1[7] != 0) {
    FUN_0201b268();
  }
  if (param_1[8] != 0) {
    FUN_0201b268();
  }
  FUN_0201b244(param_1);
  return;
}


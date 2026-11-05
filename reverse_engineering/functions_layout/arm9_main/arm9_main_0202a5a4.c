
void FUN_0202a5a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 9) & 0x7f) >> 6 != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x50))();
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0xc0;
  if (param_1 == (int *)0xffffffc4) {
    return;
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_0202a55c();
    }
  }
  if (param_1[6] == 0) {
    return;
  }
  piVar2 = *(int **)(param_1[6] + 0x1c);
  if (piVar2 != param_1) {
    while ((int *)piVar2[8] != param_1) {
      piVar2 = (int *)piVar2[8];
    }
    piVar2[8] = param_1[8];
    return;
  }
  if (param_1[8] == 0) {
    *(undefined4 *)(piVar2[6] + 0x1c) = 0;
  }
  else {
    *(int *)(piVar2[6] + 0x1c) = piVar2[8];
  }
  return;
}



void FUN_02199628(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_02198c00();
  piVar2 = *(int **)(iVar1 + 0x2270);
  if (((param_1 != 0) && (piVar2 != (int *)0x0)) && (0xc < *(uint *)(iVar1 + 0x2274))) {
    for (iVar1 = piVar2[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      if (iVar1 == param_1) {
        if (*(int *)(iVar1 + 8) == 0) {
          piVar2[1] = *(int *)(iVar1 + 0xc);
        }
        else {
          *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          piVar2[2] = *(int *)(iVar1 + 8);
        }
        else {
          *(undefined4 *)(*(int *)(iVar1 + 0xc) + 8) = *(undefined4 *)(iVar1 + 8);
        }
        break;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 8) = piVar2[2];
    piVar2[2] = param_1;
    if (*(int *)(param_1 + 8) == 0) {
      piVar2[1] = param_1;
    }
    else {
      *(int *)(*(int *)(param_1 + 8) + 0xc) = param_1;
    }
    if (iVar1 == 0) {
      *(int *)(param_1 + 4) = *piVar2;
      *piVar2 = *piVar2 + 1;
    }
  }
  return;
}


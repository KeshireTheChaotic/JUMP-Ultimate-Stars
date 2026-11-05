
void FUN_0215aca8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 0x44);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0214d47c(iVar1);
  }
  FUN_0214d28c(uVar2,(&DAT_0215d578)[*(byte *)(iVar4 + 2)],0x1f,(int)*(char *)(iVar4 + 1),param_4);
  iVar1 = 0;
  do {
    if (*(int *)(iVar4 + iVar1 * 4 + 0x88) != 0) {
      FUN_02042660(DAT_020a0f64);
      *(undefined4 *)(iVar4 + iVar1 * 4 + 0x88) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x16);
  if (*(int *)(iVar4 + 0xe0) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(iVar4 + 0xe0) = 0;
  }
  if (*(int *)(iVar4 + 0xe4) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(iVar4 + 0xe4) = 0;
  }
  if (*(int **)(iVar4 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + 8) + 8))();
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  iVar1 = 0;
  do {
    piVar3 = *(int **)(iVar4 + iVar1 * 4 + 0x38);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
      *(undefined4 *)(iVar4 + iVar1 * 4 + 0x38) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  do {
    piVar3 = *(int **)(iVar4 + iVar1 * 4 + 0x10);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
      *(undefined4 *)(iVar4 + iVar1 * 4 + 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(iVar4 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + 4) + 8))();
    *(undefined4 *)(iVar4 + 4) = 0;
  }
  func_0x021b65cc();
  FUN_0201b244(iVar4);
  return;
}


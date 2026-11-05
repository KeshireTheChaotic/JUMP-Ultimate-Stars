
void FUN_0215cb38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_02041f7c(DAT_020a0f64,0,param_3,param_4,param_4);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar1 * 4 + 8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_0201b244(param_1);
  return;
}


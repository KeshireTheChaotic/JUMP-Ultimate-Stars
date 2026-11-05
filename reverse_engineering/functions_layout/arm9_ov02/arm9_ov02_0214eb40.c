
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214eb40(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  iVar1 = FUN_0203b414(1);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  iVar1 = FUN_0203b3f4();
  FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),1,0);
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  FUN_0214ece8(0);
  _DAT_021d5154 = 0;
  func_0x021b526c(0x30);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0x1e] != 0) {
      FUN_0206ae98();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (param_1[0x20] != 0) {
    FUN_0206b138();
  }
  if (param_1[0x1c] != 0) {
    FUN_02156ac8();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x17] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x17] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (param_1[0x1d] != 0) {
    FUN_02156048();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 8))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
  }
  FUN_0201b244(param_1);
  return;
}


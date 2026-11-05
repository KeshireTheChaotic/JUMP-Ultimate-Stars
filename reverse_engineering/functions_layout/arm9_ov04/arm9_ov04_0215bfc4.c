
void FUN_0215bfc4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  FUN_0215a7dc(*(undefined4 *)(iVar3 + 0xb8));
  piVar2 = *(int **)(*(int *)(iVar3 + 0x4c) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x50) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  if (*(char *)(iVar3 + 0xb5) != '\0') {
    iVar1 = 0x22;
    while (0 < iVar1) {
      (*DAT_020a0e18)();
      iVar1 = iVar1 + -1;
    }
    FUN_0207342c(0x7c,7);
  }
  while (*(char *)(iVar3 + 0xb6) == '\0') {
    (*DAT_020a0e18)();
  }
  FUN_02152694(*(undefined4 *)(iVar3 + 200));
  while (iVar1 = FUN_021526bc(*(undefined4 *)(iVar3 + 200)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  piVar2 = *(int **)(*(int *)(iVar3 + 0x54) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}


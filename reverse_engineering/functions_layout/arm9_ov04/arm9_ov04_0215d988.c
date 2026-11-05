
void FUN_0215d988(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  FUN_0215a7dc(*(undefined4 *)(iVar4 + 0xb8));
  piVar2 = *(int **)(*(int *)(iVar4 + 0x4c) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  piVar2 = *(int **)(*(int *)(iVar4 + 0x50) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  FUN_0215cbac(*(undefined4 *)(iVar4 + 200));
  while (*(char *)(iVar4 + 0xb5) == '\0') {
    (*DAT_020a0e18)();
  }
  while (*(char *)(iVar4 + 0xd0) == '\0') {
    (*DAT_020a0e18)();
  }
  uVar3 = FUN_0214ce64();
  FUN_0214ce74(uVar3,5);
  FUN_0215d738(iVar4);
  return;
}


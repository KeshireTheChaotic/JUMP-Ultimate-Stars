
void FUN_02152e6c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  FUN_02152694(*(undefined4 *)(iVar4 + 0xb4));
  piVar2 = *(int **)(*(int *)(iVar4 + 0x70) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  piVar2 = *(int **)(*(int *)(iVar4 + 0x74) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  uVar5 = 0;
  while ((uVar5 < 300 && (*(char *)(iVar4 + 0xbc) == '\0'))) {
    (*DAT_020a0e18)();
    uVar5 = uVar5 + 1;
  }
  uVar3 = FUN_0214ce64();
  FUN_0214ce74(uVar3,*(undefined4 *)(iVar4 + 0xc4));
  FUN_02152cc4(iVar4,1);
  return;
}


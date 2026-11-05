
void FUN_0216889c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(*(int *)piVar1[0x19] + 0x70))();
  (**(code **)(*piVar1 + 0xc4))();
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar1 + 0x6c))(piVar1,DAT_0216ac78,0xffffffff);
  iVar2 = 0;
  do {
    FUN_02168674(0x14);
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
    (**(code **)(*piVar1 + 0x6c))(piVar1,DAT_0216ac70,0xffffffff);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_02168674(0x14);
  return;
}


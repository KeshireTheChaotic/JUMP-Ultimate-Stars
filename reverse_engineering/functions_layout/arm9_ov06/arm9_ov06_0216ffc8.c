
void FUN_0216ffc8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 4) + 0xec))();
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (piVar1[6] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = piVar1[6];
  }
  FUN_020282f4(*(undefined4 *)(iVar2 + 4));
  FUN_020282f4(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x18) + 0x8c) + 4));
  FUN_0216e5a0(param_1,*(undefined4 *)(param_1 + 0x2c));
  FUN_02083648(*(undefined4 *)(param_1 + 0x2c));
  return;
}


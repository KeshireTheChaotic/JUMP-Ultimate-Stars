
void FUN_02161888(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 10) = 1;
  if (*param_1 == 0) {
    return;
  }
  uVar1 = FUN_021618c8();
  piVar2 = *(int **)(*(int *)(param_1[2] + 4) + 100);
  (**(code **)(*piVar2 + 0x5c))(piVar2,uVar1);
  return;
}


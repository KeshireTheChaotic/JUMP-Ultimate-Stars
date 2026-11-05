
void FUN_0215214c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  for (; (int)param_2 < *(int *)(param_1 + 0x708); param_2 = param_2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + param_2 * 4 + 0x4c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    FUN_02152a40(param_1,param_2);
  }
  if ((int)param_2 < 6) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0x1a0))(piVar1,0,0,0x1a0,param_4);
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 4) + 0x19c))();
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 4) + 0x19c))(),
     param_2 < iVar2 + 5U)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0x1a0))(piVar1,param_2 - 5,0);
  }
  if ((int)param_2 < 5) {
    for (; (int)param_2 < 5; param_2 = param_2 + 1) {
      piVar1 = *(int **)(*(int *)(param_1 + param_2 * 4 + 0x4c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      FUN_02152a40(param_1,param_2);
    }
  }
  for (; (int)param_2 < 0x32; param_2 = param_2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + param_2 * 4 + 0x4c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
  (**(code **)(*piVar1 + 400))();
  (**(code **)(*piVar1 + 0x178))();
  *(undefined1 *)(piVar1[0x19] + 0x40) = 1;
  return;
}


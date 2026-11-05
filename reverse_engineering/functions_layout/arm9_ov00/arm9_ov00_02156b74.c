
void FUN_02156b74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],4);
    *(undefined1 *)((int)param_2 + 0x33) = 1;
    *(undefined1 *)(param_2 + 0xd) = 1;
  }
  param_2[8] = param_2[7];
  param_2[7] = param_2[7] + param_2[9];
  param_2[9] = param_2[9] + 5;
  FUN_02156b10(param_2);
  if ((*(char *)(param_2 + 0xd) != '\0') && (0 < (int)(param_2[7] - param_2[8]))) {
    *(undefined1 *)(param_2 + 0xd) = 0;
    (**(code **)(**(int **)(*(int *)(*(int *)(param_2[1] + 0xc) + 4) + 0x68) + 0xfc))();
  }
  if ((int)param_2[7] < 1) {
    return;
  }
  param_2[7] = 0;
  param_2[9] = 0;
  *(undefined1 *)((int)param_2 + 0x33) = 0;
  *(undefined1 *)((int)param_2 + 0x31) = 1;
  *param_2 = FUN_02156c48;
  return;
}


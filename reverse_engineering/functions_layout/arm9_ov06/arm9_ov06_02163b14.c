
void FUN_02163b14(int *param_1)

{
  int iVar1;
  
  if ((short)param_1[4] != 0) {
    *(short *)(param_1 + 4) = (short)param_1[4] + -1;
    if ((short)param_1[4] == 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0xfc))();
      return;
    }
    return;
  }
  iVar1 = FUN_02163bc8(*(undefined4 *)(*param_1 + 0xc),0);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    *(undefined2 *)(param_1 + 4) = ((undefined2 *)param_1[3])[1];
    *(undefined1 *)((int)param_1 + 0x12) = 1;
    FUN_0216383c(param_1);
    FUN_0207342c(0x7a,0x4d);
    return;
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)param_1[3];
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  FUN_0216383c(param_1);
  return;
}


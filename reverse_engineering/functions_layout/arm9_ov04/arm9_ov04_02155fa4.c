
void FUN_02155fa4(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x19) != '\0') {
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    FUN_02023894(*(undefined4 *)(param_1[2] + 4),0,0);
    (**(code **)(**(int **)(*(int *)(param_1[2] + 4) + 0x68) + 0x6c))();
  }
  *(undefined1 *)(param_1 + 6) = 0xff;
  FUN_02156014(param_1);
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_021561a0);
  return;
}


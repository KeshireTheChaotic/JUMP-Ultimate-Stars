
void FUN_021cbf38(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (int *)0x0) && (*(char *)((int)param_1 + 5) == '\0')) {
    *(undefined1 *)((int)param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_021cc7fc,param_3,param_4,param_4);
  }
  return;
}


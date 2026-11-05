
void FUN_02155f78(int *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  *(char *)(param_1 + 6) = param_2 + '\x01';
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_021561a4,param_3,param_4,param_4);
  return;
}



void FUN_021568f0(int *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 5) = 2;
  *(char *)((int)param_1 + 0x15) = param_2 + '\x01';
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02156bbc,2,param_4,param_4);
  return;
}


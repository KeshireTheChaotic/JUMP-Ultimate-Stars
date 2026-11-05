
void FUN_027e8eb0(undefined4 *param_1,undefined2 param_2)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = param_2;
  return;
}


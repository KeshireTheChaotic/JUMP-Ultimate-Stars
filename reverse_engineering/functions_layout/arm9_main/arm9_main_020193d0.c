
void FUN_020193d0(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = param_4;
  *(undefined2 *)((int)param_1 + 6) = param_2;
  param_1[2] = param_5;
  param_1[3] = param_6;
  return;
}


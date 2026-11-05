
void FUN_02073e90(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 code *param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[8] = 0;
  *(code **)(param_1 + 0xc) = param_5;
  (*param_5)();
  return;
}


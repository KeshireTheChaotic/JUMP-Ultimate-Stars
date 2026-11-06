
void FUN_02159c90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[3] = FUN_02159d78;
  param_1[1] = FUN_02159d78;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}


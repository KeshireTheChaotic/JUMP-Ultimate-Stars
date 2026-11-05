
void FUN_02051dc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  (&DAT_020aab28)[param_1 * 3] = param_2;
  (&DAT_020aab30)[param_1 * 3] = param_3;
  FUN_02051d5c(1 << (param_1 + 3U & 0xff));
  (&DAT_020aab2c)[param_1 * 3] = 1;
  return;
}


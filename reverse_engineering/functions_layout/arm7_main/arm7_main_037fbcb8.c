
void FUN_037fbcb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  (&DAT_03808280)[param_1 * 3] = param_2;
  (&DAT_03808288)[param_1 * 3] = param_3;
  FUN_037fbc4c(1 << (param_1 + 3U & 0xff));
  (&DAT_03808284)[param_1 * 3] = 1;
  return;
}



void FUN_03801da8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 1) {
    (&DAT_03808fe8)[param_2 + param_1 * 0x24] = (char)param_3;
  }
  else if (param_4 == 2) {
    *(short *)(&DAT_03808fe8 + param_2 + param_1 * 0x24) = (short)param_3;
  }
  else if (param_4 == 4) {
    *(undefined4 *)(&DAT_03808fe8 + param_2 + param_1 * 0x24) = param_3;
  }
  return;
}


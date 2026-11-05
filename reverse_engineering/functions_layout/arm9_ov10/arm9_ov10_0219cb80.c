
void FUN_0219cb80(int param_1,uint param_2)

{
  *(byte *)(DAT_0214ccf8 + 100 + param_1) =
       *(byte *)(DAT_0214ccf8 + 100 + param_1) | (byte)(1 << (param_2 & 0xff));
  return;
}


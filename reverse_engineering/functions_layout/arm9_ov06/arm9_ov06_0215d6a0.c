
void FUN_0215d6a0(int param_1,uint param_2)

{
  *(char *)(param_1 + 0x5c) = (char)((int)(param_2 & 0xf0) >> 4);
  *(byte *)(param_1 + 0x5d) = (byte)param_2 & 0xf;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return;
}


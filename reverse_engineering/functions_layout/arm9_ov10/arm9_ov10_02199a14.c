
void FUN_02199a14(short *param_1)

{
  if (*param_1 == 0x12) {
    DAT_021aa0bc = (uint)(ushort)param_1[1];
    if (param_1[1] == 0) {
      FUN_02198878();
    }
    FUN_02053210(&DAT_021aa09c);
  }
  return;
}


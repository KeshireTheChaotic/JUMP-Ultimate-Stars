
void FUN_021612b4(uint param_1,short *param_2)

{
  *param_2 = *(short *)(DAT_0216e7e8 + 0x10);
  param_2[2] = *param_2 + 0xc;
  if (param_1 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 1:
      param_2[1] = *(short *)(DAT_0216e7e8 + 0x12) + (ushort)*(byte *)(DAT_0216e7e8 + 0x1a);
      param_2[3] = param_2[1] + (ushort)(byte)(&DAT_0216ad34)[*(byte *)(DAT_0216e7e8 + 0x1b)];
      return;
    case 2:
      param_2[1] = *(short *)(DAT_0216e7e8 + 0x12) + -0xd;
      param_2[3] = *(short *)(DAT_0216e7e8 + 0x12);
      return;
    case 3:
      param_2[1] = *(short *)(DAT_0216e7e8 + 0x12) + (ushort)*(byte *)(DAT_0216e7e8 + 0x19);
      param_2[3] = param_2[1] + 0xd;
      return;
    case 4:
      param_2[1] = *(short *)(DAT_0216e7e8 + 0x12);
      param_2[3] = param_2[1] + (ushort)*(byte *)(DAT_0216e7e8 + 0x19);
    }
  }
  return;
}



void FUN_0207231c(uint param_1)

{
  if (param_1 < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      DAT_020b0b90 = DAT_020b0b90 & 0xfffeffff;
      FUN_02073114(0x8d8,4);
      break;
    case 1:
      DAT_020b0b90 = DAT_020b0b90 & 0xfffdffff;
      FUN_02073114(0x8d8,4);
      break;
    case 2:
      DAT_020b0b90 = DAT_020b0b90 & 0xfffbffff;
      FUN_02073114(0x8d8,4);
      break;
    case 3:
      DAT_020b0b90 = DAT_020b0b90 & 0xfff7ffff;
      FUN_02073114(0x8d8,4);
    }
  }
  *(undefined1 *)(param_1 * 0xca4 + 0x20b4dac) = 0;
  DAT_020b02ac = 1;
  FUN_02073114(param_1 * 0xca4 + 0x4af4);
  return;
}


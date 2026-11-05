
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02065660(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":4,"GX_2D_main":1}
                       io=["04000060","04000240","04000241","04000242","04000243"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afba8);
  if (param_1 == 0) {
    _DAT_04000060 = _DAT_04000060 & 0xcffe;
  }
  else {
    _DAT_04000060 = _DAT_04000060 & 0xcfff | 1;
    switch(param_1) {
    case 5:
      DAT_04000240 = 0x83;
      DAT_04000242 = 0x8b;
      break;
    case 8:
      DAT_04000243 = 0x83;
      break;
    case 9:
      DAT_04000240 = 0x83;
      DAT_04000243 = 0x8b;
      break;
    case 10:
      DAT_04000241 = 0x83;
      DAT_04000243 = 0x8b;
      break;
    case 0xb:
      DAT_04000240 = 0x83;
      DAT_04000241 = 0x8b;
      DAT_04000243 = 0x93;
      break;
    case 0xc:
      DAT_04000243 = 0x8b;
    case 4:
      DAT_04000242 = 0x83;
      break;
    case 0xd:
      DAT_04000240 = 0x83;
      DAT_04000242 = 0x8b;
      DAT_04000243 = 0x93;
      break;
    case 0xe:
      DAT_04000243 = 0x93;
    case 6:
      DAT_04000242 = 0x8b;
    case 2:
      DAT_04000241 = 0x83;
      break;
    case 0xf:
      DAT_04000243 = 0x9b;
    case 7:
      DAT_04000242 = 0x93;
    case 3:
      DAT_04000241 = 0x8b;
    case 1:
      DAT_04000240 = 0x83;
    }
  }
  DAT_020afba8 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}


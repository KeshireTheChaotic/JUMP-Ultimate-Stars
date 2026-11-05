
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065e4c(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"GX_2D_sub":2} io=["04001000","0400100c"] */
  uVar1 = (_DAT_0400100c & 0x1f00) >> 8;
  switch(_DAT_04001000 & 7) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    return uVar1 * 0x800 + 0x6200000;
  case 5:
    break;
  case 6:
    return 0;
  default:
    return 0;
  }
  if ((_DAT_0400100c & 0x80) == 0) {
    return uVar1 * 0x800 + 0x6200000;
  }
  return uVar1 * 0x4000 + 0x6200000;
}


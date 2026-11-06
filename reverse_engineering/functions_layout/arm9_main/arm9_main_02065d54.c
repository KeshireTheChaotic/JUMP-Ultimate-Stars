
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02065d54(void)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"GX_2D_sub":2} io=["04001000","0400100e"] */
  if ((_DAT_04001000 & 7) < 7) {
    uVar1 = (*(code *)((int)&switchD_02065d78::switchdataD_02065d7a +
                      (int)(short)(&switchD_02065d78::switchdataD_02065d7a)[_DAT_04001000 & 7]))
                      ((uint)_DAT_0400100e,
                       (code *)((int)&switchD_02065d78::switchdataD_02065d7a +
                               (int)(short)(&switchD_02065d78::switchdataD_02065d7a)
                                           [_DAT_04001000 & 7]),(_DAT_0400100e & 0x1f00) >> 8);
    return uVar1;
  }
  return 0;
}


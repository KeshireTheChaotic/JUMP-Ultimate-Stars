
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ea51c(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808006"] */
  iVar1 = _DAT_0380fff4;
  *(short *)(_DAT_0380fff4 + 0x352) = (short)param_1;
  if ((param_1 == 0) || (*(short *)(iVar1 + 0x32e) == 1)) {
    _DAT_04808006 = _DAT_04808006 & 0xffbf;
    FUN_027eaff8(*(undefined2 *)(iVar1 + 0x33c),0);
  }
  else {
    _DAT_04808006 = _DAT_04808006 | 0x40;
  }
  return 0;
}


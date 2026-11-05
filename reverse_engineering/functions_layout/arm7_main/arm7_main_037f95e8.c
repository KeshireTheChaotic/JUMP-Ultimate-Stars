
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f95e8(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808010"] */
  iVar1 = _DAT_0380fff4;
  _DAT_04808010 = 0x8000;
  if ((((*(short *)(_DAT_0380fff4 + 0x34c) == 0x40) && (*(short *)(_DAT_0380fff4 + 0x3c2) != 0)) &&
      (*(short *)(_DAT_0380fff4 + 0x3b6) == *(short *)(_DAT_0380fff4 + 0x3b4))) &&
     (*(short *)(_DAT_0380fff4 + 0x3c4) = *(short *)(_DAT_0380fff4 + 0x3c4) + 1,
     *(ushort *)(iVar1 + 0x3c2) < *(ushort *)(iVar1 + 0x3c4))) {
    *(undefined2 *)(iVar1 + 0x3c4) = 0;
    FUN_037f85f8(1,0xd);
  }
  *(undefined2 *)(iVar1 + 0x354) = 1;
  return;
}


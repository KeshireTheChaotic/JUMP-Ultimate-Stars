
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb1e8(uint param_1)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808006"] */
  iVar1 = _DAT_0380fff4;
  if (3 < param_1) {
    return 5;
  }
  *(short *)(_DAT_0380fff4 + 0x334) = (short)param_1;
  if (param_1 == 0) {
    *(ushort *)(iVar1 + 0x3c0) = *(ushort *)(iVar1 + 0x3c0) & 0xffef;
    *(ushort *)(iVar1 + 0x3ce) = *(ushort *)(iVar1 + 0x3ce) & 0xbfff;
  }
  else {
    *(ushort *)(iVar1 + 0x3c0) = *(ushort *)(iVar1 + 0x3c0) | 0x10;
    *(ushort *)(iVar1 + 0x3ce) = *(ushort *)(iVar1 + 0x3ce) | 0x4000;
  }
  if ((*(short *)(iVar1 + 0x34c) == 0x40) && (param_1 == 1)) {
    *(undefined2 *)(*(int *)(_DAT_0380fff4 + 0x4ac) + 0x2e) = *(undefined2 *)(iVar1 + 0x3c0);
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  _DAT_04808006 = _DAT_04808006 & 0xffc7 | (ushort)(param_1 << 3);
  return 0;
}


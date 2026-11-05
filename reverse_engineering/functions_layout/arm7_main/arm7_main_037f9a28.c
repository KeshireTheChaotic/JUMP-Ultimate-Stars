
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9a28(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  
                    /* JUS-TAG hw={"WIRELESS":3} io=["04808010","04808032","0480819c"] */
  _DAT_04808010 = 8;
  if (((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0x1f) >> 4 != 0) && ((_DAT_0480819c & 1) == 0)) {
    _DAT_04808290 = _DAT_04808290 ^ 1;
  }
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) {
    iVar2 = _DAT_0380fff4 + 0x42c;
    uVar3 = 0;
    psVar5 = (short *)(_DAT_0380fff4 + 0x3fe);
    do {
      if ((((*(short *)(iVar2 + uVar3 * 0x14) != 0) &&
           (iVar1 = *(int *)(iVar2 + uVar3 * 0x14 + 8), (*(ushort *)(iVar1 + 0xc) & 0x4000) != 0))
          && ((*(ushort *)(iVar1 + 4) & 0xff) != 0)) &&
         ((psVar4 = (short *)(iVar1 + (uint)*(ushort *)(iVar1 + 10) + 5 & 0xfffffffe), *psVar4 == 0
          && (psVar4[1] == 0)))) {
        *(undefined2 *)(iVar1 + 4) = 0;
        _DAT_04808032 = 0x8000;
        *psVar5 = *psVar5 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
  }
  return;
}


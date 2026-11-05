
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027f50c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
                    /* JUS-TAG hw={"WIRELESS":3} io=["04804004","04808094","04808098"] */
  iVar1 = _DAT_0380fff4;
  if (*(short *)(_DAT_0380fff4 + 0x34c) == 0x40) {
    iVar3 = FUN_027e9cfc(param_1 + 0x1e,_DAT_0380fff4 + 0x3a8);
    if ((iVar3 == 0) || (iVar3 = FUN_027e9cfc(param_1 + 0x24,iVar1 + 0x3c6), iVar3 == 0)) {
      uVar2 = 1;
    }
    else {
      if ((1 << (*(ushort *)(iVar1 + 0x3ae) & 0xff) & 0xffffU & (uint)*(ushort *)(param_1 + 0x2e))
          == 0) {
        *(undefined2 *)(iVar1 + 0x4e2) = 0;
      }
      else {
        *(undefined2 *)(iVar1 + 0x4e2) = 0x2000;
      }
      if (((_DAT_04808098 & 0x8000) != 0) &&
         (*(short *)(&DAT_04804004 + (_DAT_04808098 & 0x7fff) * 2) != 0)) {
        *(ushort *)(iVar1 + 0x4e2) = *(ushort *)(iVar1 + 0x4e2) | 0x4000;
      }
      FUN_027ec3fc(*(undefined2 *)(iVar1 + 0x3cc));
      *(short *)(param_1 + 6) = *(short *)(param_1 + 0x10) + -0x1c;
      *(undefined2 *)(param_1 + -4) = 0x182;
      *(short *)(param_1 + -2) = (short)(*(ushort *)(param_1 + 6) + 0x31 >> 1);
      iVar3 = 0;
      for (uVar4 = (uint)*(ushort *)(param_1 + 0x2e); uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((uVar4 & 1) != 0) {
          iVar3 = iVar3 + 1;
        }
      }
      *(ushort *)(param_1 + 8) =
           *(ushort *)(param_1 + 8) |
           *(ushort *)(iVar1 + 0x4e2) | (ushort)((int)(_DAT_04808098 & 0x8000) >> 4) |
           (ushort)((int)(_DAT_04808094 & 0x8000) >> 3);
      *(short *)(param_1 + 10) =
           *(short *)(param_1 + 0xc) +
           (short)(iVar3 * (*(ushort *)(param_1 + 0x2c) + 10) + 0xfc >> 4);
      FUN_037f8e64(_DAT_0380fff4 + 0x188);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


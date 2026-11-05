
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027f4dec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808094","04808098"] */
  iVar3 = _DAT_0380fff4;
  if (*(short *)(_DAT_0380fff4 + 0x34c) == 0x40) {
    iVar2 = FUN_027e9cfc(param_1 + 0x1e,_DAT_0380fff4 + 0x3a8);
    if ((iVar2 == 0) || (iVar3 = FUN_027e9cfc(param_1 + 0x24,iVar3 + 0x3c6), iVar3 == 0)) {
      uVar1 = 1;
    }
    else {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 0x10) + -0x1c;
      *(undefined2 *)(param_1 + -4) = 0x185;
      *(undefined2 *)(param_1 + -2) = 0x18;
      *(ushort *)(param_1 + 8) =
           *(ushort *)(param_1 + 8) |
           *(ushort *)(_DAT_0380fff4 + 0x4e2) | (ushort)((int)(_DAT_04808098 & 0x8000) >> 4) |
           (ushort)((int)(_DAT_04808094 & 0x8000) >> 3);
      FUN_037f8e64(_DAT_0380fff4 + 0x188);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


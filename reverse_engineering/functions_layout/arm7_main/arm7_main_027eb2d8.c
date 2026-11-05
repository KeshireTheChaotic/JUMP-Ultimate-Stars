
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb2d8(uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808006"] */
  if (param_1 < 4) {
    uVar1 = (ushort)param_1;
    *(ushort *)(_DAT_0380fff4 + 0x32e) = uVar1;
    *(ushort *)(_DAT_0380fff4 + 0x350) = uVar1;
    _DAT_04808006 = _DAT_04808006 & 0xfff8 | uVar1;
    FUN_027ea51c(*(undefined2 *)(_DAT_0380fff4 + 0x352));
    *(uint *)(_DAT_0380fff4 + 0x340) = *(uint *)(_DAT_0380fff4 + 0x340) | 8;
    uVar2 = 0;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}


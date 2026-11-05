
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fa418(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"WIRELESS":3} io=["04808010","048080b6","04808214"] */
  _DAT_04808010 = 0x1000;
  if (*(short *)(_DAT_0380fff4 + 0x468) != 0) {
    if (((((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x10) != 0) && (param_1 != 0)) &&
        ((_DAT_04808214 == 3 || (_DAT_04808214 == 5)))) && (_DAT_048080b6 == 0)) {
      iVar2 = *(int *)(_DAT_0380fff4 + 0x470);
      iVar3 = 0;
      for (uVar1 = (uint)*(ushort *)(iVar2 + 2); uVar1 != 0; uVar1 = uVar1 >> 1) {
        iVar3 = iVar3 + (uVar1 & 1);
      }
      FUN_027e954c(iVar3 * (*(ushort *)(iVar2 + 0x24) + 10) + 0xc0 +
                   (uint)*(ushort *)(iVar2 + 10) * 4 & 0xffff,FUN_037fa92c);
      *(short *)(_DAT_0380fff4 + 0x400) = *(short *)(_DAT_0380fff4 + 0x400) + 1;
      return;
    }
    FUN_037f85f8(0,0x10);
  }
  return;
}


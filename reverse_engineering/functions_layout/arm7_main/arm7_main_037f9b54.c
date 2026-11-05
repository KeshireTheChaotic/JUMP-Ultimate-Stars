
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9b54(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = _DAT_048081a8;
                    /* JUS-TAG hw={"WIRELESS":11}
                       io=["04808010","04808030","04808032","04808050","04808052","04808054","04808056","0480805a","048080b0","0480819c","048081a8"]
                        */
  iVar3 = _DAT_0380fff4;
  _DAT_04808010 = 4;
  if (((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) && ((_DAT_048081a8 & 0x400) != 0)) {
    if ((((((_DAT_048080b0 & 1) == 0) || (*(short *)(_DAT_0380fff4 + 0x42c) == 0)) &&
         (((_DAT_048080b0 & 4) == 0 || (*(short *)(_DAT_0380fff4 + 0x440) == 0)))) &&
        (((_DAT_048080b0 & 8) == 0 || (*(short *)(_DAT_0380fff4 + 0x454) == 0)))) &&
       ((_DAT_0480819c & 1) == 0)) {
      _DAT_04808032 = 0x8000;
      *(undefined2 *)(_DAT_0380fff4 + 0x4de) = 0;
    }
    else {
      uVar1 = *(ushort *)(_DAT_0380fff4 + 0x4de);
      *(ushort *)(_DAT_0380fff4 + 0x4de) = uVar1 + 1;
      if (0xc < uVar1) {
        *(undefined2 *)(iVar3 + 0x4de) = 0;
        _DAT_04808032 = 0x8000;
        *(short *)(_DAT_0380fff4 + 0x3fe) = *(short *)(_DAT_0380fff4 + 0x3fe) + 1;
      }
    }
  }
  if (((*(ushort *)(_DAT_0380fff4 + 0x690) & 1) != 0) && ((uVar2 & 0x60) != 0)) {
    uVar4 = (uint)_DAT_04808054;
    iVar3 = FUN_038078c0(_DAT_04808052 - 0x4000,2);
    if ((iVar3 <= (int)uVar4) ||
       (iVar3 = FUN_038078c0(_DAT_04808050 - 0x4000,2), (int)uVar4 < iVar3)) {
      _DAT_04808056 = _DAT_0480805a;
      _DAT_04808030 = 0x8001;
    }
    FUN_027e9090();
  }
  return;
}


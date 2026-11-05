
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9d18(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
                    /* JUS-TAG hw={"WIRELESS":11}
                       io=["04805f70","04805f72","04808010","04808048","048080ae","048080b0","048080b4","048080b8","0480819c","0480824c","0480824e"]
                        */
  iVar1 = _DAT_0380fff4;
  _DAT_04808010 = 2;
  if (*(short *)(_DAT_0380fff4 + 0x34c) == 0x12) {
    FUN_027ef400();
  }
  else {
    uVar5 = _DAT_048080b8 & 0xf00;
    if (uVar5 == 0x300) {
      if ((*(uint *)(_DAT_0380fff4 + 0x4b8) & 2) != 0) {
        FUN_037fa858();
      }
      *(int *)(_DAT_0380fff4 + 0x558) = *(int *)(_DAT_0380fff4 + 0x558) + 1;
      FUN_037f85f8(0,8);
    }
    else if (uVar5 == 0x800) {
      if (*(ushort *)(_DAT_0380fff4 + 0x4ca) <=
          (*(ushort *)(*(int *)(_DAT_0380fff4 + 0x470) + 4) & 0xff)) {
        _DAT_048080ac = 2;
        *(short *)(_DAT_0380fff4 + 0x4d4) = *(short *)(_DAT_0380fff4 + 0x4d4) + 1;
      }
      *(short *)(*(int *)(iVar1 + 0x4bc) + 0x18) = *(short *)(*(int *)(iVar1 + 0x4bc) + 0x18) + 1;
    }
    else if (uVar5 == 0xb00) {
      _DAT_04805f70 = 0xffff;
      _DAT_04805f72 = 0xffff;
      _DAT_0480824c = 0xffff;
      _DAT_0480824e = 0xffff;
      uVar4 = (uint)*(ushort *)(_DAT_0380fff4 + 0x4c4);
      uVar3 = (uint)*(ushort *)(*(int *)(_DAT_0380fff4 + 0x470) + 2);
      iVar2 = *(int *)(_DAT_0380fff4 + 0x4bc) + 0x1a;
      if (((1 < uVar3) && ((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0x1f) >> 4 != 0)) &&
         ((_DAT_0480819c & 1) == 0)) {
        _DAT_04808290 = _DAT_04808290 ^ 1;
      }
      if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x40) != 0) {
        while (1 < uVar3) {
          uVar3 = uVar3 >> 1;
          if ((uVar3 & 1) != 0) {
            *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
          }
          uVar4 = uVar4 >> 1;
          if ((uVar4 & 1) != 0) {
            iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(iVar1 + 0x4bc) + 0x16);
          }
        }
      }
    }
    if ((uVar5 != 0x800) && ((_DAT_048080b0 & 2) == 0)) {
      if (*(short *)(iVar1 + 0x468) != 0) {
        _DAT_048080b4 = 2;
        _DAT_04808048 = 0;
        if ((_DAT_04808010 & 0x1000) == 0) {
          FUN_037fa418();
        }
        else {
          *(short *)(iVar1 + 0x4d8) = *(short *)(iVar1 + 0x4d8) + 1;
        }
        *(short *)(iVar1 + 0x4d6) = *(short *)(iVar1 + 0x4d6) + 1;
      }
      _DAT_048080ae = 2;
    }
    FUN_037f85f8(0,0xe);
  }
  return;
}


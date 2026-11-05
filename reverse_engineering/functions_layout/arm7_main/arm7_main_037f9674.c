
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9674(void)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar4 = _DAT_0380fff4;
                    /* JUS-TAG hw={"WIRELESS":5}
                       io=["04808010","048080ae","048080b6","04808118","04808134"] */
  uVar3 = _DAT_0380fff0;
  iVar7 = _DAT_0380fff4 + 0x42c;
  _DAT_04808010 = 0x4000;
  sVar2 = *(short *)(_DAT_0380fff4 + 0x350);
  if (sVar2 == 1) {
    iVar7 = *(int *)(_DAT_0380fff4 + 0x4ac) + (uint)*(ushort *)(_DAT_0380fff4 + 0x3da);
    FUN_027e93d0(iVar7 + 0x2c,_DAT_0380fff0 & 0xff);
    FUN_027e93d0(iVar7 + 0x2d,uVar3 >> 8);
    if (*(short *)(iVar4 + 0x352) == 1) {
      _DAT_04808134 = *(short *)(iVar4 + 0x33c) + _DAT_04808134 + 1;
    }
    *(ushort *)(_DAT_0380fff4 + 0x530) =
         ~*(ushort *)(_DAT_0380fff4 + 0x52e) | *(ushort *)(_DAT_0380fff4 + 0x532);
    if (((_DAT_048080b6 & 0x18) == 0) && ((_DAT_048080b6 & 6) != 2)) {
      *(uint *)(iVar4 + 0x4b8) = *(uint *)(iVar4 + 0x4b8) | 2;
    }
    else {
      *(uint *)(iVar4 + 0x4b8) = *(uint *)(iVar4 + 0x4b8) & 0xfffffffd;
      FUN_037fa858();
    }
  }
  else {
    if (sVar2 == 2) {
      if (*(short *)(_DAT_0380fff4 + 0x356) == 0) {
        _DAT_04808134 = -1;
      }
      else {
        _DAT_04808134 = *(short *)(_DAT_0380fff4 + 0x33c) + _DAT_04808134 + 1;
      }
      if (*(short *)(_DAT_0380fff4 + 0x35e) == 2) {
        FUN_027ea4f0(2);
      }
    }
    else if (sVar2 != 3) {
      _DAT_04808010 = 0x4000;
      return;
    }
    if (*(short *)(iVar4 + 0x34c) == 0x40) {
      bVar8 = *(short *)(iVar4 + 0x3b6) == 1;
      if ((*(short *)(iVar4 + 0x358) != 0) &&
         ((*(short *)(iVar4 + 0x3ba) == 1 ||
          ((*(short *)(iVar4 + 0x3ba) == 0 && (*(short *)(iVar4 + 0x3b8) == 1)))))) {
        bVar8 = true;
      }
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      _DAT_04808038 = _DAT_04808038 | 1;
    }
    else {
      _DAT_04808038 = _DAT_04808038 & 0xfffe;
    }
    if (10 < _DAT_04808118) {
      *DAT_037f9968 = 0;
    }
    *(short *)(iVar4 + 0x3b6) = *(short *)(iVar4 + 0x3b6) + -1;
    if (*(short *)(iVar4 + 0x3b6) == 0) {
      *(undefined2 *)(iVar4 + 0x3b6) = *(undefined2 *)(iVar4 + 0x3b4);
    }
    sVar2 = *(short *)(iVar4 + 0x3ba);
    *(short *)(iVar4 + 0x3ba) = sVar2 + -1;
    if (sVar2 == 0) {
      *(short *)(iVar4 + 0x3ba) = *(short *)(iVar4 + 0x3b8) + -1;
    }
    uVar6 = 0;
    do {
      iVar5 = iVar7 + uVar6 * 0x14;
      if ((*(short *)(iVar7 + uVar6 * 0x14) != 0) && (*(short *)(*(int *)(iVar5 + 0xc) + 8) == 0)) {
        uVar1 = *(int *)(iVar4 + 0x3ec) - (uint)*(ushort *)(*(int *)(iVar5 + 0xc) + 4) & 0xffff;
        if (((*(ushort *)(iVar4 + 0x3d0) < uVar1) &&
            ((*(ushort *)(*(int *)(iVar5 + 8) + 0xc) & 0xf) >> 2 != 0)) ||
           ((uint)*(ushort *)(iVar4 + 0x3d0) * 8 < uVar1)) {
          FUN_027f1908(uVar6);
          **(undefined2 **)(iVar5 + 8) = 2;
          FUN_037f85f8(0,0xe);
          *(short *)(iVar4 + 0x4da) = *(short *)(iVar4 + 0x4da) + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    _DAT_048080ae = 0xd;
  }
  return;
}


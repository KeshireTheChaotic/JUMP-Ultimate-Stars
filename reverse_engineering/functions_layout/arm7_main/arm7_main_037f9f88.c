
/* WARNING: Removing unreachable block (ram,0x037fa01c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9f88(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  short *psVar17;
  undefined8 uVar18;
  
                    /* JUS-TAG hw={"WIRELESS":11}
                       io=["04804000","04805f7e","04808010","04808028","04808054","0480805a","04808098","048080f8","048080fa","0480824c","0480824e"]
                        */
  iVar11 = _DAT_0380fff4;
  psVar17 = (short *)(_DAT_0380fff4 + 0x4dc);
  uVar1 = *(ushort *)(_DAT_0380fff4 + 0x690);
  _DAT_04808010 = 1;
  if (*(short *)(_DAT_0380fff4 + 0x350) == 0) {
    _DAT_0480805a = _DAT_04808054;
  }
  do {
    uVar2 = _DAT_04808054;
    uVar15 = (uint)*(ushort *)(iVar11 + 0x4e0);
    uVar14 = (uint)_DAT_04808054;
    if (uVar15 == uVar14) {
LAB_037fa360:
      uVar2 = _DAT_04808054;
      if ((((uVar1 & 1) != 0) && (iVar11 = FUN_037fa9c0(), iVar11 != 0)) && (uVar2 == _DAT_04808054)
         ) {
        FUN_027e904c(0x20);
      }
      if (_DAT_0480805a != _DAT_04808054) {
        FUN_037f85f8(0,0xf);
      }
      return;
    }
    uVar3 = _DAT_048080f8 >> 4;
    uVar4 = _DAT_048080fa << 0xc;
    if ((0x8c5 < uVar15) && (uVar15 < 0x8f0)) {
      FUN_027e9e08();
    }
    iVar10 = uVar15 * 2;
    puVar16 = (ushort *)(&DAT_04804000 + iVar10);
    puVar5 = (ushort *)FUN_037fa998(&DAT_04804002 + iVar10);
    puVar6 = (ushort *)FUN_037fa998(puVar5 + 1);
    puVar7 = (ushort *)FUN_037fa998(puVar6 + 2);
    puVar8 = (ushort *)FUN_037fa998(&DAT_0480400e + iVar10);
    *(ushort *)(&DAT_04804000 + uVar15 * 2) =
         *(ushort *)(&DAT_04804000 + uVar15 * 2) | (*puVar5 & 0x200) << 1;
    *puVar6 = uVar3 | uVar4;
    uVar12 = (uint)*puVar7;
    uVar15 = (uVar12 + uVar15 * 2 + 0xf >> 2) * 2;
    if (0xfaf < uVar15) {
      uVar15 = uVar15 - (*(ushort *)(iVar11 + 0x3de) >> 1);
    }
    if (uVar12 < 0x92d) {
      if (((uVar1 & 1) != 0) && (uVar15 != uVar14)) {
        if (&DAT_04804000 + uVar15 * 2 < (undefined1 *)0x4805f5a) {
          uVar4 = *(ushort *)(uVar15 * 2 + 0x4804006) & 0xff;
        }
        else {
          uVar4 = *(ushort *)(&DAT_04804000 + uVar15 * 2 + (6 - (uint)*(ushort *)(iVar11 + 0x3de)));
        }
        if (((*(ushort *)(&DAT_04804000 + uVar15 * 2) & 0x7c00) != 0) ||
           (((uVar4 != 10 && (uVar4 != 0x14)) || (0xfff < uVar12)))) {
          *(short *)(iVar11 + 0x3f8) = *(short *)(iVar11 + 0x3f8) + 1;
          *puVar16 = 0xffff;
          *(ushort *)(iVar11 + 0x4e0) = uVar2;
          *puVar5 = uVar2;
          goto LAB_037fa360;
        }
      }
    }
    else {
      *puVar16 = 0xffff;
      *(short *)(iVar11 + 0x3f8) = *(short *)(iVar11 + 0x3f8) + 1;
      uVar15 = uVar14;
    }
    if ((*puVar16 & 0xf) == 0xc) {
      puVar6 = (ushort *)FUN_037fa998(&DAT_0480400c + iVar10);
      uVar2 = *puVar6;
      psVar9 = (short *)FUN_037fa998(iVar10 + 0x4804022);
      sVar13 = *psVar9;
      if ((*psVar17 == sVar13) && ((uVar2 & 0x800) != 0)) {
        *(int *)(_DAT_0380fff4 + 0x57c) = *(int *)(_DAT_0380fff4 + 0x57c) + 1;
        *puVar16 = 0xffff;
      }
      else if (((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xff) >> 7 == 0) &&
              (*(short *)(_DAT_0380fff4 + 0x34c) == 0x40)) {
        if ((_DAT_04808028 == 0) || ((_DAT_04808098 & 0x8000) == 0)) {
          sVar13 = -1;
          _DAT_04805f7e = 0xffff;
          _DAT_0480824c = 0xffff;
          _DAT_0480824e = 0xffff;
          *puVar16 = 0xffff;
        }
        else {
          FUN_037fd998(_DAT_0380fff4 + 0x660);
          uVar18 = FUN_038076b8((int)((ulonglong)*puVar8 * 0x82ea >> 6),0,1000,0);
          FUN_037fdaa4(_DAT_0380fff4 + 0x660,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),
                       FUN_027ea0e4,0);
        }
      }
      *psVar17 = sVar13;
      iVar10 = FUN_037fa9c0();
      if (iVar10 == 0) {
        *(int *)(_DAT_0380fff4 + 0x5a8) = *(int *)(_DAT_0380fff4 + 0x5a8) + 1;
      }
    }
    else if ((((*puVar16 & 0xf) == 0xd) && ((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xff) >> 7 == 0))
            && ((*(short *)(_DAT_0380fff4 + 0x34c) == 0x40 &&
                ((_DAT_04808028 == 0 || ((_DAT_04808098 & 0x8000) == 0)))))) {
      *puVar16 = 0xffff;
    }
    *(ushort *)(iVar11 + 0x4e0) = (ushort)uVar15;
    *puVar5 = (ushort)uVar15;
  } while( true );
}


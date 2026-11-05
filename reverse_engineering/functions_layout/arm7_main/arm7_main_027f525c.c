
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f525c(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_r5;
  int iVar6;
  
  iVar3 = _DAT_0380fff4;
  iVar6 = *(int *)(_DAT_0380fff4 + 0x1c4);
  if (iVar6 == -1) {
    return;
  }
  if (*(short *)(_DAT_0380fff4 + 0x34c) != 0x40) {
    FUN_037f89b8(_DAT_0380fff4 + 0x1c4,iVar6);
    return;
  }
  if ((*(ushort *)(iVar6 + 0x24) & 0x1ff) >> 8 == 0) {
    if ((*(ushort *)(iVar6 + 0x28) & 1) == 0) {
      *(int *)(_DAT_0380fff4 + 0x564) = *(int *)(_DAT_0380fff4 + 0x564) + 1;
    }
    else {
      *(int *)(_DAT_0380fff4 + 0x568) = *(int *)(_DAT_0380fff4 + 0x568) + 1;
    }
  }
  else if ((*(ushort *)(iVar6 + 0x34) & 1) == 0) {
    *(int *)(_DAT_0380fff4 + 0x564) = *(int *)(_DAT_0380fff4 + 0x564) + 1;
  }
  else {
    *(int *)(_DAT_0380fff4 + 0x568) = *(int *)(_DAT_0380fff4 + 0x568) + 1;
  }
  iVar4 = FUN_038078c0(*(ushort *)(iVar6 + 0x18) & 0xf0,0x10);
  *(int *)(iVar3 + 0x560) = *(int *)(iVar3 + 0x560) + iVar4 + -1;
  bVar2 = true;
  sVar1 = *(short *)(iVar3 + 0x350);
  if (sVar1 == 1) {
    if ((*(ushort *)(iVar6 + 0x24) & 1) == 0) {
      unaff_r5 = FUN_027ec8d4(iVar6 + 0x2e);
      if ((unaff_r5 == 0xff) || (iVar4 = FUN_027ec2bc(), iVar4 != 0x40)) {
        iVar4 = FUN_027ec2bc(unaff_r5);
        if (iVar4 == 0x30) {
          iVar4 = FUN_027f0730(iVar6 + 0x2e,0xa0);
          if (iVar4 != 0) goto LAB_027f54c4;
          iVar4 = FUN_027f0f2c(iVar6 + 0x2e,7);
        }
        else {
          iVar4 = FUN_027f0730(iVar6 + 0x2e,0xc0);
          if (iVar4 != 0) goto LAB_027f54c4;
          iVar4 = FUN_027f084c(iVar6 + 0x2e,7);
        }
        if (iVar4 != 0) {
          FUN_027f15ac();
        }
      }
      else {
        FUN_027ec4e4(unaff_r5 & 0xffff,(*(ushort *)(iVar6 + 0x24) & 0x1fff) >> 0xc);
        uVar5 = FUN_027ec228(unaff_r5);
        if (*(ushort *)(iVar6 + 0x3a) == uVar5) {
          *(int *)(iVar3 + 0x578) = *(int *)(iVar3 + 0x578) + 1;
        }
        else {
          FUN_027ea0c8(iVar6 + 0x28,iVar6 + 0x34);
          bVar2 = false;
        }
      }
    }
  }
  else if (((sVar1 == 2) || (sVar1 == 3)) && ((*(ushort *)(iVar6 + 0x24) & 1) == 0)) {
    if ((*(short *)(iVar3 + 0x352) != 0) && ((*(ushort *)(iVar6 + 0x24) & 0x2000) == 0)) {
      if ((*(ushort *)(iVar6 + 0x28) & 1) == 0) {
        if (sVar1 != 3) {
          *(ushort *)(iVar3 + 0x3d2) = *(ushort *)(iVar3 + 0x3d2) & 0xfffd;
        }
      }
      else {
        *(ushort *)(iVar3 + 0x3d2) = *(ushort *)(iVar3 + 0x3d2) & 0xfffe;
      }
      if (((*(short *)(iVar3 + 0x3d2) == 0) && (*(short *)(iVar3 + 0x19c) == 0)) &&
         (*(short *)(iVar3 + 0x1a8) == 0)) {
        FUN_027ea4f0(1);
      }
    }
    unaff_r5 = (uint)*(ushort *)(iVar3 + 0x3cc);
    uVar5 = FUN_027ec228(unaff_r5);
    if (*(ushort *)(iVar6 + 0x3a) == uVar5) {
      *(int *)(iVar3 + 0x578) = *(int *)(iVar3 + 0x578) + 1;
    }
    else {
      FUN_027ea0c8(iVar6 + 0x2e,iVar6 + 0x34);
      bVar2 = false;
    }
  }
LAB_027f54c4:
  if (bVar2) {
    FUN_037f89b8(iVar3 + 0x1c4,iVar6);
  }
  else {
    *(short *)(iVar6 + 0x12) = (short)unaff_r5;
    FUN_027ec548(unaff_r5 & 0xffff,*(ushort *)(iVar6 + 0x22) & 0xff);
    FUN_027ec438(unaff_r5,*(undefined2 *)(iVar6 + 0x3a));
    FUN_027ec3fc(unaff_r5);
    *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x20) + -0x18;
    *(undefined2 *)(iVar6 + 0xc) = 0x180;
    *(short *)(iVar6 + 0xe) = (short)(*(ushort *)(iVar6 + 0x16) + 0x2d >> 1);
    FUN_037f8e64(iVar3 + 0x1c4,iVar6);
  }
  if (*(short *)(iVar3 + 0x1cc) != 0) {
    FUN_037f85f8(2,6);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0215a4e8) */

void FUN_02159ef8(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 1;
    iVar9 = (int)*(char *)(param_1 + 0xca);
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    FUN_02159edc(*(undefined4 *)(param_1 + 0x1a8),0);
    if (iVar9 < 0xd) {
      iVar10 = iVar9 * 0xc;
      FUN_02157450(param_1,*(undefined4 *)(&DAT_021712b8 + iVar10));
      if (iVar9 - 9U < 2) {
        *(char *)(param_1 + 0xd9) = *(char *)(param_1 + 0xd9) + '\x01';
        *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
        *(undefined1 *)(param_1 + 0x1e6) = 1;
      }
      iVar6 = *(int *)(param_1 + 0x1a4);
      if ((iVar6 != 0) && (iVar9 < 0xf)) {
        sVar2 = *(short *)(iVar6 + iVar9 * 2);
        if (sVar2 != -1) {
          *(short *)(iVar6 + iVar9 * 2) = sVar2 + 1;
        }
      }
    }
    else {
      iVar9 = iVar9 + (*(char *)(**(int **)(*(int *)(param_1 + 0x1a0) + 0x174) + 0x8c) + -3) * 2;
      iVar10 = iVar9 * 0xc;
      FUN_02157450(param_1,*(undefined4 *)(&DAT_021712b8 + iVar10));
      FUN_0215f6e4(param_1,0x220009,1);
      FUN_0207342c(0x7a,0x32);
      FUN_0215fc78(param_1 + 0x130,0xf);
      if (*(byte *)(param_1 + 0xd3) < 4) {
        if (2 < *(byte *)(param_1 + 0xd3)) {
          *(undefined2 *)(param_1 + 0xbe) = 0x33;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0xbe) = 0x80;
      }
    }
    *(undefined1 *)(param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0xf3) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    FUN_0215fc78(param_1 + 0x130,6);
    FUN_0215fc78(param_1 + 0x130,10);
    if (*(char *)(param_1 + 0xd2) != '\0') {
      FUN_0215fc78(param_1 + 0x130,4);
    }
    FUN_0215fcb8(param_1 + 0x130);
    FUN_0215fce4(param_1 + 0x130,0xe);
    *(char *)(param_1 + 0xcb) = (char)iVar9;
    if (*(char *)(param_1 + 0xd2) == '\0') {
      if ((&DAT_021712c1)[iVar10] != -1) {
        FUN_0215a660(*(undefined4 *)(param_1 + 0x1a4));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd2) = 0;
      FUN_0215f6e4(param_1,0x22000a,1);
      if (iVar9 < 0xd) {
        FUN_0207342c(0x7a,*(byte *)(param_1 + 0xd3) + 0x2d);
      }
      else {
        FUN_0207342c(0x7a,0x31);
      }
      FUN_0215a660(*(undefined4 *)(param_1 + 0x1a4),0xb);
    }
    if (iVar9 == 7) {
      FUN_0215f6e4(param_1,0x22000b,1);
    }
    else if (iVar9 == 8) {
      FUN_0215f6e4(param_1,0x22000f,1);
    }
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0xf6) = 1;
    *(undefined1 *)(param_1 + 0xf7) = 0;
    return;
  }
  iVar9 = FUN_02155620(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x18));
  if (iVar9 != 0) {
    iVar9 = FUN_0215dec8(param_1);
    if (iVar9 == 0) {
      FUN_0215d2e4(param_1);
    }
    iVar9 = *(int *)(param_1 + 0x1a4);
    bVar1 = *(byte *)(param_1 + 0xc9);
    if (iVar9 == 0) {
      return;
    }
    if (0xfffe < *(ushort *)(iVar9 + 0x42)) {
      return;
    }
    *(ushort *)(iVar9 + 0x42) = *(ushort *)(iVar9 + 0x42) + 1;
    if (iVar9 == 0) {
      return;
    }
    uVar4 = (uint)*(ushort *)(iVar9 + 0x40) + (uint)bVar1;
    if (uVar4 < 0xffff) {
      *(short *)(iVar9 + 0x40) = (short)uVar4;
    }
    return;
  }
  bVar11 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + 0xa1) & 1) != 0;
  if (bVar11) {
    param_3 = *(uint *)(param_1 + 0x1a4);
  }
  if ((bVar11 && param_3 != 0) && (*(short *)(param_3 + 0x4e) != -1)) {
    *(short *)(param_3 + 0x4e) = *(short *)(param_3 + 0x4e) + 1;
  }
  bVar11 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + 0xa1) & 2) != 0;
  if (bVar11) {
    param_3 = *(uint *)(param_1 + 0x1a4);
  }
  if ((bVar11 && param_3 != 0) && (*(short *)(param_3 + 0x4c) != -1)) {
    *(short *)(param_3 + 0x4c) = *(short *)(param_3 + 0x4c) + 1;
  }
  bVar11 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + 0xa1) & 4) != 0;
  if (bVar11) {
    param_3 = *(uint *)(param_1 + 0x1a4);
  }
  if ((bVar11 && param_3 != 0) && (*(short *)(param_3 + 0x4a) != -1)) {
    *(short *)(param_3 + 0x4a) = *(short *)(param_3 + 0x4a) + 1;
  }
  bVar11 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + 0xa1) & 8) != 0;
  if (bVar11) {
    param_3 = *(uint *)(param_1 + 0x1a4);
  }
  if ((bVar11 && param_3 != 0) && (*(short *)(param_3 + 0x48) != -1)) {
    *(short *)(param_3 + 0x48) = *(short *)(param_3 + 0x48) + 1;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if ((*(uint *)(iVar9 + 0x40) & 0x2000) == 0) {
    if ((*(short *)(param_1 + 0xcc) != 0) &&
       ((*(char *)(param_1 + 0xf7) == '\0' || ((*(uint *)(param_1 + 0x6c) & 0xc) != 0)))) {
      param_3 = (uint)*(byte *)(param_1 + 0xf6);
      FUN_0215efc0(param_1);
    }
  }
  else {
    sVar2 = *(short *)(iVar9 + 0x148);
    sVar3 = *(short *)(iVar9 + 0x14a);
    param_3 = (uint)sVar3;
    iVar9 = *(int *)(iVar9 + 0x5c);
    *(undefined2 *)(iVar9 + 0x24) = 0;
    *(undefined2 *)(iVar9 + 0x26) = 0;
    iVar9 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
    *(short *)(iVar9 + 0x30) = *(short *)(iVar9 + 0x30) + sVar2;
    *(short *)(iVar9 + 0x32) = *(short *)(iVar9 + 0x32) + sVar3;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x140) != 0) {
    FUN_020783cc(*(undefined4 *)(param_1 + 0x1b4));
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x144) != 0) {
    FUN_020781e4(*(undefined4 *)(param_1 + 0x1b4));
  }
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x40) & 0x100000) != 0) {
    FUN_0215fd58(param_1 + 0x130);
    iVar9 = FUN_0215a694(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar9 != 0) {
      FUN_0215fc78(param_1 + 0x130,0xe);
    }
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if (((*(uint *)(iVar9 + 0x158) & 0xf) != 0) || ((*(uint *)(iVar9 + 0x160) & 0xf) != 0)) {
    param_3 = (short)(ushort)*(byte *)(param_1 + 0xcb) * 0xc;
    if ((&DAT_021712c2)[param_3] != -1) {
      FUN_0215a660(*(undefined4 *)(param_1 + 0x1a4));
    }
    FUN_0215fd48(param_1 + 0x130);
    iVar9 = FUN_0215a694(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar9 == 0) {
      FUN_0215a660(*(undefined4 *)(param_1 + 0x1a4),0x17);
    }
    else {
      FUN_0215fc78(param_1 + 0x130,0xe);
      FUN_0215a660(*(undefined4 *)(param_1 + 0x1a4),0x16);
    }
  }
  bVar11 = (*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x44) & 8) != 0;
  if (bVar11) {
    param_3 = *(uint *)(param_1 + 0x1a4);
  }
  if ((bVar11 && param_3 != 0) && (*(short *)(param_3 + 0x66) != -1)) {
    *(short *)(param_3 + 0x66) = *(short *)(param_3 + 0x66) + 1;
  }
  FUN_02158668(param_1);
  uVar4 = 0;
  cVar7 = '\0';
  iVar9 = FUN_0215a708(*(undefined4 *)(param_1 + 0x1a8));
  cVar8 = *(char *)(param_1 + 200);
  if (iVar9 == 0) {
    if (cVar8 != '\t' && cVar8 != '\n') {
      *(undefined1 *)(param_1 + 200) = 0;
    }
    if (*(byte *)(param_1 + 0xda) < 2) {
      uVar4 = FUN_0215a8c0(param_1);
      cVar7 = *(char *)(param_1 + 0xf4);
    }
  }
  else {
    if ((byte)(cVar8 - 9U) < 2) {
      *(undefined1 *)(param_1 + 200) = 0;
    }
    uVar4 = FUN_0215a720(param_1);
    cVar7 = *(char *)(param_1 + 0xf3);
  }
  if (uVar4 != 0) {
    uVar5 = *(uint *)(param_1 + 0xc0);
    if (uVar4 != 0xc) {
      uVar5 = uVar5 | *(uint *)(param_1 + 0xc4);
    }
    if ((uVar5 & 1 << (uVar4 & 0xff)) == 0) {
      *(char *)(param_1 + 200) = (char)uVar4;
    }
  }
  if ((cVar7 == '\0') || (*(char *)(param_1 + 200) == '\0')) goto LAB_0215a618;
  switch(*(char *)(param_1 + 200)) {
  case '\v':
    break;
  case '\f':
    iVar9 = FUN_0215a708(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar9 != 0) {
      cVar8 = '\f';
      if (*(int *)(param_1 + 0x1cc) == *(int *)(param_1 + 0x1d0)) {
        iVar9 = FUN_0207834c(*(undefined4 *)(param_1 + 0x1b4),1);
        if (iVar9 == 0) break;
        if ((*(uint *)(param_1 + 0x6c) & 1) == 0) {
          cVar8 = '\r';
        }
        else {
          cVar8 = '\x0e';
        }
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x56c);
      *(uint *)(iVar9 + 0x3c) = *(uint *)(iVar9 + 0x3c) | 0x20;
      *(undefined1 *)(param_1 + 0xd2) = 1;
      *(char *)(param_1 + 0xd3) = *(char *)(param_1 + 0xd3) + '\x01';
      goto LAB_0215a61c;
    }
    *(undefined1 *)(param_1 + 200) = 0;
    FUN_02078a70(*(undefined4 *)(param_1 + 0x1b4));
    break;
  case '\r':
    goto LAB_0215a50c;
  case '\x0e':
LAB_0215a50c:
    iVar9 = FUN_0215a708(*(undefined4 *)(param_1 + 0x1a8));
    if ((iVar9 != 0) && (iVar9 = FUN_0207834c(*(undefined4 *)(param_1 + 0x1b4),1), iVar9 != 0)) {
      iVar9 = *(int *)(param_1 + 0x1a4);
      if ((iVar9 != 0) && (*(short *)(iVar9 + 0x44) != -1)) {
        *(short *)(iVar9 + 0x44) = *(short *)(iVar9 + 0x44) + 1;
      }
switchD_0215a4f4_default:
      if ((*(uint *)(param_1 + 0xc4) & 1 << (uint)*(byte *)(param_1 + 200)) == 0) {
        *(uint *)(param_1 + 0xc4) =
             *(uint *)(param_1 + 0xc4) | (&DAT_021712bc)[(uint)*(byte *)(param_1 + 200) * 3];
        *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
        cVar8 = *(char *)(param_1 + 200);
        goto LAB_0215a61c;
      }
    }
    break;
  default:
    goto switchD_0215a4f4_default;
  }
LAB_0215a618:
  cVar8 = '\0';
LAB_0215a61c:
  if (cVar8 == '\0') {
    return;
  }
  FUN_0215da64(param_1);
  *(char *)(param_1 + 0xca) = cVar8;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}


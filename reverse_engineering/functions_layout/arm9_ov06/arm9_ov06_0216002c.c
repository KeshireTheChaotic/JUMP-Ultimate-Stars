
/* JUS-GAME BattleCharaInfo::Battle_CharaInfoPopularSet [source-string]
   __FILE__="BattleCharaInfo.cpp" __FUNCTION__="Battle_CharaInfoPopularSet" lines=[188] passed to 1
   source-location call(s) */

void BattleCharaInfo::Battle_CharaInfoPopularSet(int param_1)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_54 [13];
  byte local_47 [13];
  byte local_3a [10];
  byte local_30 [12];
  
  switch(*(undefined4 *)(DAT_02172960 + 0x154)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    return;
  case 5:
    return;
  case 6:
    break;
  default:
    goto switchD_02160048_default;
  }
  DAT_020b76ae = DAT_020b76ae + 1;
  iVar16 = thunk_FUN_0201a228(0x30,s_BattleCharaInfo_cpp_02172310,
                              s_Battle_CharaInfoPopularSet_02172274,0xbc);
  FUN_020517fc(iVar16,0,0x30);
  iVar18 = 0;
  iVar19 = 0;
  do {
    bVar12 = (&DAT_021714c4)[iVar19];
    iVar19 = iVar19 + 1;
    iVar1 = (uint)bVar12 * 2;
    sVar3 = *(short *)(param_1 + iVar1);
    if (sVar3 != -1) {
      *(short *)(param_1 + iVar1) = sVar3 + 1;
    }
    iVar18 = iVar18 + (uint)*(ushort *)(param_1 + (uint)bVar12 * 2);
  } while (iVar19 < 0xb);
  uVar20 = (uint)*(ushort *)(param_1 + 0x82);
  uVar21 = (uint)*(ushort *)(param_1 + 0xa6);
  if (uVar20 < 0xffff) {
    uVar20 = uVar20 + 1 & 0xffff;
  }
  if (uVar21 < 0xffff) {
    uVar21 = uVar21 + 1 & 0xffff;
  }
  iVar18 = (iVar18 + uVar20 + uVar21) * 100;
  iVar19 = 0;
  do {
    bVar12 = FUN_0200d12c((uint)*(ushort *)(param_1 + (uint)(byte)(&DAT_021714c4)[iVar19] * 2) *
                          0x6400,iVar18);
    local_47[iVar19] = bVar12;
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0xb);
  local_47[0xb] = FUN_0200d12c(uVar20 * 0x6400,iVar18);
  local_47[0xc] = FUN_0200d12c(uVar21 * 0x6400,iVar18);
  iVar18 = 0;
  do {
    iVar19 = iVar18 + 1;
    (&DAT_020b767e)[iVar18] = (&DAT_020b767e)[iVar18] + (ushort)local_47[iVar18];
    bVar12 = DAT_020b76ae;
    iVar18 = iVar19;
  } while (iVar19 < 0xd);
  iVar18 = 0;
  iVar19 = 0;
  do {
    bVar13 = FUN_0200d12c((&DAT_020b767e)[iVar19],bVar12);
    local_47[iVar19] = bVar13;
    if (bVar13 != 0xff) {
      local_47[iVar19] = bVar13 + 1;
    }
    pbVar2 = local_47 + iVar19;
    iVar19 = iVar19 + 1;
    iVar18 = iVar18 + (uint)*pbVar2;
  } while (iVar19 < 0xd);
  iVar19 = 0;
  do {
    uVar14 = FUN_0200d12c((uint)local_47[iVar19] * 0x6400,iVar18 * 100);
    local_54[iVar19] = uVar14;
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0xd);
  *(undefined1 *)(iVar16 + 0x17) = local_54[0];
  *(undefined1 *)(iVar16 + 0x18) = local_54[1];
  *(undefined1 *)(iVar16 + 0x19) = local_54[2];
  *(undefined1 *)(iVar16 + 0x1a) = local_54[3];
  *(undefined1 *)(iVar16 + 0x1b) = local_54[4];
  *(undefined1 *)(iVar16 + 0x1c) = local_54[5];
  *(undefined1 *)(iVar16 + 0x1d) = local_54[6];
  *(undefined1 *)(iVar16 + 0x1e) = local_54[7];
  *(undefined1 *)(iVar16 + 0x1f) = local_54[8];
  *(undefined1 *)(iVar16 + 0x20) = local_54[9];
  *(undefined1 *)(iVar16 + 0x21) = local_54[10];
  *(undefined1 *)(iVar16 + 0x22) = local_54[0xb];
  *(undefined1 *)(iVar16 + 0x23) = local_54[0xc];
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar5 = *(ushort *)(param_1 + 0x80);
  uVar15 = *(undefined2 *)(param_1 + 0xa4);
  uVar6 = *(ushort *)(param_1 + 0x82);
  uVar7 = *(ushort *)(param_1 + 0x72);
  uVar8 = *(undefined2 *)(param_1 + 0x76);
  uVar9 = *(ushort *)(param_1 + 0x74);
  uVar10 = *(ushort *)(param_1 + 0x12);
  uVar11 = *(ushort *)(param_1 + 0x14);
  local_30[0] = FUN_02160a20(*(undefined2 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x42));
  local_30[1] = FUN_02160a20(*(undefined2 *)(param_1 + 0x46),(uint)uVar6 + (uint)uVar4 + (uint)uVar5
                            );
  local_30[2] = FUN_02160a20((uint)uVar10 + (uint)uVar11,(uint)uVar7 + (uint)uVar9);
  local_30[3] = FUN_02160a20(*(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4a));
  local_30[4] = FUN_02160a20(*(undefined2 *)(param_1 + 0x4c),*(undefined2 *)(param_1 + 0x4e));
  local_30[5] = FUN_02160a20(*(undefined2 *)(param_1 + 0x50),(uint)uVar7 + (uint)uVar9);
  local_30[6] = FUN_02160a20(*(undefined2 *)(param_1 + 0x52),uVar15);
  local_30[7] = FUN_02160a20(*(undefined2 *)(param_1 + 0x54),uVar8);
  local_30[8] = FUN_02160a20(*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x58));
  local_30[9] = FUN_02160a20(*(undefined2 *)(param_1 + 0x5a),*(undefined2 *)(param_1 + 0x5c));
  iVar18 = 0;
  do {
    (&DAT_020b7698)[iVar18] = (&DAT_020b7698)[iVar18] + (ushort)local_30[iVar18];
    bVar12 = FUN_0200d12c((&DAT_020b7698)[iVar18],DAT_020b76ae);
    local_3a[iVar18] = bVar12;
    if (7 < bVar12) {
      local_3a[iVar18] = 7;
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 < 10);
  *(byte *)(iVar16 + 0x24) = local_3a[0];
  *(byte *)(iVar16 + 0x25) = local_3a[1];
  *(byte *)(iVar16 + 0x26) = local_3a[2];
  *(byte *)(iVar16 + 0x27) = local_3a[3];
  *(byte *)(iVar16 + 0x28) = local_3a[4];
  *(byte *)(iVar16 + 0x29) = local_3a[5];
  *(byte *)(iVar16 + 0x2a) = local_3a[6];
  *(byte *)(iVar16 + 0x2b) = local_3a[7];
  *(byte *)(iVar16 + 0x2c) = local_3a[8];
  *(byte *)(iVar16 + 0x2d) = local_3a[9];
  if (DAT_020afee6 == '\0') {
    iVar18 = DAT_020b76ac + 2;
  }
  else {
    iVar18 = DAT_020b76ac - 1;
  }
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  if (0xff < iVar18) {
    iVar18 = 0xff;
  }
  DAT_020b76ac = (ushort)iVar18;
  iVar18 = iVar18 >> 5;
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  if (7 < iVar18) {
    iVar18 = 7;
  }
  *(char *)(iVar16 + 0x2e) = (char)iVar18;
  DAT_020b7660 = DAT_020b7660 + *(int *)(param_1 + 0x30);
  uVar20 = FUN_0200d338(DAT_020b7660,DAT_020b76ae);
  if (0x400 < uVar20) {
    uVar20 = 0x400;
  }
  *(short *)(iVar16 + 8) = (short)uVar20;
  DAT_020b7664 = DAT_020b7664 + (uint)*(ushort *)(param_1 + 0x36);
  uVar20 = FUN_0200d338(DAT_020b7664,DAT_020b76ae);
  if (0x380 < uVar20) {
    uVar20 = 0x380;
  }
  *(short *)(iVar16 + 10) = (short)uVar20;
  DAT_020b7668 = DAT_020b7668 + *(short *)(param_1 + 0x3c);
  uVar20 = FUN_0200d12c(DAT_020b7668,DAT_020b76ae);
  if (0x18 < uVar20) {
    uVar20 = 0x18;
  }
  *(char *)(iVar16 + 0xc) = (char)uVar20;
  DAT_020b766a = DAT_020b766a + *(short *)(param_1 + 0x3e);
  uVar20 = FUN_0200d12c(DAT_020b766a,DAT_020b76ae);
  if (8 < uVar20) {
    uVar20 = 8;
  }
  *(char *)(iVar16 + 0xd) = (char)uVar20;
  DAT_020b766c = DAT_020b766c + *(short *)(param_1 + 0x40);
  uVar20 = FUN_0200d12c((int)DAT_020b766c,DAT_020b76ae);
  if (8 < uVar20) {
    uVar20 = 8;
  }
  *(char *)(iVar16 + 0xe) = (char)uVar20;
  DAT_020b766e = DAT_020b766e + (short)*(undefined4 *)(param_1 + 0x38);
  uVar20 = FUN_0200d12c((int)DAT_020b766e >> 1,DAT_020b76ae);
  if (0xc0 < uVar20) {
    uVar20 = 0xc0;
  }
  *(char *)(iVar16 + 0xf) = (char)uVar20;
  DAT_020b7670 = DAT_020b7670 + (short)*(undefined4 *)(param_1 + 0x60);
  uVar20 = FUN_0200d12c((int)DAT_020b7670,DAT_020b76ae);
  if (8 < uVar20) {
    uVar20 = 8;
  }
  *(char *)(iVar16 + 0x10) = (char)uVar20;
  DAT_020b7672 = DAT_020b7672 + *(short *)(param_1 + 100);
  uVar20 = FUN_0200d12c((int)DAT_020b7672,DAT_020b76ae);
  if (0x20 < uVar20) {
    uVar20 = 0x20;
  }
  *(char *)(iVar16 + 0x11) = (char)uVar20;
  DAT_020b7674 = DAT_020b7674 + *(short *)(param_1 + 0x66);
  uVar20 = FUN_0200d12c((int)DAT_020b7674,DAT_020b76ae);
  if (0x20 < uVar20) {
    uVar20 = 0x20;
  }
  *(char *)(iVar16 + 0x12) = (char)uVar20;
  DAT_020b7676 = DAT_020b7676 + *(short *)(param_1 + 0x68);
  uVar20 = FUN_0200d12c((int)DAT_020b7676,DAT_020b76ae);
  if (0x20 < uVar20) {
    uVar20 = 0x20;
  }
  *(char *)(iVar16 + 0x13) = (char)uVar20;
  DAT_020b7678 = DAT_020b7678 + (short)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
  uVar20 = FUN_0200d12c(DAT_020b7678,DAT_020b76ae);
  if (0xff < uVar20) {
    uVar20 = 0xff;
  }
  *(char *)(iVar16 + 0x14) = (char)uVar20;
  DAT_020b767c = DAT_020b767c + (short)((uint)*(undefined4 *)(param_1 + 0x24) >> 8);
  uVar20 = FUN_0200d12c(DAT_020b767c,DAT_020b76ae);
  if (0xff < uVar20) {
    uVar20 = 0xff;
  }
  *(char *)(iVar16 + 0x16) = (char)uVar20;
  DAT_020b767a = DAT_020b767a + (short)((uint)*(undefined4 *)(param_1 + 0x28) >> 8);
  uVar20 = FUN_0200d12c(DAT_020b767a,DAT_020b76ae);
  if (0xff < uVar20) {
    uVar20 = 0xff;
  }
  *(char *)(iVar16 + 0x15) = (char)uVar20;
  if (9 < DAT_020b76ae) {
    iVar18 = 0;
    do {
      uVar15 = FUN_0200d338((&DAT_020b767e)[iVar18],DAT_020b76ae);
      iVar19 = iVar18 + 1;
      (&DAT_020b767e)[iVar18] = uVar15;
      iVar18 = iVar19;
    } while (iVar19 < 0xd);
    iVar18 = 0;
    do {
      uVar15 = FUN_0200d338((&DAT_020b7698)[iVar18],DAT_020b76ae);
      iVar19 = iVar18 + 1;
      (&DAT_020b7698)[iVar18] = uVar15;
      iVar18 = iVar19;
    } while (iVar19 < 10);
    DAT_020b7660 = FUN_0200d338(DAT_020b7660,DAT_020b76ae);
    DAT_020b7664 = FUN_0200d338(DAT_020b7664,DAT_020b76ae);
    DAT_020b766a = FUN_0200d338(DAT_020b766a,DAT_020b76ae);
    DAT_020b766c = FUN_0200d12c((int)DAT_020b766c,DAT_020b76ae);
    DAT_020b766e = FUN_0200d12c((int)DAT_020b766e,DAT_020b76ae);
    DAT_020b7670 = FUN_0200d12c((int)DAT_020b7670,DAT_020b76ae);
    DAT_020b7672 = FUN_0200d12c((int)DAT_020b7672,DAT_020b76ae);
    DAT_020b7674 = FUN_0200d12c((int)DAT_020b7674,DAT_020b76ae);
    DAT_020b7676 = FUN_0200d12c((int)DAT_020b7676,DAT_020b76ae);
    DAT_020b7678 = FUN_0200d338(DAT_020b7678,DAT_020b76ae);
    DAT_020b767a = FUN_0200d338(DAT_020b767a,DAT_020b76ae);
    DAT_020b767c = FUN_0200d338(DAT_020b767c,DAT_020b76ae);
    DAT_020b76ae = 0;
  }
  if (*(int *)(DAT_02172960 + 0x128) != 0) {
    uVar14 = func_0x02172fec(*(int *)(DAT_02172960 + 0x128),iVar16);
    uVar17 = FUN_02071f08();
    FUN_0207263c(uVar17,uVar14,0);
  }
  FUN_0201b244(iVar16);
switchD_02160048_default:
  return;
}


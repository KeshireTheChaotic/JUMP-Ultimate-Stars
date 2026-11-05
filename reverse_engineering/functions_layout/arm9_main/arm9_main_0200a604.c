
undefined4 FUN_0200a604(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  undefined1 auStack_fc [38];
  undefined2 local_d6 [19];
  undefined2 local_b0 [19];
  undefined2 local_8a [19];
  undefined1 auStack_64 [38];
  char local_3e [2];
  short local_3c;
  byte local_3a;
  byte local_39 [33];
  undefined4 uStack_18;
  
                    /* JUS-TAG strings=["179769313486231580793728714053034151"] */
  uStack_18 = param_4;
  if (param_1[4] == '\0') {
    if (*param_1 == '\0') {
      uVar14 = 0x3ff00000;
    }
    else {
      uVar14 = 0xbff00000;
    }
    uVar14 = FUN_02009818(0,0,0,uVar14);
    return uVar14;
  }
  cVar18 = param_1[5];
  if (cVar18 == '0') {
    if (*param_1 == '\0') {
      uVar14 = 0x3ff00000;
    }
    else {
      uVar14 = 0xbff00000;
    }
    uVar14 = FUN_02009818(0,0,0,uVar14);
    return uVar14;
  }
  if (cVar18 == 'I') {
    if (*param_1 == '\0') {
      uVar14 = 0x3ff00000;
    }
    else {
      uVar14 = 0xbff00000;
    }
    uVar20 = FUN_0200c85c(DAT_02093134);
    uVar14 = FUN_02009818((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,uVar14);
    return uVar14;
  }
  if (cVar18 == 'N') {
    return 0;
  }
  pcVar11 = local_3e;
  iVar8 = 0x13;
  pcVar15 = param_1;
  do {
    uVar1 = *(undefined2 *)pcVar15;
    pcVar15 = pcVar15 + 2;
    *(undefined2 *)pcVar11 = uVar1;
    pcVar11 = pcVar11 + 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  pbVar9 = local_39;
  pbVar6 = pbVar9 + local_3a;
  for (; pbVar9 < pbVar6; pbVar9 = pbVar9 + 1) {
    *pbVar9 = *pbVar9 - 0x30;
  }
  local_3c = local_3c + (local_3a - 1);
  iVar8 = (int)local_3c;
  FUN_02009f60(auStack_64,s_17976931348623158079372871405303_0209351c,0x134);
  iVar7 = FUN_0200a290(auStack_64,local_3e);
  if (iVar7 != 0) {
    if (*param_1 == '\0') {
      uVar14 = 0x3ff00000;
    }
    else {
      uVar14 = 0xbff00000;
    }
    uVar20 = FUN_0200c85c(DAT_02093134);
    uVar14 = FUN_02009818((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,uVar14);
    return uVar14;
  }
  pbVar9 = local_39 + 1;
  uVar20 = FUN_0200b890(local_39[0]);
  while( true ) {
    uVar3 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar14 = (undefined4)uVar20;
    if (pbVar6 <= pbVar9) break;
    iVar17 = 0;
    iVar7 = (int)pbVar6 - (int)pbVar9 >> 0x1f;
    iVar7 = ((uint)(((int)pbVar6 - (int)pbVar9) * 0x20000000 + iVar7) >> 0x1d | iVar7 << 3) - iVar7;
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    iVar16 = 0;
    if (0 < iVar7) {
      do {
        iVar16 = iVar16 + 1;
        iVar17 = (uint)*pbVar9 + iVar17 * 10;
        pbVar9 = pbVar9 + 1;
      } while (iVar16 < iVar7);
    }
    uVar21 = FUN_0200b8cc(uVar14,uVar3,*(undefined4 *)(iVar7 * 8 + 0x2093400),
                          *(undefined4 *)(iVar7 * 8 + 0x2093404));
    uVar10 = (undefined4)((ulonglong)uVar21 >> 0x20);
    uVar20 = FUN_0200b890(iVar17);
    uVar20 = FUN_0200b3a0((int)uVar21,uVar10,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    if (iVar17 != 0) {
      cVar18 = (int)((ulonglong)uVar20 >> 0x20) == 0;
      FUN_0200c390((int)uVar21,uVar10,(int)uVar20);
      if (cVar18 != '\0') break;
    }
    iVar8 = iVar8 - iVar7;
  }
  if (iVar8 < 0) {
    uVar20 = FUN_0200b850(-iVar8);
    uVar20 = FUN_02009d34(0,0x40140000,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0200d534(uVar14,uVar3,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
  }
  else {
    uVar20 = FUN_0200b850();
    uVar20 = FUN_02009d34(0,0x40140000,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0200b8cc(uVar14,uVar3,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
  }
  local_108 = (int)((ulonglong)uVar20 >> 0x20);
  local_10c = (int)uVar20;
  uVar22 = FUN_02009adc(local_10c,local_108,iVar8);
  iVar8 = FUN_0200aa6c();
  if (iVar8 == 2) {
    uVar22 = 0x7fefffffffffffff;
  }
  local_108 = (int)(uVar22 >> 0x20);
  local_10c = (int)uVar22;
  FUN_0200a4ac(local_8a,local_10c,local_108);
  iVar8 = FUN_0200a1fc(local_8a,local_3e);
  if (iVar8 == 0) {
    iVar8 = FUN_0200a290(local_8a,local_3e);
    bVar19 = iVar8 != 0;
    if (bVar19) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while( true ) {
      local_108 = (int)(uVar22 >> 0x20);
      local_10c = (int)uVar22;
      if (bVar2) {
        uVar5 = CONCAT44(local_108 - (uint)(local_10c == 0),local_10c + -1);
      }
      else {
        uVar5 = uVar22 + 1;
        iVar8 = FUN_0200aa6c((int)uVar5,(int)(uVar5 >> 0x20));
        if (iVar8 == 2) goto LAB_0200a9c6;
      }
      local_110 = (undefined4)(uVar5 >> 0x20);
      local_114 = (undefined4)uVar5;
      FUN_0200a4ac(local_b0,local_114,local_110);
      if ((bVar19) && (iVar8 = FUN_0200a290(local_b0,local_3e), uVar4 = uVar22, iVar8 == 0))
      goto LAB_0200a964;
      if ((!bVar19) && (iVar8 = FUN_0200a290(local_3e,local_b0), iVar8 == 0)) break;
      puVar13 = local_b0;
      puVar12 = local_8a;
      iVar8 = 0x13;
      do {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar12 = uVar1;
        puVar12 = puVar12 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar22 = uVar5;
    }
    puVar12 = local_8a;
    puVar13 = local_d6;
    iVar8 = 0x13;
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar13 = uVar1;
      puVar13 = puVar13 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar13 = local_b0;
    puVar12 = local_8a;
    iVar8 = 0x13;
    do {
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar12 = uVar1;
      puVar12 = puVar12 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar12 = local_d6;
    puVar13 = local_b0;
    iVar8 = 0x13;
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar13 = uVar1;
      puVar13 = puVar13 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar4 = uVar5;
    uVar5 = uVar22;
LAB_0200a964:
    FUN_0200a328(local_d6,local_3e,local_8a);
    FUN_0200a328(auStack_fc,local_b0,local_3e);
    iVar8 = FUN_0200a1fc(local_d6,auStack_fc);
    uVar22 = uVar4;
    if (iVar8 == 0) {
      iVar8 = FUN_0200a290(local_d6,auStack_fc);
      if (iVar8 == 0) {
        uVar22 = uVar5;
      }
    }
    else if ((uVar4 & 1) != 0) {
      uVar22 = uVar5;
    }
  }
LAB_0200a9c6:
  local_108 = (int)(uVar22 >> 0x20);
  local_10c = (int)uVar22;
  if (local_3e[0] != '\0') {
    local_10c = FUN_0200bc6c(0,0,local_10c,local_108);
  }
  return local_10c;
}



char * FUN_02003e30(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_40;
  int local_3c;
  byte local_38 [4];
  undefined1 local_34;
  byte local_2d;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  puVar5 = &local_40;
  puVar10 = &local_40;
  puVar11 = &local_40;
  puVar12 = &local_40;
  puVar7 = &DAT_0208d620;
  iVar9 = 5;
  do {
    uVar2 = *puVar7;
    uVar4 = puVar7[1];
    puVar7 = puVar7 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar13 = (char *)(param_1 + 1);
  iVar9 = (int)*pcVar13;
  if (iVar9 == 0x25) {
    local_40._3_1_ = *pcVar13;
    iVar9 = 5;
    do {
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      puVar10 = puVar10 + 2;
      *param_2 = uVar2;
      param_2[1] = uVar4;
      param_2 = param_2 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    return (char *)(param_1 + 2);
  }
  if (iVar9 == 0x2a) {
    local_40._0_1_ = 1;
    pcVar13 = (char *)(param_1 + 2);
    iVar9 = (int)*pcVar13;
  }
  if ((iVar9 < 0) || (0x7f < iVar9)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0208d520 + iVar9 * 2) & 8;
  }
  if (uVar1 != 0) {
    local_3c = 0;
    do {
      pcVar14 = pcVar13;
      local_3c = iVar9 + -0x30 + local_3c * 10;
      pcVar13 = pcVar14 + 1;
      iVar9 = (int)*pcVar13;
      if ((iVar9 < 0) || (0x7f < iVar9)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(ushort *)(&DAT_0208d520 + iVar9 * 2) & 8;
      }
    } while (uVar1 != 0);
    if (local_3c == 0) {
      local_40._3_1_ = 0xff;
      iVar9 = 5;
      do {
        uVar2 = *puVar11;
        uVar4 = puVar11[1];
        puVar11 = puVar11 + 2;
        *param_2 = uVar2;
        param_2[1] = uVar4;
        param_2 = param_2 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return pcVar14 + 2;
    }
    local_40._1_1_ = 1;
  }
  bVar15 = true;
  if (iVar9 < 0x6d) {
    if (iVar9 < 0x68) {
      if (iVar9 != 0x4c) goto LAB_02003f62;
      local_40._2_1_ = '\t';
    }
    else if (iVar9 == 0x68) {
      local_40._2_1_ = '\x02';
      if (pcVar13[1] == 'h') {
        local_40._2_1_ = '\x01';
        pcVar13 = pcVar13 + 1;
        iVar9 = (int)*pcVar13;
      }
    }
    else if (iVar9 == 0x6a) {
      local_40._2_1_ = '\x04';
    }
    else {
      if (iVar9 != 0x6c) goto LAB_02003f62;
      local_40._2_1_ = '\x03';
      if (pcVar13[1] == 'l') {
        local_40._2_1_ = '\a';
        pcVar13 = pcVar13 + 1;
        iVar9 = (int)*pcVar13;
      }
    }
  }
  else if (iVar9 < 0x75) {
    if (iVar9 == 0x74) {
      local_40._2_1_ = '\x06';
    }
    else {
LAB_02003f62:
      bVar15 = false;
    }
  }
  else {
    if (iVar9 != 0x7a) goto LAB_02003f62;
    local_40._2_1_ = '\x05';
  }
  if (bVar15) {
    pcVar13 = pcVar13 + 1;
    iVar9 = (int)*pcVar13;
  }
  local_40._3_1_ = (char)iVar9;
  if (iVar9 < 0x5c) {
    if (0x5a < iVar9) {
      if (local_40._2_1_ == '\x03') {
        local_40._2_1_ = 10;
      }
      else if (local_40._2_1_ != '\0') {
        local_40._3_1_ = 0xff;
      }
      uVar8 = (uint)pcVar13[1];
      bVar15 = uVar8 == 0x5e;
      pcVar14 = pcVar13 + 1;
      if (bVar15) {
        uVar8 = (uint)pcVar13[2];
        pcVar14 = pcVar13 + 2;
      }
      pcVar13 = pcVar14;
      if (uVar8 == 0x5d) {
        pcVar13 = pcVar13 + 1;
        local_2d = local_2d | 0x20;
        uVar8 = (uint)*pcVar13;
      }
      while ((uVar8 != 0 && (uVar8 != 0x5d))) {
        iVar9 = (int)(uVar8 & 0xff) >> 3;
        local_38[iVar9] = local_38[iVar9] | (byte)(1 << (uVar8 & 7));
        if ((pcVar13[1] == '-') && ((iVar9 = (int)pcVar13[2], iVar9 != 0 && (iVar9 != 0x5d)))) {
          while (uVar8 = uVar8 + 1, (int)uVar8 <= iVar9) {
            iVar3 = (int)(uVar8 & 0xff) >> 3;
            local_38[iVar3] = local_38[iVar3] | (byte)(1 << (uVar8 & 7));
          }
          pcVar13 = pcVar13 + 3;
          uVar8 = (uint)*pcVar13;
        }
        else {
          pcVar13 = pcVar13 + 1;
          uVar8 = (uint)*pcVar13;
        }
      }
      if (uVar8 == 0) {
        local_40._3_1_ = 0xff;
      }
      else if (bVar15) {
        iVar9 = 0x20;
        pbVar6 = local_38;
        do {
          iVar9 = iVar9 + -1;
          *pbVar6 = ~*pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (0 < iVar9);
      }
      goto switchD_02003fbc_caseD_6e;
    }
    if (iVar9 < 0x48) {
      if (-1 < iVar9 + -0x41) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar9 + -0x41) {
        case 0:
          goto switchD_02003fbc_caseD_65;
        }
      }
    }
    else if (iVar9 == 0x58) {
switchD_02003fbc_caseD_64:
      if (local_40._2_1_ == '\t') {
        local_40._3_1_ = 0xff;
      }
      goto switchD_02003fbc_caseD_6e;
    }
  }
  else if (iVar9 < 0x62) {
    if (iVar9 == 0x61) {
switchD_02003fbc_caseD_65:
      if (((local_40._2_1_ == '\x01') || (local_40._2_1_ == '\x02')) ||
         ((byte)(local_40._2_1_ - 4U) < 4)) {
        local_40._3_1_ = 0xff;
      }
      else if (local_40._2_1_ == '\x03') {
        local_40._2_1_ = 8;
      }
      goto switchD_02003fbc_caseD_6e;
    }
  }
  else if (iVar9 - 99U < 0x16) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar9 - 99U) {
    case 0:
      if (local_40._2_1_ == '\x03') {
        local_40._2_1_ = 10;
      }
      else if (local_40._2_1_ != '\0') {
        local_40._3_1_ = 0xff;
      }
      break;
    case 1:
    case 6:
    case 0xc:
      goto switchD_02003fbc_caseD_64;
    case 2:
    case 3:
    case 4:
      goto switchD_02003fbc_caseD_65;
    default:
      goto switchD_02003fbc_caseD_68;
    case 0xb:
      break;
    case 0xd:
      local_40._2_1_ = 3;
      local_40._3_1_ = 0x78;
      break;
    case 0x10:
      if (local_40._2_1_ == '\x03') {
        local_40._2_1_ = 10;
      }
      else if (local_40._2_1_ != '\0') {
        local_40._3_1_ = 0xff;
      }
      iVar9 = 0x20;
      pbVar6 = local_38;
      do {
        iVar9 = iVar9 + -1;
        *pbVar6 = 0xff;
        pbVar6 = pbVar6 + 1;
      } while (0 < iVar9);
      local_38[1] = 0xc1;
      local_34 = 0xfe;
    }
    goto switchD_02003fbc_caseD_6e;
  }
switchD_02003fbc_caseD_68:
  local_40._3_1_ = 0xff;
switchD_02003fbc_caseD_6e:
  iVar9 = 5;
  do {
    uVar2 = *puVar12;
    uVar4 = puVar12[1];
    puVar12 = puVar12 + 2;
    *param_2 = uVar2;
    param_2[1] = uVar4;
    param_2 = param_2 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return pcVar13 + 1;
}


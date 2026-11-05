
int FUN_0205237c(undefined1 *param_1,int param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  longlong lVar24;
  uint local_84;
  uint local_80;
  uint local_7c;
  char local_78;
  uint local_74;
  uint local_64;
  uint local_60;
  uint local_5c;
  char local_50 [28];
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_34 = param_2;
  local_2c = param_1;
  local_30 = param_1;
  if (*param_3 != 0) {
    local_7c = 10;
    local_84 = 0;
    local_80 = 0xffffffff;
    local_78 = 'W';
    local_74 = 8;
    local_64 = 0x10;
    local_60 = 1;
    local_5c = 2;
    do {
      if ((*param_3 ^ 0x20) - 0xa1 < 0x3c) {
        FUN_02052d84(&local_34);
        pbVar18 = param_3 + 1;
        if (*pbVar18 != 0) {
          pbVar18 = param_3 + 2;
          FUN_02052d84(&local_34);
        }
        goto LAB_02052bec;
      }
      if (*param_3 != 0x25) {
        pbVar18 = param_3 + 1;
        FUN_02052d84(&local_34);
        goto LAB_02052bec;
      }
      uVar15 = local_84;
      pbVar18 = param_3;
      while( true ) {
        while( true ) {
          pbVar19 = pbVar18 + 1;
          bVar1 = *pbVar19;
          if (' ' < (char)bVar1) break;
          if (bVar1 != 0x20) goto LAB_020524ec;
          uVar15 = uVar15 | 1;
          pbVar18 = pbVar19;
        }
        if (('0' < (char)bVar1) || ((char)bVar1 < '+')) break;
        if (bVar1 == 0x2b) {
          if (*pbVar18 != 0x20) break;
          uVar15 = uVar15 | 2;
          pbVar18 = pbVar19;
        }
        else if (bVar1 == 0x2d) {
          uVar15 = uVar15 | 8;
          pbVar18 = pbVar19;
        }
        else {
          if (bVar1 != 0x30) break;
          uVar15 = uVar15 | 0x10;
          pbVar18 = pbVar19;
        }
      }
LAB_020524ec:
      uVar21 = local_84;
      if (bVar1 == 0x2a) {
        puVar22 = param_4 + 1;
        uVar21 = *param_4;
        pbVar19 = pbVar18 + 2;
        if ((int)uVar21 < 0) {
          uVar21 = -uVar21;
          uVar15 = uVar15 | 8;
        }
      }
      else {
        for (; (puVar22 = param_4, '/' < (char)*pbVar19 && ((char)*pbVar19 < ':'));
            pbVar19 = pbVar19 + 1) {
          uVar21 = (uVar21 * 10 + (int)(char)*pbVar19) - 0x30;
        }
      }
      uVar14 = local_80;
      pbVar20 = pbVar19;
      puVar23 = puVar22;
      if (*pbVar19 == 0x2e) {
        pbVar20 = pbVar19 + 1;
        uVar14 = local_84;
        if (*pbVar20 == 0x2a) {
          puVar23 = puVar22 + 1;
          pbVar20 = pbVar19 + 2;
          uVar14 = *puVar22;
          if ((int)*puVar22 < 0) {
            uVar14 = local_80;
          }
        }
        else {
          for (; ('/' < (char)*pbVar20 && ((char)*pbVar20 < ':')); pbVar20 = pbVar20 + 1) {
            uVar14 = (uVar14 * 10 + (int)(char)*pbVar20) - 0x30;
          }
        }
      }
      if (*pbVar20 == 0x68) {
        if (pbVar20[1] == 0x68) {
          uVar15 = uVar15 | 0x100;
          pbVar18 = pbVar20 + 2;
        }
        else {
          uVar15 = uVar15 | 0x40;
          pbVar18 = pbVar20 + 1;
        }
      }
      else {
        pbVar18 = pbVar20;
        if ((*pbVar20 == 0x6c) && (pbVar18 = pbVar20 + 1, pbVar20[1] == 0x6c)) {
          uVar15 = uVar15 | 0x80;
          pbVar18 = pbVar20 + 2;
        }
      }
      iVar7 = (int)(char)*pbVar18;
      uVar3 = 0x30;
      uVar11 = local_7c;
      param_4 = puVar23;
      cVar4 = local_78;
      if (iVar7 < 0x6a) {
        if (iVar7 < 99) {
          if (iVar7 < 0x26) {
            if ((iVar7 == 0x25) && (param_3 + 1 == pbVar18)) {
              pbVar18 = pbVar18 + 1;
              FUN_02052d84(&local_34);
              goto LAB_02052bec;
            }
          }
          else if (iVar7 == 0x58) {
            cVar4 = '7';
            goto LAB_02052844;
          }
        }
        else if (iVar7 == 99) {
          if ((int)uVar14 < 0) {
            uVar21 = *puVar23;
            if ((uVar15 & 8) == 0) {
              if ((uVar15 & 0x10) == 0) {
                uVar3 = 0x20;
              }
              FUN_02052d1c(&local_34,uVar3);
              FUN_02052d84(&local_34,(int)(char)uVar21);
            }
            else {
              FUN_02052d84(&local_34,(int)(char)uVar21);
              FUN_02052d1c(&local_34,0x20);
            }
            pbVar18 = pbVar18 + 1;
            param_4 = puVar23 + 1;
            goto LAB_02052bec;
          }
        }
        else if ((iVar7 == 100) || (iVar7 == 0x69)) goto LAB_0205284c;
        goto switchD_0205263c_default;
      }
      if (iVar7 < 0x6f) {
        if (iVar7 != 0x6e) goto switchD_0205263c_default;
        iVar7 = (int)local_30 - (int)local_2c;
        if ((uVar15 & 0x100) == 0) {
          if ((uVar15 & 0x40) == 0) {
            if ((uVar15 & 0x80) == 0) {
              param_4 = puVar23 + 1;
              *(int *)*puVar23 = iVar7;
            }
            else {
              param_4 = puVar23 + 1;
              piVar5 = (int *)*puVar23;
              *piVar5 = iVar7;
              piVar5[1] = iVar7 >> 0x1f;
            }
          }
          else {
            param_4 = puVar23 + 1;
            *(short *)*puVar23 = (short)iVar7;
          }
        }
        pbVar18 = pbVar18 + 1;
        goto LAB_02052bec;
      }
      switch(iVar7) {
      case 0x6f:
        uVar15 = uVar15 | 0x1000;
        uVar11 = local_74;
        goto LAB_0205284c;
      case 0x70:
        uVar15 = uVar15 | 4;
        uVar14 = local_74;
        cVar4 = 'W';
        goto LAB_02052844;
      case 0x71:
        break;
      case 0x72:
        break;
      case 0x73:
        param_4 = puVar23 + 1;
        pcVar13 = (char *)*puVar23;
        uVar11 = local_84;
        if ((int)uVar14 < 0) {
          cVar4 = *pcVar13;
          while (cVar4 != '\0') {
            uVar11 = uVar11 + 1;
            cVar4 = pcVar13[uVar11];
          }
        }
        else {
          for (; ((int)uVar11 < (int)uVar14 && (pcVar13[uVar11] != '\0')); uVar11 = uVar11 + 1) {
          }
        }
        if ((uVar15 & 8) == 0) {
          if ((uVar15 & 0x10) == 0) {
            uVar3 = 0x20;
          }
          FUN_02052d1c(&local_34,uVar3,uVar21 - uVar11);
          FUN_02052cbc(&local_34,pcVar13);
        }
        else {
          FUN_02052cbc(&local_34,pcVar13,uVar11);
          FUN_02052d1c(&local_34,0x20);
        }
        pbVar18 = pbVar18 + 1;
        goto LAB_02052bec;
      case 0x74:
        break;
      case 0x75:
        uVar15 = uVar15 | 0x1000;
        goto LAB_0205284c;
      case 0x76:
        break;
      case 0x77:
        break;
      case 0x78:
        cVar4 = 'W';
LAB_02052844:
        uVar15 = uVar15 | 0x1000;
        uVar11 = local_64;
LAB_0205284c:
        if ((uVar15 & 8) != 0) {
          uVar15 = uVar15 & 0xffffffef;
        }
        if ((int)uVar14 < 0) {
          uVar14 = local_60;
        }
        else {
          uVar15 = uVar15 & 0xffffffef;
        }
        uVar17 = local_84;
        if ((uVar15 & 0x1000) == 0) {
          if ((uVar15 & 0x100) == 0) {
            if ((uVar15 & 0x40) == 0) {
              if ((uVar15 & 0x80) == 0) {
                param_4 = puVar23 + 1;
                uVar12 = *puVar23;
                uVar8 = (int)uVar12 >> 0x1f;
              }
              else {
                param_4 = puVar23 + 2;
                uVar12 = *puVar23;
                uVar8 = puVar23[1];
              }
            }
            else {
              param_4 = puVar23 + 1;
              uVar12 = (uint)(short)(ushort)*puVar23;
              uVar8 = (int)uVar12 >> 0x1f;
            }
          }
          else {
            param_4 = puVar23 + 1;
            uVar12 = (uint)(char)(byte)*puVar23;
            uVar8 = (int)uVar12 >> 0x1f;
          }
          if ((uVar8 & 0x80000000) == 0) {
            if ((uVar8 != 0 || uVar12 != 0) || (uVar14 != 0)) {
              if ((uVar15 & 2) == 0) {
                if ((uVar15 & 1) != 0) {
                  local_50[0] = ' ';
                  uVar17 = local_60;
                }
              }
              else {
                local_50[0] = '+';
                uVar17 = local_60;
              }
            }
          }
          else {
            uVar17 = ~uVar12;
            local_50[0] = '-';
            uVar12 = uVar17 + 1;
            uVar8 = ~uVar8 + (uint)(0xfffffffe < uVar17);
            uVar17 = local_60;
          }
        }
        else {
          if ((uVar15 & 0x100) == 0) {
            if ((uVar15 & 0x40) == 0) {
              if ((uVar15 & 0x80) == 0) {
                param_4 = puVar23 + 1;
                uVar12 = *puVar23;
                uVar8 = 0;
              }
              else {
                param_4 = puVar23 + 2;
                uVar8 = puVar23[1];
                uVar12 = *puVar23;
              }
            }
            else {
              param_4 = puVar23 + 1;
              uVar12 = (uint)(ushort)*puVar23;
              uVar8 = 0;
            }
          }
          else {
            param_4 = puVar23 + 1;
            uVar12 = (uint)(byte)*puVar23;
            uVar8 = 0;
          }
          uVar16 = uVar15 & 0xfffffffc;
          uVar10 = uVar15 & 4;
          uVar15 = uVar16;
          if (uVar10 != 0) {
            if (uVar11 == 0x10) {
              if (uVar8 != 0 || uVar12 != 0) {
                local_50[1] = 0x30;
                local_50[0] = cVar4 + '!';
                uVar17 = local_5c;
              }
            }
            else {
              if (uVar11 == 8) {
                local_50[0] = '0';
              }
              uVar17 = (uint)(uVar11 == 8);
            }
          }
        }
        uVar10 = local_84;
        if (uVar11 == 8) {
          if (uVar8 != 0 || uVar12 != 0) {
            do {
              local_50[uVar10 + 2] = ((byte)uVar12 & 7) + 0x30;
              uVar11 = uVar8 >> 3;
              uVar12 = uVar12 >> 3 | uVar8 << 0x1d;
              uVar10 = uVar10 + 1;
              uVar8 = uVar11;
            } while (uVar11 != 0 || uVar12 != 0);
          }
        }
        else if (uVar11 == 10) {
          if (uVar8 == 0) {
            for (; uVar12 != 0; uVar12 = uVar12 / 10) {
              local_50[uVar10 + 2] = (char)(uVar12 % 10) + '0';
              uVar10 = uVar10 + 1;
            }
          }
          else {
            lVar2 = CONCAT44(uVar8,uVar12);
            if (uVar8 != 0 || uVar12 != 0) {
              do {
                lVar24 = FUN_0200d0c4((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),10,0);
                local_50[uVar10 + 2] = (char)lVar2 + (char)lVar24 * -10 + '0';
                uVar10 = uVar10 + 1;
                lVar2 = lVar24;
              } while (lVar24 != 0);
            }
          }
        }
        else if ((uVar11 == 0x10) && (uVar8 != 0 || uVar12 != 0)) {
          do {
            uVar11 = uVar12 & 0xf;
            cVar9 = (char)uVar11;
            if (uVar11 < 10) {
              cVar9 = cVar9 + '0';
            }
            uVar16 = uVar8 >> 4;
            uVar12 = uVar12 >> 4 | uVar8 << 0x1c;
            if (9 < uVar11) {
              cVar9 = cVar9 + cVar4;
            }
            local_50[uVar10 + 2] = cVar9;
            uVar10 = uVar10 + 1;
            uVar8 = uVar16;
          } while (uVar16 != 0 || uVar12 != 0);
        }
        if ((uVar17 != 0) && (local_50[0] == '0')) {
          local_50[uVar10 + 2] = '0';
          uVar10 = uVar10 + 1;
          uVar17 = local_84;
        }
        iVar7 = uVar14 - uVar10;
        if (((uVar15 & 0x10) != 0) && (iVar6 = (uVar21 - uVar10) - uVar17, iVar7 < iVar6)) {
          iVar7 = iVar6;
        }
        if (0 < iVar7) {
          uVar21 = uVar21 - iVar7;
        }
        if ((uVar15 & 8) == 0) {
          FUN_02052d1c(&local_34,0x20,uVar21 - (uVar17 + uVar10));
        }
        if (uVar17 != 0) {
          pcVar13 = local_50 + uVar17;
          do {
            pcVar13 = pcVar13 + -1;
            uVar17 = uVar17 - 1;
            FUN_02052d84(&local_34,(int)*pcVar13);
          } while (0 < (int)uVar17);
        }
        FUN_02052d1c(&local_34,0x30);
        if (0 < (int)uVar10) {
          pcVar13 = local_50 + uVar10 + 2;
          do {
            pcVar13 = pcVar13 + -1;
            uVar10 = uVar10 - 1;
            FUN_02052d84(&local_34,(int)*pcVar13);
          } while (0 < (int)uVar10);
        }
        if ((uVar15 & 8) != 0) {
          FUN_02052d1c(&local_34,0x20);
        }
        pbVar18 = pbVar18 + 1;
        goto LAB_02052bec;
      }
switchD_0205263c_default:
      FUN_02052cbc(&local_34,param_3);
LAB_02052bec:
      param_3 = pbVar18;
    } while (*pbVar18 != 0);
  }
  if (local_34 == 0) {
    if (param_2 != 0) {
      local_2c[param_2 + -1] = 0;
    }
  }
  else {
    *local_30 = 0;
  }
  return (int)local_30 - (int)local_2c;
}


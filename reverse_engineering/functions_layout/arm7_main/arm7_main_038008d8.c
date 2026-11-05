
undefined4 FUN_038008d8(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_34;
  int local_30;
  
  for (iVar11 = *(int *)(param_1 + 0x3c); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x50)) {
    if (0 < *(int *)(iVar11 + 0x34)) {
      *(int *)(iVar11 + 0x34) = *(int *)(iVar11 + 0x34) + -1;
    }
    if (((*(byte *)(iVar11 + 3) & 7) >> 2 == 0) &&
       (*(int *)(iVar11 + 0x14) < *(int *)(iVar11 + 0x18))) {
      *(int *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x14) + 1;
    }
  }
  if ((*param_1 & 0x1f) >> 4 != 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      return 0;
    }
    *param_1 = *param_1 & 0xef;
  }
  if ((0 < *(int *)(param_1 + 0x20)) &&
     (*(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1, 0 < *(int *)(param_1 + 0x20))) {
    return 0;
  }
  FUN_03801cc8(*(undefined4 *)(param_1 + 0x28));
  local_34 = 0x7f;
  local_30 = -1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((*(int *)(param_1 + 0x20) != 0) || ((*param_1 & 0x1f) >> 4 != 0)) {
            return 0;
          }
          uVar12 = 1;
          uVar4 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          if (uVar4 == 0xa2) {
            uVar4 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            uVar12 = (*param_1 & 0x7f) >> 6;
          }
          if (uVar4 == 0xa0) {
            uVar4 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          if (uVar4 == 0xa1) {
            uVar4 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          if ((uVar4 & 0x80) != 0) break;
          uVar5 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          iVar6 = FUN_03801ac0(param_1,param_2);
          iVar11 = uVar4 + (int)(char)param_1[0x13];
          if (uVar12 != 0) {
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            else if (0x7f < iVar11) {
              iVar11 = local_34;
            }
            if (((*param_1 & 7) >> 2 == 0) && (param_4 != 0)) {
              if (iVar6 < 1) {
                iVar7 = local_30;
              }
              else {
                iVar7 = iVar6;
              }
              FUN_038012a4(param_1,param_2,iVar11,uVar5,iVar7);
            }
            param_1[0x14] = (byte)iVar11;
            if (((*param_1 & 3) >> 1 != 0) && (*(int *)(param_1 + 0x20) = iVar6, iVar6 == 0)) {
              *param_1 = *param_1 | 0x10;
            }
          }
        }
        uVar8 = uVar4 & 0xf0;
        if (uVar8 < 0xc1) break;
        if (uVar8 < 0xe1) {
          if (uVar8 < 0xe0) {
            if (uVar8 == 0xd0) goto code_r0x03800cd4;
          }
          else {
            uVar2 = FUN_03801ac0(param_1,param_2);
            if (uVar12 != 0) {
              if (uVar4 == 0xe0) {
                *(undefined2 *)(param_1 + 0x1c) = uVar2;
              }
              else if (uVar4 == 0xe1) {
                *(undefined2 *)(param_2 + 0x18) = uVar2;
              }
              else if (uVar4 == 0xe3) {
                *(undefined2 *)(param_1 + 0x16) = uVar2;
              }
            }
          }
        }
        else if ((uVar8 == 0xf0) && (uVar12 != 0)) {
          switch(uVar4) {
          case 0xfc:
            uVar12 = (uint)param_1[0x3b];
            if (uVar12 != 0) {
              bVar1 = param_1[uVar12 + 0x37];
              if ((bVar1 == 0) || (bVar1 = bVar1 - 1, bVar1 != 0)) {
                param_1[uVar12 + 0x37] = bVar1;
                *(undefined4 *)(param_1 + 0x28) =
                     *(undefined4 *)(param_1 + (param_1[0x3b] - 1) * 4 + 0x2c);
              }
              else {
                param_1[0x3b] = param_1[0x3b] - 1;
              }
            }
            break;
          case 0xfd:
            if (param_1[0x3b] != 0) {
              param_1[0x3b] = param_1[0x3b] - 1;
              *(undefined4 *)(param_1 + 0x28) =
                   *(undefined4 *)(param_1 + (uint)param_1[0x3b] * 4 + 0x2c);
            }
            break;
          case 0xfe:
            break;
          case 0xff:
            return 0xffffffff;
          }
        }
      }
      if (0xbf < uVar8) break;
      if (uVar8 < 0x91) {
        if (uVar8 < 0x90) {
          if ((uVar8 == 0x80) && (iVar11 = FUN_03801ac0(param_1,param_2), uVar12 != 0)) {
            if (uVar4 == 0x80) {
              *(int *)(param_1 + 0x20) = iVar11;
            }
            else if ((uVar4 == 0x81) && (iVar11 < 0x10000)) {
              *(short *)(param_1 + 2) = (short)iVar11;
            }
          }
        }
        else if (uVar4 == 0x93) {
          uVar5 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          FUN_03801bc8(param_1);
          if (((uVar12 != 0) &&
              (pbVar9 = (byte *)FUN_03801770(param_2,uVar5), pbVar9 != (byte *)0x0)) &&
             (pbVar9 != param_1)) {
            FUN_03801750(pbVar9,param_2);
            FUN_038019b8(pbVar9,*(undefined4 *)(param_1 + 0x24));
          }
        }
        else if (uVar4 == 0x94) {
          iVar11 = FUN_03801bc8(param_1);
          if (uVar12 != 0) {
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar11;
          }
        }
        else if (((uVar4 == 0x95) && (iVar11 = FUN_03801bc8(param_1), uVar12 != 0)) &&
                (param_1[0x3b] < 3)) {
          *(undefined4 *)(param_1 + (uint)param_1[0x3b] * 4 + 0x2c) =
               *(undefined4 *)(param_1 + 0x28);
          param_1[0x3b] = param_1[0x3b] + 1;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar11;
        }
      }
      else if (uVar8 == 0xb0) {
        uVar5 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        sVar3 = FUN_03801ac0(param_1,param_2);
        uVar8 = (uint)sVar3;
        psVar10 = (short *)FUN_03800814(param_2,uVar5);
        if ((uVar12 != 0) && (psVar10 != (short *)0x0)) {
          switch(uVar4) {
          case 0xb0:
            *psVar10 = sVar3;
            break;
          case 0xb1:
            *psVar10 = *psVar10 + sVar3;
            break;
          case 0xb2:
            *psVar10 = *psVar10 - sVar3;
            break;
          case 0xb3:
            *psVar10 = *psVar10 * sVar3;
            break;
          case 0xb4:
            if (uVar8 != 0) {
              sVar3 = FUN_038078c0((int)*psVar10,uVar8);
              *psVar10 = sVar3;
            }
            break;
          case 0xb5:
            if ((int)uVar8 < 0) {
              *psVar10 = (short)((int)*psVar10 >> (-uVar8 & 0xff));
            }
            else {
              *psVar10 = (short)((int)*psVar10 << (uVar8 & 0xff));
            }
            break;
          case 0xb6:
            bVar13 = (int)uVar8 < 0;
            if (bVar13) {
              uVar8 = (int)(uVar8 * -0x10000) >> 0x10;
            }
            iVar11 = FUN_037ff368();
            sVar3 = (short)(iVar11 * (uVar8 + 1) >> 0x10);
            if (bVar13) {
              sVar3 = -sVar3;
            }
            *psVar10 = sVar3;
            break;
          case 0xb7:
            break;
          case 0xb8:
            *param_1 = *param_1 & 0xbf | ((int)*psVar10 == uVar8) << 6;
            break;
          case 0xb9:
            *param_1 = *param_1 & 0xbf | ((int)uVar8 <= (int)*psVar10) << 6;
            break;
          case 0xba:
            *param_1 = *param_1 & 0xbf | ((int)uVar8 < (int)*psVar10) << 6;
            break;
          case 0xbb:
            *param_1 = *param_1 & 0xbf | ((int)*psVar10 <= (int)uVar8) << 6;
            break;
          case 0xbc:
            *param_1 = *param_1 & 0xbf | ((int)*psVar10 < (int)uVar8) << 6;
            break;
          case 0xbd:
            *param_1 = *param_1 & 0xbf | ((int)*psVar10 != uVar8) << 6;
          }
        }
      }
    }
code_r0x03800cd4:
    bVar1 = FUN_03801ac0(param_1,param_2);
    if (uVar12 != 0) {
      switch(uVar4) {
      case 0xc0:
        param_1[8] = bVar1 - 0x40;
        break;
      case 0xc1:
        param_1[4] = bVar1;
        break;
      case 0xc2:
        *(byte *)(param_2 + 5) = bVar1;
        break;
      case 0xc3:
        param_1[0x13] = bVar1;
        break;
      case 0xc4:
        param_1[6] = bVar1;
        break;
      case 0xc5:
        param_1[7] = bVar1;
        break;
      case 0xc6:
        param_1[0x12] = bVar1;
        break;
      case 199:
        *param_1 = *param_1 & 0xfd | (bVar1 & 1) << 1;
        break;
      case 200:
        *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
        FUN_03801898(param_1,param_2);
        FUN_0380185c(param_1);
        break;
      case 0xc9:
        param_1[0x14] = bVar1 + param_1[0x13];
        *param_1 = *param_1 | 0x20;
        break;
      case 0xca:
        param_1[0x1a] = bVar1;
        break;
      case 0xcb:
        param_1[0x19] = bVar1;
        break;
      case 0xcc:
        param_1[0x18] = bVar1;
        break;
      case 0xcd:
        param_1[0x1b] = bVar1;
        break;
      case 0xce:
        *param_1 = *param_1 & 0xdf | (bVar1 & 1) << 5;
        break;
      case 0xcf:
        param_1[0x15] = bVar1;
        break;
      case 0xd0:
        param_1[0xe] = bVar1;
        break;
      case 0xd1:
        param_1[0xf] = bVar1;
        break;
      case 0xd2:
        param_1[0x10] = bVar1;
        break;
      case 0xd3:
        param_1[0x11] = bVar1;
        break;
      case 0xd4:
        if (param_1[0x3b] < 3) {
          *(undefined4 *)(param_1 + (uint)param_1[0x3b] * 4 + 0x2c) =
               *(undefined4 *)(param_1 + 0x28);
          param_1[param_1[0x3b] + 0x38] = bVar1;
          param_1[0x3b] = param_1[0x3b] + 1;
        }
        break;
      case 0xd5:
        param_1[5] = bVar1;
        break;
      case 0xd6:
        if (DAT_03808a88 != 0) {
          FUN_03800814(param_2,bVar1);
        }
        break;
      case 0xd7:
        FUN_03800750(param_1,param_2);
      }
    }
  } while( true );
}


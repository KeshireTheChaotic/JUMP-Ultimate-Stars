
/* WARNING: Removing unreachable block (ram,0x020041ea) */

undefined4 FUN_02004168(code *param_1,undefined4 param_2,byte *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  byte *local_94;
  uint *local_90;
  uint uStack_8c;
  int iStack_84;
  int iStack_80;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  int iStack_58;
  undefined4 local_50;
  char acStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  uint uStack_40;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  byte bStack_39;
  int iStack_38;
  byte abStack_34 [32];
  
  uVar10 = CONCAT44(iStack_84,iStack_60);
  bVar1 = *param_3;
  iVar6 = (int)(char)bVar1;
  bVar9 = false;
  local_50 = 0;
  bVar3 = false;
  if (iVar6 == 0) {
    switchD_020042d2::caseD_42();
  }
  bVar2 = true;
  if ((-1 < iVar6) && (iVar6 < 0x80)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ushort *)(&DAT_0208d520 + iVar6 * 2) & 0x100;
  }
  local_94 = param_3;
  if (uVar4 != 0) {
    do {
      bVar9 = true;
      local_94 = local_94 + 1;
      iVar6 = (int)(char)*local_94;
      if ((-1 < iVar6) && (iVar6 < 0x80)) {
        bVar9 = false;
      }
      if (bVar9) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(ushort *)(&DAT_0208d520 + iVar6 * 2) & 0x100;
      }
    } while (uVar4 != 0);
    do {
      acStack_4c[0] = (*param_1)(param_2,0,0);
      iVar6 = (int)acStack_4c[0];
      if ((iVar6 < 0) || (0x7f < iVar6)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(ushort *)(&DAT_0208d520 + iVar6 * 2) & 0x100;
      }
    } while (uVar4 != 0);
    (*param_1)(param_2,iVar6,1);
    goto switchD_02004960_caseD_4;
  }
  if (iVar6 != 0x25) {
    acStack_4c[0] = (*param_1)(param_2,0,0);
    if ((uint)bVar1 == (int)acStack_4c[0]) {
      local_94 = param_3 + 1;
    }
    else {
      (*param_1)(param_2,(int)acStack_4c[0],1);
      if (param_5 == 0) goto code_r0x02004996;
      local_94 = param_3 + 1;
    }
    goto switchD_02004960_caseD_4;
  }
  local_94 = (byte *)FUN_02003e30(param_3,&cStack_3c);
  if ((cStack_3c == '\0') && (bStack_39 != 0x25)) {
    local_90 = param_4 + 1;
    piVar7 = (int *)*param_4;
  }
  else {
    piVar7 = (int *)0x0;
    local_90 = param_4;
  }
  if ((bStack_39 != 0x6e) && (iVar6 = (*param_1)(param_2,0,2), iVar6 != 0)) {
    if (param_5 == 0) goto code_r0x02004996;
    bVar9 = true;
  }
  if (bStack_39 < 0x5c) {
    if (bStack_39 < 0x5b) {
      if (0x47 < bStack_39) {
        if (bStack_39 != 0x58) goto code_r0x02004996;
        goto switchD_02004306_caseD_78;
      }
      switch(bStack_39) {
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
        goto switchD_020042d2_caseD_41;
      case 0x42:
      case 0x43:
      case 0x44:
        goto code_r0x02004996;
      default:
        if (bStack_39 != 0x25) goto code_r0x02004996;
        if (!bVar9) {
          do {
            acStack_4c[0] = (*param_1)(param_2,0,0);
            iVar6 = (int)acStack_4c[0];
            if ((iVar6 < 0) || (0x7f < iVar6)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(ushort *)(&DAT_0208d520 + iVar6 * 2) & 0x100;
            }
          } while (uVar4 != 0);
          if ((iVar6 != 0x25) && ((*param_1)(param_2,iVar6,1), param_5 == 0)) goto code_r0x02004996;
        }
      }
    }
    else {
LAB_020047b0:
      if (piVar7 == (int *)0x0) {
        uStack_40 = 0;
        while (((iVar6 = iStack_38 + -1, bVar9 = iStack_38 != 0, iStack_38 = iVar6, bVar9 &&
                (uStack_74 = (*param_1)(param_2,0,0), uStack_74 != 0xffffffff)) &&
               (acStack_4c[0] = (char)uStack_74,
               (1 << ((int)acStack_4c[0] & 7U) & (uint)abStack_34[(int)(uStack_74 & 0xff) >> 3]) !=
               0))) {
          uStack_40 = uStack_40 + 1;
        }
        acStack_4c[0] = (char)uStack_74;
        if (uStack_40 == 0) {
          (*param_1)(param_2,(int)acStack_4c[0],1);
        }
        else {
LAB_02004932:
          if (-1 < iStack_38) {
            (*param_1)(param_2,(int)acStack_4c[0],1);
          }
          bVar3 = true;
        }
      }
      else {
        if (param_5 != 0) {
          uStack_8c = 1;
          uStack_64 = *local_90 - 1;
        }
        uStack_40 = 0;
        if (bVar9) {
          if (uStack_64 != 0) {
            *(char *)piVar7 = '\0';
          }
        }
        else {
          piVar8 = piVar7;
          while ((iVar6 = iStack_38 + -1, bVar9 = iStack_38 != 0, iStack_38 = iVar6, bVar9 &&
                 ((((param_5 == 0 || (uStack_8c = (uint)(uStack_40 <= uStack_64), uStack_8c != 0))
                   && (uStack_74 = (*param_1)(param_2,0,0), uStack_74 != 0xffffffff)) &&
                  (acStack_4c[0] = (char)uStack_74,
                  ((uint)abStack_34[(int)(uStack_74 & 0xff) >> 3] & 1 << ((int)acStack_4c[0] & 7U))
                  != 0))))) {
            if (cStack_3a == '\n') {
              FUN_02002334(piVar8,acStack_4c,1);
              piVar8 = (int *)((int)piVar8 + 2);
            }
            else {
              *(char *)piVar8 = acStack_4c[0];
              piVar8 = (int *)((int)piVar8 + 1);
            }
            uStack_40 = uStack_40 + 1;
          }
          acStack_4c[0] = (char)uStack_74;
          if ((uStack_40 != 0) && ((param_5 == 0 || (uStack_8c != 0)))) {
            if (cStack_3a == '\n') {
              *(undefined2 *)piVar8 = 0;
            }
            else {
              *(char *)piVar8 = '\0';
            }
            local_50 = 1;
            goto LAB_02004932;
          }
          (*param_1)(param_2,(int)acStack_4c[0],1);
          if (param_5 == 0) goto code_r0x02004996;
          if (uStack_64 != 0) {
            *(char *)piVar7 = '\0';
          }
        }
      }
    }
    goto switchD_02004960_caseD_4;
  }
  if (0x78 < bStack_39) goto code_r0x02004996;
  switch(bStack_39) {
  case 99:
    if (cStack_3b == '\0') {
      iStack_38 = 1;
    }
    if (piVar7 == (int *)0x0) {
      uStack_40 = 0;
      while ((iVar6 = iStack_38 + -1, bVar9 = iStack_38 != 0, iStack_38 = iVar6, bVar9 &&
             (uStack_74 = (*param_1)(param_2,0,0), uStack_74 != 0xffffffff))) {
        acStack_4c[0] = (char)uStack_74;
        uStack_40 = uStack_40 + 1;
      }
      acStack_4c[0] = (char)uStack_74;
      if (uStack_40 == 0) goto code_r0x02004996;
LAB_0200470c:
      bVar3 = true;
    }
    else {
      if (param_5 != 0) {
        uStack_8c = 1;
        uStack_64 = *local_90;
      }
      uStack_40 = 0;
      if (bVar9) {
        if (uStack_64 != 0) {
          *(char *)piVar7 = '\0';
        }
      }
      else {
        piVar8 = piVar7;
        while ((iVar6 = iStack_38 + -1, bVar9 = iStack_38 != 0, iStack_38 = iVar6, bVar9 &&
               (((param_5 == 0 || (uStack_8c = (uint)(uStack_40 < uStack_64), uStack_8c != 0)) &&
                (uStack_74 = (*param_1)(param_2,0,0), uStack_74 != 0xffffffff))))) {
          acStack_4c[0] = (char)uStack_74;
          if (cStack_3a == '\n') {
            FUN_02002334(piVar8,acStack_4c,1);
          }
          else {
            *(char *)piVar8 = acStack_4c[0];
          }
          piVar8 = (int *)((int)piVar8 + 1);
          uStack_40 = uStack_40 + 1;
        }
        acStack_4c[0] = (char)uStack_74;
        if ((uStack_40 != 0) && ((param_5 == 0 || (uStack_8c != 0)))) {
          local_50 = 1;
          goto LAB_0200470c;
        }
        if (param_5 == 0) goto code_r0x02004996;
        if (uStack_64 != 0) {
          *(char *)piVar7 = '\0';
        }
      }
    }
    break;
  case 100:
    uVar5 = 10;
    goto LAB_02004346;
  case 0x65:
  case 0x66:
  case 0x67:
    goto switchD_020042d2_caseD_41;
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x76:
  case 0x77:
    goto code_r0x02004996;
  case 0x69:
    uVar5 = 0;
LAB_02004346:
    if (bVar9) {
      iStack_80 = 0;
      uVar10 = 0;
    }
    else {
      if ((cStack_3a == '\a') || (cStack_3a == '\x04')) {
        uVar10 = FUN_02005bac(uVar5,iStack_38,param_1,param_2,&uStack_40,&iStack_44,auStack_48);
      }
      else {
        iStack_58 = FUN_02005960(uVar5,iStack_38,param_1,param_2,&uStack_40,&iStack_44,auStack_48);
      }
      iStack_84 = (int)((ulonglong)uVar10 >> 0x20);
      iStack_60 = (int)uVar10;
      if (uStack_40 == 0) {
        if (param_5 == 0) goto code_r0x02004996;
        bVar9 = true;
        iStack_80 = 0;
        uVar10 = 0;
      }
      else if ((cStack_3a == '\a') || (cStack_3a == '\x04')) {
        if (iStack_44 != 0) {
          uVar10 = CONCAT44(-(uint)(iStack_60 != 0) - iStack_84,-iStack_60);
        }
      }
      else if (iStack_44 == 0) {
        iStack_80 = iStack_58;
        uVar10 = 0;
      }
      else {
        iStack_80 = -iStack_58;
        uVar10 = 0;
      }
    }
    if (piVar7 != (int *)0x0) {
      switch(cStack_3a) {
      case '\0':
        *piVar7 = iStack_80;
        break;
      case '\x01':
        *(char *)piVar7 = (char)iStack_80;
        break;
      case '\x02':
        *(short *)piVar7 = (short)iStack_80;
        break;
      case '\x03':
        *piVar7 = iStack_80;
        break;
      case '\x04':
        *(undefined8 *)piVar7 = uVar10;
        break;
      case '\x05':
        *piVar7 = iStack_80;
        break;
      case '\x06':
        *piVar7 = iStack_80;
        break;
      case '\a':
        *(undefined8 *)piVar7 = uVar10;
      }
      if (!bVar9) {
        local_50 = 1;
      }
    }
    bVar3 = true;
    break;
  case 0x6e:
    if (piVar7 != (int *)0x0) {
      switch(cStack_3a) {
      case '\0':
        *piVar7 = 0;
        break;
      case '\x01':
        *(char *)piVar7 = '\0';
        break;
      case '\x02':
        *(undefined2 *)piVar7 = 0;
        break;
      case '\x03':
        *piVar7 = 0;
        break;
      case '\a':
        *piVar7 = 0;
        piVar7[1] = 0;
      }
    }
    break;
  case 0x6f:
    uVar5 = 8;
    goto LAB_02004472;
  case 0x73:
    if (!bVar9) {
      acStack_4c[0] = (*param_1)(param_2,0,0);
      while( true ) {
        iVar6 = (int)acStack_4c[0];
        if ((iVar6 < 0) || (0x7f < iVar6)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(ushort *)(&DAT_0208d520 + iVar6 * 2) & 0x100;
        }
        if (uVar4 == 0) break;
        acStack_4c[0] = (*param_1)(param_2,0,0);
      }
      (*param_1)(param_2,iVar6,1);
    }
    goto LAB_020047b0;
  case 0x75:
    uVar5 = 10;
    goto LAB_02004472;
  case 0x78:
switchD_02004306_caseD_78:
    uVar5 = 0x10;
LAB_02004472:
    if (bVar9) {
      iStack_58 = 0;
      uVar10 = 0;
    }
    else {
      if ((cStack_3a == '\a') || (cStack_3a == '\x04')) {
        uVar10 = FUN_02005bac(uVar5,iStack_38,param_1,param_2,&uStack_40,&iStack_44,auStack_48);
      }
      else {
        iStack_58 = FUN_02005960(uVar5,iStack_38,param_1,param_2,&uStack_40,&iStack_44,auStack_48);
      }
      iStack_84 = (int)((ulonglong)uVar10 >> 0x20);
      iStack_60 = (int)uVar10;
      if (uStack_40 == 0) {
        if (param_5 == 0) goto code_r0x02004996;
        bVar9 = true;
        iStack_58 = 0;
        uVar10 = 0;
      }
      else if (iStack_44 != 0) {
        if (cStack_3a == '\a') {
          uVar10 = CONCAT44(-(uint)(iStack_60 != 0) - iStack_84,-iStack_60);
        }
        else {
          iStack_58 = -iStack_58;
        }
      }
    }
    if (piVar7 != (int *)0x0) {
      switch(cStack_3a) {
      case '\0':
        *piVar7 = iStack_58;
        break;
      case '\x01':
        *(char *)piVar7 = (char)iStack_58;
        break;
      case '\x02':
        *(short *)piVar7 = (short)iStack_58;
        break;
      case '\x03':
        *piVar7 = iStack_58;
        break;
      case '\x04':
        *(undefined8 *)piVar7 = uVar10;
        break;
      case '\x05':
        *piVar7 = iStack_58;
        break;
      case '\x06':
        *piVar7 = iStack_58;
        break;
      case '\a':
        *(undefined8 *)piVar7 = uVar10;
      }
      if (!bVar9) {
        local_50 = 1;
      }
    }
    bVar3 = true;
    break;
  default:
    if (bStack_39 != 0x61) goto code_r0x02004996;
switchD_020042d2_caseD_41:
    if (bVar9) {
      uVar10 = FUN_0200c85c(DAT_02093138);
    }
    else {
      uVar10 = FUN_02004d84(iStack_38,param_1,param_2,&uStack_40,auStack_48);
      if (uStack_40 == 0) {
        if (param_5 == 0) goto code_r0x02004996;
        bVar9 = true;
        uVar10 = FUN_0200c85c(DAT_02093138);
      }
    }
    if (piVar7 != (int *)0x0) {
      if (cStack_3a == '\0') {
        iVar6 = FUN_0200b6c4((int)uVar10);
        *piVar7 = iVar6;
      }
      else if (cStack_3a == '\b') {
        *(undefined8 *)piVar7 = uVar10;
      }
      else if (cStack_3a == '\t') {
        *(undefined8 *)piVar7 = uVar10;
      }
      if (!bVar9) {
        local_50 = 1;
      }
    }
    bVar3 = true;
  }
switchD_02004960_caseD_4:
  if (*local_94 != 0) {
    FUN_02004192();
  }
code_r0x02004996:
  iVar6 = (*param_1)(param_2,0,2);
  if ((iVar6 == 0) || (bVar3)) {
    return local_50;
  }
  return 0xffffffff;
}


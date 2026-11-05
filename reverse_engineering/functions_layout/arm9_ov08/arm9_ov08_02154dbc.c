
void FUN_02154dbc(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = *(char *)(DAT_0216e6dc + 0x121);
  *(undefined1 *)(DAT_0216e6dc + 0x121) = *(undefined1 *)(param_1 + cVar1 * 4 + 0x216a6ac);
  cVar2 = *(char *)(DAT_0216e6dc + 0x121);
  if ((cVar2 == '.') && (param_1 == 3)) {
    *(char *)(DAT_0216e6dc + 0x120) = cVar1;
    goto LAB_02155076;
  }
  if ((cVar2 == '3') && ((param_1 == 1 || (param_1 == 3)))) {
    *(char *)(DAT_0216e6dc + 0x120) = cVar1;
    goto LAB_02155076;
  }
  if ((cVar2 == '4') && ((param_1 == 1 || (param_1 == 3)))) {
    if (cVar1 != 0x2e) {
      *(char *)(DAT_0216e6dc + 0x120) = cVar1;
    }
    goto LAB_02155076;
  }
  if (cVar2 == -1) {
    if ((*(char *)(DAT_0216e6dc + 0x120) == '#') || (*(char *)(DAT_0216e6dc + 0x120) == '2')) {
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x23;
    }
    else {
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x22;
    }
    goto LAB_02155076;
  }
  if (cVar2 != -2) {
    if (cVar2 != -3) {
      if (cVar2 != -4) {
        if (cVar2 != -5) goto LAB_02155076;
        iVar3 = (int)*(char *)(DAT_0216e6dc + 0x120);
        if (0x23 < iVar3) {
          if (iVar3 < 0x2b) {
            if (0x29 < iVar3) {
switchD_02154fea_caseD_7:
              *(undefined1 *)(DAT_0216e6dc + 0x121) = 7;
              goto LAB_02155076;
            }
            if (iVar3 == 0x29) goto switchD_02154fea_caseD_6;
          }
          else if ((iVar3 < 0x33) && (0x2b < iVar3)) {
            if (iVar3 == 0x2c) goto switchD_02154fea_caseD_9;
            if (iVar3 == 0x2d) goto switchD_02154fea_caseD_a;
            if (iVar3 == 0x32) goto LAB_02155068;
          }
          goto switchD_02154fea_caseD_0;
        }
        if (0x22 < iVar3) {
LAB_02155068:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x32;
          goto LAB_02155076;
        }
        if (iVar3 < 0xc) {
          switch(iVar3) {
          case 6:
switchD_02154fea_caseD_6:
            *(undefined1 *)(DAT_0216e6dc + 0x121) = 6;
            goto LAB_02155076;
          case 7:
            goto switchD_02154fea_caseD_7;
          case 9:
switchD_02154fea_caseD_9:
            *(undefined1 *)(DAT_0216e6dc + 0x121) = 9;
            goto LAB_02155076;
          case 10:
switchD_02154fea_caseD_a:
            *(undefined1 *)(DAT_0216e6dc + 0x121) = 10;
            goto LAB_02155076;
          case 0xb:
switchD_02154fea_caseD_b:
            *(undefined1 *)(DAT_0216e6dc + 0x121) = 0xb;
            goto LAB_02155076;
          }
        }
        else if (iVar3 == 0x22) goto switchD_02154fea_caseD_b;
switchD_02154fea_caseD_0:
        *(undefined1 *)(DAT_0216e6dc + 0x121) = 8;
        goto LAB_02155076;
      }
      iVar3 = (int)*(char *)(DAT_0216e6dc + 0x120);
      if (0x26 < iVar3) {
        if (iVar3 < 0x29) {
          if (0x27 < iVar3) {
switchD_02154f6e_caseD_5:
            *(undefined1 *)(DAT_0216e6dc + 0x121) = 5;
            goto LAB_02155076;
          }
          if (iVar3 == 0x27) goto switchD_02154f6e_caseD_4;
        }
        else if (iVar3 == 0x31) {
switchD_02154f6e_caseD_0:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0;
          goto LAB_02155076;
        }
        goto switchD_02154f6e_caseD_2;
      }
      if (0x25 < iVar3) {
switchD_02154f6e_caseD_3:
        *(undefined1 *)(DAT_0216e6dc + 0x121) = 3;
        goto LAB_02155076;
      }
      if (iVar3 < 6) {
        switch(iVar3) {
        case 0:
          goto switchD_02154f6e_caseD_0;
        case 1:
          goto switchD_02154f6e_caseD_1;
        default:
switchD_02154f6e_caseD_2:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 2;
          goto LAB_02155076;
        case 3:
          goto switchD_02154f6e_caseD_3;
        case 4:
switchD_02154f6e_caseD_4:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 4;
          goto LAB_02155076;
        case 5:
          goto switchD_02154f6e_caseD_5;
        }
      }
      if (iVar3 != 0x24) goto switchD_02154f6e_caseD_2;
switchD_02154f6e_caseD_1:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 1;
      goto LAB_02155076;
    }
    iVar3 = (int)*(char *)(DAT_0216e6dc + 0x120);
    if (0x23 < iVar3) {
      if (iVar3 < 0x2b) {
        if (0x29 < iVar3) {
switchD_02154ed4_caseD_7:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2a;
          goto LAB_02155076;
        }
        if (iVar3 == 0x29) goto switchD_02154ed4_caseD_6;
      }
      else if ((iVar3 < 0x33) && (0x2b < iVar3)) {
        if (iVar3 == 0x2c) goto switchD_02154ed4_caseD_9;
        if (iVar3 == 0x2d) goto switchD_02154ed4_caseD_a;
        if (iVar3 == 0x32) goto switchD_02154ed4_caseD_b;
      }
      goto switchD_02154ed4_caseD_0;
    }
    if (iVar3 < 0x23) {
      if (iVar3 < 0xc) {
        switch(iVar3) {
        case 6:
switchD_02154ed4_caseD_6:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x29;
          goto LAB_02155076;
        case 7:
          goto switchD_02154ed4_caseD_7;
        case 9:
switchD_02154ed4_caseD_9:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2c;
          goto LAB_02155076;
        case 10:
switchD_02154ed4_caseD_a:
          *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2d;
          goto LAB_02155076;
        case 0xb:
          goto switchD_02154ed4_caseD_b;
        }
      }
      else if (iVar3 == 0x22) goto switchD_02154ed4_caseD_b;
switchD_02154ed4_caseD_0:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2b;
    }
    else {
switchD_02154ed4_caseD_b:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2e;
    }
    goto LAB_02155076;
  }
  iVar3 = (int)*(char *)(DAT_0216e6dc + 0x120);
  if (0x26 < iVar3) {
    if (iVar3 < 0x29) {
      if (0x27 < iVar3) {
switchD_02154e58_caseD_5:
        *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x28;
        goto LAB_02155076;
      }
      if (iVar3 == 0x27) goto switchD_02154e58_caseD_4;
    }
    else if (iVar3 == 0x31) {
switchD_02154e58_caseD_0:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x31;
      goto LAB_02155076;
    }
    goto switchD_02154e58_caseD_2;
  }
  if (0x25 < iVar3) {
switchD_02154e58_caseD_3:
    *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x26;
    goto LAB_02155076;
  }
  if (iVar3 < 6) {
    switch(iVar3) {
    case 0:
      goto switchD_02154e58_caseD_0;
    case 1:
      goto switchD_02154e58_caseD_1;
    default:
switchD_02154e58_caseD_2:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x25;
      goto LAB_02155076;
    case 3:
      goto switchD_02154e58_caseD_3;
    case 4:
switchD_02154e58_caseD_4:
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x27;
      goto LAB_02155076;
    case 5:
      goto switchD_02154e58_caseD_5;
    }
  }
  if (iVar3 != 0x24) goto switchD_02154e58_caseD_2;
switchD_02154e58_caseD_1:
  *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x24;
LAB_02155076:
  FUN_02155088();
  FUN_02162378(8);
  return;
}



undefined4 FUN_0214dc1c(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    FUN_0214cf10(param_1,param_2,param_3);
    *(uint *)(unaff_r6 + 4) = unaff_r4;
LAB_0214dc58:
    if (*(short *)(unaff_r5 + 4) == 0) {
      return 0;
    }
    iVar2 = FUN_0214cdc4();
    unaff_r5 = (byte *)(unaff_r7 + 6 + iVar2);
    param_3 = FUN_0214cdc4(*(undefined2 *)(unaff_r5 + 2));
    bVar1 = *unaff_r5;
    if (bVar1 < 0x22) {
      if (bVar1 < 0x21) {
        if (bVar1 < 0x16) {
          switch(bVar1) {
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
            if (5 < param_3) {
              return 0xffffffff;
            }
            break;
          case 0x15:
            goto switchD_0214db44_caseD_15;
          }
        }
        else if (bVar1 == 0x20) goto FUN_0214db7c;
      }
      else {
FUN_0214db7c:
        if (0xd < param_3) {
          return 0xffffffff;
        }
      }
    }
    else if (bVar1 < 0x24) {
      if ((0x22 < bVar1) || (bVar1 == 0x22)) goto FUN_0214db7c;
    }
    else if (bVar1 == 0x25) {
switchD_0214db44_caseD_15:
      if (0x21 < param_3) {
        return 0xffffffff;
      }
    }
    if (bVar1 < 0x22) {
      if (bVar1 < 0x21) {
        if (bVar1 < 0x16) {
          switch(bVar1) {
          case 0x10:
            goto switchD_0214dbbc_caseD_10;
          case 0x11:
            goto switchD_0214dbbc_caseD_11;
          case 0x12:
            goto switchD_0214dbbc_caseD_12;
          case 0x13:
            goto switchD_0214dbbc_caseD_13;
          default:
            goto switchD_0214dbbc_caseD_14;
          case 0x15:
            goto switchD_0214dbbc_caseD_15;
          }
        }
        if (bVar1 != 0x20) {
          return 0xffffffff;
        }
switchD_0214dbbc_caseD_10:
        FUN_0214cf10(unaff_r6 + 0x30,unaff_r5 + 6,param_3);
        *(uint *)(unaff_r6 + 4) = param_3;
      }
      else {
switchD_0214dbbc_caseD_11:
        FUN_0214cf10(unaff_r6 + 0x70,unaff_r5 + 6,param_3);
        *(uint *)(unaff_r6 + 4) = param_3;
      }
      goto LAB_0214dc58;
    }
    if (0x23 < bVar1) {
      if (bVar1 != 0x25) {
        return 0xffffffff;
      }
switchD_0214dbbc_caseD_15:
      if ((param_3 != 0) && (unaff_r5[param_3 + 5] != 0)) {
        return 0xffffffff;
      }
      FUN_0214cf10(unaff_r6 + 8,unaff_r5 + 6,param_3);
      goto LAB_0214dc58;
    }
    if (bVar1 < 0x23) {
      if (bVar1 != 0x22) {
switchD_0214dbbc_caseD_14:
        return 0xffffffff;
      }
switchD_0214dbbc_caseD_12:
      FUN_0214cf10(unaff_r6 + 0xb0,unaff_r5 + 6,param_3);
      *(uint *)(unaff_r6 + 4) = param_3;
      goto LAB_0214dc58;
    }
switchD_0214dbbc_caseD_13:
    param_1 = unaff_r6 + 0xf0;
    param_2 = unaff_r5 + 6;
    unaff_r4 = param_3;
  } while( true );
}


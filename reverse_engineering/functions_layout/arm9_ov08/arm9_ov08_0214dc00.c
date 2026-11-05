
undefined4 FUN_0214dc00(void)

{
  byte bVar1;
  int iVar2;
  uint unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    *(uint *)(unaff_r6 + 4) = unaff_r4;
LAB_0214dc58:
    if (*(short *)(unaff_r5 + 4) == 0) {
      return 0;
    }
    iVar2 = FUN_0214cdc4();
    unaff_r5 = (byte *)(unaff_r7 + 6 + iVar2);
    unaff_r4 = FUN_0214cdc4(*(undefined2 *)(unaff_r5 + 2));
    bVar1 = *unaff_r5;
    if (bVar1 < 0x22) {
      if (bVar1 < 0x21) {
        if (bVar1 < 0x16) {
          switch(bVar1) {
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
            if (5 < unaff_r4) {
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
        if (0xd < unaff_r4) {
          return 0xffffffff;
        }
      }
    }
    else if (bVar1 < 0x24) {
      if ((0x22 < bVar1) || (bVar1 == 0x22)) goto FUN_0214db7c;
    }
    else if (bVar1 == 0x25) {
switchD_0214db44_caseD_15:
      if (0x21 < unaff_r4) {
        return 0xffffffff;
      }
    }
    if (0x21 < bVar1) {
      if (bVar1 < 0x24) {
        if (0x22 < bVar1) goto switchD_0214dbbc_caseD_13;
        if (bVar1 != 0x22) {
          return 0xffffffff;
        }
switchD_0214dbbc_caseD_12:
        FUN_0214cf10(unaff_r6 + 0xb0,unaff_r5 + 6,unaff_r4);
        *(uint *)(unaff_r6 + 4) = unaff_r4;
      }
      else {
        if (bVar1 != 0x25) {
          return 0xffffffff;
        }
switchD_0214dbbc_caseD_15:
        if ((unaff_r4 != 0) && (unaff_r5[unaff_r4 + 5] != 0)) {
          return 0xffffffff;
        }
        FUN_0214cf10(unaff_r6 + 8,unaff_r5 + 6,unaff_r4);
      }
      goto LAB_0214dc58;
    }
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
switchD_0214dbbc_caseD_13:
          FUN_0214cf10(unaff_r6 + 0xf0,unaff_r5 + 6,unaff_r4);
          *(uint *)(unaff_r6 + 4) = unaff_r4;
          goto LAB_0214dc58;
        default:
          return 0xffffffff;
        case 0x15:
          goto switchD_0214dbbc_caseD_15;
        }
      }
      if (bVar1 != 0x20) {
        return 0xffffffff;
      }
switchD_0214dbbc_caseD_10:
      FUN_0214cf10(unaff_r6 + 0x30,unaff_r5 + 6,unaff_r4);
      *(uint *)(unaff_r6 + 4) = unaff_r4;
      goto LAB_0214dc58;
    }
switchD_0214dbbc_caseD_11:
    FUN_0214cf10(unaff_r6 + 0x70,unaff_r5 + 6,unaff_r4);
  } while( true );
}


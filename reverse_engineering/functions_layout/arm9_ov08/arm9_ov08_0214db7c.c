
undefined4 FUN_0214db7c(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
code_r0x0214db7c:
  do {
    if (0xd < unaff_r4) {
      return 0xffffffff;
    }
    do {
      while( true ) {
        while( true ) {
          if ((int)param_1 < 0x22) {
            if ((int)param_1 < 0x21) {
              if ((int)param_1 < 0x16) {
                if ((int)(param_1 - 0x10) < 0) {
                  return 0xffffffff;
                }
                uVar1 = (*(code *)((int)&switchD_0214dbbc::switchdataD_0214dbbe +
                                  (int)(short)(&switchD_0214dbbc::switchdataD_0214dbbe)
                                              [param_1 - 0x10]))();
                return uVar1;
              }
              if (param_1 != 0x20) {
                return 0xffffffff;
              }
              FUN_0214cf10(unaff_r6 + 0x30,unaff_r5 + 6,unaff_r4);
              *(uint *)(unaff_r6 + 4) = unaff_r4;
            }
            else {
              FUN_0214cf10(unaff_r6 + 0x70,unaff_r5 + 6,unaff_r4);
              *(uint *)(unaff_r6 + 4) = unaff_r4;
            }
          }
          else if ((int)param_1 < 0x24) {
            if ((int)param_1 < 0x23) {
              if (param_1 != 0x22) {
                return 0xffffffff;
              }
              FUN_0214cf10(unaff_r6 + 0xb0,unaff_r5 + 6,unaff_r4);
              *(uint *)(unaff_r6 + 4) = unaff_r4;
            }
            else {
              FUN_0214cf10(unaff_r6 + 0xf0,unaff_r5 + 6,unaff_r4);
              *(uint *)(unaff_r6 + 4) = unaff_r4;
            }
          }
          else {
            if (param_1 != 0x25) {
              return 0xffffffff;
            }
            if ((unaff_r4 != 0) && (unaff_r5[unaff_r4 + 5] != 0)) {
              return 0xffffffff;
            }
            FUN_0214cf10(unaff_r6 + 8,unaff_r5 + 6,unaff_r4);
          }
          if (*(short *)(unaff_r5 + 4) == 0) {
            return 0;
          }
          iVar2 = FUN_0214cdc4();
          unaff_r5 = (byte *)(unaff_r7 + 6 + iVar2);
          unaff_r4 = FUN_0214cdc4(*(undefined2 *)(unaff_r5 + 2));
          param_1 = (uint)*unaff_r5;
          if (param_1 < 0x22) break;
          if (param_1 < 0x24) {
            if ((0x22 < param_1) || (param_1 == 0x22)) goto code_r0x0214db7c;
          }
          else if ((param_1 == 0x25) && (0x21 < unaff_r4)) {
            return 0xffffffff;
          }
        }
        if (0x20 < param_1) goto code_r0x0214db7c;
        if (0x15 < param_1) break;
        if (-1 < (int)(param_1 - 0x10)) {
          uVar1 = (*(code *)((int)&switchD_0214db44::switchdataD_0214db46 +
                            (int)(short)(&switchD_0214db44::switchdataD_0214db46)[param_1 - 0x10]))
                            ();
          return uVar1;
        }
      }
    } while (param_1 != 0x20);
  } while( true );
}


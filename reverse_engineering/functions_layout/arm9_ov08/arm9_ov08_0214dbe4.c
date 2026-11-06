
undefined4 switchD_0214dbbc::caseD_10(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    FUN_0214cf10(unaff_r6 + 0x30,unaff_r5 + 6,unaff_r4);
    *(uint *)(unaff_r6 + 4) = unaff_r4;
LAB_0214dc58:
    if (*(short *)(unaff_r5 + 4) == 0) {
      return 0;
    }
    iVar3 = FUN_0214cdc4();
    unaff_r5 = (byte *)(unaff_r7 + 6 + iVar3);
    unaff_r4 = FUN_0214cdc4(*(undefined2 *)(unaff_r5 + 2));
    uVar1 = (uint)*unaff_r5;
    if (uVar1 < 0x22) {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x16) {
          if (-1 < (int)(uVar1 - 0x10)) {
            uVar2 = (*(code *)((int)&switchD_0214db44::switchdataD_0214db46 +
                              (int)(short)(&switchD_0214db44::switchdataD_0214db46)[uVar1 - 0x10]))
                              ();
            return uVar2;
          }
        }
        else if (uVar1 == 0x20) goto FUN_0214db7c;
      }
      else {
FUN_0214db7c:
        if (0xd < unaff_r4) {
          return 0xffffffff;
        }
      }
    }
    else if (uVar1 < 0x24) {
      if ((0x22 < uVar1) || (uVar1 == 0x22)) goto FUN_0214db7c;
    }
    else if ((uVar1 == 0x25) && (0x21 < unaff_r4)) {
      return 0xffffffff;
    }
    if (0x21 < uVar1) {
      if (uVar1 < 0x24) {
        if (uVar1 < 0x23) {
          if (uVar1 != 0x22) {
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
        if (uVar1 != 0x25) {
          return 0xffffffff;
        }
        if ((unaff_r4 != 0) && (unaff_r5[unaff_r4 + 5] != 0)) {
          return 0xffffffff;
        }
        FUN_0214cf10(unaff_r6 + 8,unaff_r5 + 6,unaff_r4);
      }
      goto LAB_0214dc58;
    }
    if (0x20 < uVar1) {
      FUN_0214cf10(unaff_r6 + 0x70,unaff_r5 + 6,unaff_r4);
      *(uint *)(unaff_r6 + 4) = unaff_r4;
      goto LAB_0214dc58;
    }
    if (uVar1 < 0x16) {
      if ((int)(uVar1 - 0x10) < 0) {
        return 0xffffffff;
      }
      uVar2 = (*(code *)((int)&switchdataD_0214dbbe +
                        (int)(short)(&switchdataD_0214dbbe)[uVar1 - 0x10]))();
      return uVar2;
    }
    if (uVar1 != 0x20) {
      return 0xffffffff;
    }
  } while( true );
}



int FUN_02006ec8(code *param_1,undefined4 param_2,short *param_3,dword *param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  dword *pdVar6;
  ushort *unaff_r4;
  dword dVar7;
  uint uVar8;
  dword dStack_468;
  dword dStack_464;
  uint uStack_460;
  dword dStack_458;
  dword dStack_454;
  dword dStack_450;
  dword dStack_44c;
  dword dStack_448;
  int iStack_444;
  undefined1 auStack_440 [2];
  undefined2 uStack_43e;
  short asStack_43c [2];
  undefined4 uStack_438;
  uint uStack_434;
  int iStack_430;
  uint uStack_42c;
  ushort auStack_428 [511];
  undefined1 auStack_2a [2];
  dword *pdStack_28;
  dword *pdStack_4;
  
  asStack_43c[0] = 0x20;
  iStack_444 = 0;
  sVar1 = *param_3;
  pdStack_28 = param_4;
  pdStack_4 = param_4;
  do {
    if (sVar1 == 0) {
      return iStack_444;
    }
    iVar4 = FUN_0200764c(param_3,0x25);
    if (iVar4 == 0) {
      iVar4 = FUN_02007620(param_3);
      if (iVar4 == 0) {
        return iStack_444 + iVar4;
      }
      iVar5 = (*param_1)(param_2,param_3);
      if (iVar5 == 0) {
        return -1;
      }
      return iStack_444 + iVar4;
    }
    iVar5 = (iVar4 - (int)param_3) / 2;
    iStack_444 = iStack_444 + iVar5;
    if ((iVar5 != 0) && (iVar5 = (*param_1)(param_2,param_3), iVar5 == 0)) {
      return -1;
    }
    param_3 = (short *)FUN_02005f94(iVar4,&pdStack_4,&uStack_438);
    pdVar6 = pdStack_4;
    uVar3 = uStack_42c;
    uVar8 = uStack_434 >> 0x10;
    if (uVar8 < 0x62) {
      if (uVar8 < 0x61) {
        if (uVar8 < 0x48) {
          if (-1 < (int)(uVar8 - 0x41)) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar8 - 0x41) {
            case 0:
              goto override_jmp_02006f88_case_0;
            default:
              goto override_jmp_02006f88_case_3;
            case 4:
              goto override_jmp_02006f88_case_6;
            }
          }
          if (uVar8 != 0x25) goto override_jmp_02006f88_case_3;
          auStack_428[0] = 0x25;
          unaff_r4 = auStack_428;
          uStack_460 = 1;
          goto LAB_0200748c;
        }
        if (uVar8 != 0x58) goto override_jmp_02006f88_case_3;
        goto override_jmp_02006fbc_case_11;
      }
override_jmp_02006f88_case_0:
      if ((char)uStack_434 == '\t') {
        dStack_468 = *pdStack_4;
        dStack_464 = pdStack_4[1];
      }
      else {
        dStack_468 = *pdStack_4;
        dStack_464 = pdStack_4[1];
      }
      pdStack_4 = pdStack_4 + 2;
      unaff_r4 = (ushort *)
                 FUN_020066f0(dStack_468,dStack_464,&pdStack_28,uStack_438,uStack_434,iStack_430,
                              uStack_42c);
      if (unaff_r4 == (ushort *)0x0) goto override_jmp_02006f88_case_3;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      goto LAB_0200748c;
    }
    if (0x75 < uVar8) {
      if ((0x78 < uVar8) || (uVar8 != 0x78)) goto override_jmp_02006f88_case_3;
override_jmp_02006fbc_case_11:
      uVar8 = uStack_434 & 0xff;
      if (uVar8 == 3) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else if (uVar8 == 4) {
        dStack_450 = *pdStack_4;
        dStack_44c = pdStack_4[1];
        pdStack_4 = pdStack_4 + 2;
      }
      else if (uVar8 == 6) {
        dStack_450 = *pdStack_4;
        dStack_44c = pdStack_4[1];
        pdStack_4 = pdStack_4 + 2;
      }
      else if (uVar8 == 7) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else if (uVar8 == 8) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      if (uVar8 == 2) {
        dStack_448 = dStack_448 & 0xffff;
      }
      if ((uVar8 == 4) || (uVar8 == 6)) {
        unaff_r4 = (ushort *)
                   FUN_020064d8(dStack_450,dStack_44c,&pdStack_28,uStack_438,uStack_434,iStack_430,
                                uStack_42c);
      }
      else {
        unaff_r4 = (ushort *)
                   FUN_02006328(dStack_448,&pdStack_28,uStack_438,uStack_434,iStack_430,uStack_42c);
      }
      if (unaff_r4 == (ushort *)0x0) {
override_jmp_02006f88_case_3:
        iVar5 = FUN_02007620(iVar4);
        if ((iVar5 == 0) || (iVar4 = (*param_1)(param_2,iVar4,iVar5), iVar4 != 0)) {
          return iStack_444 + iVar5;
        }
        return -1;
      }
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      goto LAB_0200748c;
    }
    if ((int)(uVar8 - 100) < 0) {
      if (uVar8 != 99) goto override_jmp_02006f88_case_3;
      unaff_r4 = auStack_428;
      if ((char)uStack_434 == '\x05') {
        pdStack_4 = pdStack_4 + 1;
        auStack_428[0] = (ushort)*pdVar6;
        uStack_460 = 1;
      }
      else {
        auStack_440[0] = (undefined1)*pdStack_4;
        pdStack_4 = pdStack_4 + 1;
        uStack_460 = FUN_02002334(unaff_r4,auStack_440,1);
      }
      goto LAB_0200748c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(uVar8 - 100) {
    case 0:
    case 5:
      uVar8 = uStack_434 & 0xff;
      if (uVar8 == 3) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else if (uVar8 == 4) {
        dStack_450 = *pdStack_4;
        dStack_44c = pdStack_4[1];
        pdStack_4 = pdStack_4 + 2;
      }
      else if (uVar8 == 6) {
        dStack_450 = *pdStack_4;
        dStack_44c = pdStack_4[1];
        pdStack_4 = pdStack_4 + 2;
      }
      else if (uVar8 == 7) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else if (uVar8 == 8) {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      else {
        dStack_448 = *pdStack_4;
        pdStack_4 = pdStack_4 + 1;
      }
      if (uVar8 == 2) {
        dStack_448 = (dword)(short)dStack_448;
      }
      if ((uVar8 == 4) || (uVar8 == 6)) {
        unaff_r4 = (ushort *)
                   FUN_020064d8(dStack_450,dStack_44c,&pdStack_28,uStack_438,uStack_434,iStack_430,
                                uStack_42c);
      }
      else {
        unaff_r4 = (ushort *)
                   FUN_02006328(dStack_448,&pdStack_28,uStack_438,uStack_434,iStack_430,uStack_42c);
      }
      if (unaff_r4 == (ushort *)0x0) goto override_jmp_02006f88_case_3;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      break;
    case 1:
    case 2:
    case 3:
override_jmp_02006f88_case_6:
      if ((char)uStack_434 == '\t') {
        dStack_458 = *pdStack_4;
        dStack_454 = pdStack_4[1];
      }
      else {
        dStack_458 = *pdStack_4;
        dStack_454 = pdStack_4[1];
      }
      pdStack_4 = pdStack_4 + 2;
      unaff_r4 = (ushort *)
                 FUN_02006a44(dStack_458,dStack_454,&pdStack_28,uStack_438,uStack_434,iStack_430,
                              uStack_42c);
      if (unaff_r4 == (ushort *)0x0) goto override_jmp_02006f88_case_3;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      break;
    default:
      goto override_jmp_02006f88_case_3;
    case 10:
      pdVar6 = pdStack_4 + 1;
      unaff_r4 = (ushort *)*pdStack_4;
      pdStack_4 = pdVar6;
      if ((uStack_434 & 0xff) < 9) {
                    /* WARNING: Switch is manually overridden */
        switch(uStack_434 & 0xff) {
        case 0:
          *(int *)unaff_r4 = iStack_444;
          break;
        case 2:
          *unaff_r4 = (ushort)iStack_444;
          break;
        case 3:
          *(int *)unaff_r4 = iStack_444;
          break;
        case 4:
          *(int *)unaff_r4 = iStack_444;
          *(int *)(unaff_r4 + 2) = iStack_444 >> 0x1f;
          break;
        case 6:
          *(int *)unaff_r4 = iStack_444;
          *(int *)(unaff_r4 + 2) = iStack_444 >> 0x1f;
          break;
        case 7:
          *(int *)unaff_r4 = iStack_444;
          break;
        case 8:
          *(int *)unaff_r4 = iStack_444;
        }
      }
      goto override_jmp_020073c2_case_1;
    case 0xb:
      goto override_jmp_02006fbc_case_11;
    case 0xf:
      if ((char)uStack_434 == '\x05') {
        pdStack_4 = pdStack_4 + 1;
        unaff_r4 = (ushort *)*pdVar6;
        if (unaff_r4 == (ushort *)0x0) {
          unaff_r4 = (ushort *)0x2093400;
        }
        if (uStack_438._3_1_ == '\0') {
          if (uStack_438._2_1_ == '\0') {
            uStack_460 = FUN_02007620(unaff_r4);
          }
          else {
            uStack_460 = uStack_42c;
            iVar4 = FUN_02005f80(unaff_r4,0,uStack_42c);
            if (iVar4 != 0) {
              uStack_460 = (iVar4 - (int)unaff_r4) / 2;
            }
          }
        }
        else {
          uVar2 = *unaff_r4;
          unaff_r4 = unaff_r4 + 1;
          uStack_460 = uVar2 & 0xff;
          if ((uStack_438._2_1_ != '\0') && ((int)uStack_42c < (int)uStack_460)) {
            uStack_460 = uStack_42c;
          }
        }
      }
      else {
        pdStack_4 = pdStack_4 + 1;
        dVar7 = *pdVar6;
        if (dVar7 == 0) {
          dVar7 = 0x2093404;
        }
        if (uStack_438._3_1_ == '\0') {
          if (uStack_438._2_1_ == '\0') {
            uVar8 = FUN_02004b04(dVar7);
          }
          else {
            iVar5 = FUN_02002494(dVar7,0,uStack_42c);
            uVar8 = uVar3;
            if (iVar5 != 0) {
              uVar8 = iVar5 - dVar7;
            }
          }
        }
        else {
          uVar8 = *unaff_r4 & 0xff;
          if ((uStack_438._2_1_ != '\0') && ((int)uStack_42c < (int)uVar8)) {
            uVar8 = uVar3;
          }
        }
        uStack_460 = FUN_0200238c(auStack_428,dVar7,uVar8);
        if ((int)uStack_460 < 0) goto override_jmp_02006f88_case_3;
        unaff_r4 = auStack_428;
      }
    }
LAB_0200748c:
    uVar8 = uStack_460;
    if ((uStack_438 & 0xff) != 0) {
      if ((uStack_438 & 0xff) == 2) {
        asStack_43c[0] = 0x30;
      }
      else {
        asStack_43c[0] = 0x20;
      }
      uVar2 = *unaff_r4;
      if ((((uVar2 == 0x2b) || (uVar2 == 0x2d)) || (uVar2 == 0x20)) && (asStack_43c[0] == 0x30)) {
        iVar4 = (*param_1)(param_2,unaff_r4,1);
        if (iVar4 == 0) {
          return -1;
        }
        unaff_r4 = unaff_r4 + 1;
        uStack_460 = uStack_460 - 1;
      }
      if ((int)uVar8 < iStack_430) {
        do {
          iVar4 = (*param_1)(param_2,asStack_43c,1);
          if (iVar4 == 0) {
            return -1;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iStack_430);
      }
    }
    if ((uStack_460 != 0) && (iVar4 = (*param_1)(param_2,unaff_r4,uStack_460), iVar4 == 0)) {
      return -1;
    }
    if (((char)uStack_438 == '\0') && ((int)uVar8 < iStack_430)) {
      do {
        uStack_43e = 0x20;
        iVar4 = (*param_1)(param_2,&uStack_43e,1);
        if (iVar4 == 0) {
          return -1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iStack_430);
    }
    iStack_444 = iStack_444 + uVar8;
override_jmp_020073c2_case_1:
    sVar1 = *param_3;
  } while( true );
}



void FUN_02006ec8(code *param_1,undefined4 param_2,short *param_3,uint *param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ushort *unaff_r4;
  uint uVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
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
  uint *puStack_28;
  uint *puStack_4;
  
  asStack_43c[0] = 0x20;
  iStack_444 = 0;
  sVar1 = *param_3;
  puStack_28 = param_4;
  puStack_4 = param_4;
  do {
    if (sVar1 == 0) {
LAB_02007578:
                    /* WARNING: Could not recover jumptable at 0x02007586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iStack_444);
      return;
    }
    iVar4 = FUN_0200764c(param_3,0x25);
    if (iVar4 == 0) {
      iVar4 = FUN_02007620(param_3);
      iStack_444 = iStack_444 + iVar4;
      if ((iVar4 != 0) && (iVar4 = (*param_1)(param_2,param_3), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x02006f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0xffffffff);
        return;
      }
      goto LAB_02007578;
    }
    iVar5 = (iVar4 - (int)param_3) / 2;
    iStack_444 = iStack_444 + iVar5;
    if ((iVar5 != 0) && (iVar5 = (*param_1)(param_2,param_3), iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x02006f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return;
    }
    param_3 = (short *)FUN_02005f94(iVar4,&puStack_4,&uStack_438);
    puVar6 = puStack_4;
    uVar3 = uStack_42c;
    uVar8 = uStack_434 >> 0x10;
    if (uVar8 < 0x62) {
      if (uVar8 < 0x61) {
        if (uVar8 < 0x48) {
          switch(uVar8) {
          case 0x41:
            goto LAB_0200724e;
          case 0x42:
          case 0x43:
          case 0x44:
            goto LAB_02007452;
          case 0x45:
          case 0x46:
          case 0x47:
            goto code_r0x020071e4;
          default:
            if (uVar8 != 0x25) goto LAB_02007452;
            auStack_428[0] = 0x25;
            unaff_r4 = auStack_428;
            uStack_460 = 1;
            goto LAB_0200748c;
          }
        }
        if (uVar8 != 0x58) goto LAB_02007452;
        goto LAB_020070ec;
      }
LAB_0200724e:
      if ((char)uStack_434 == '\t') {
        uStack_468 = *puStack_4;
        uStack_464 = puStack_4[1];
      }
      else {
        uStack_468 = *puStack_4;
        uStack_464 = puStack_4[1];
      }
      puStack_4 = puStack_4 + 2;
      unaff_r4 = (ushort *)
                 FUN_020066f0(uStack_468,uStack_464,&puStack_28,uStack_438,uStack_434,iStack_430,
                              uStack_42c);
      if (unaff_r4 == (ushort *)0x0) goto LAB_02007452;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      goto LAB_0200748c;
    }
    if (0x75 < uVar8) {
      if ((0x78 < uVar8) || (uVar8 != 0x78)) goto LAB_02007452;
LAB_020070ec:
      uVar8 = uStack_434 & 0xff;
      if (uVar8 == 3) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else if (uVar8 == 4) {
        uStack_450 = *puStack_4;
        uStack_44c = puStack_4[1];
        puStack_4 = puStack_4 + 2;
      }
      else if (uVar8 == 6) {
        uStack_450 = *puStack_4;
        uStack_44c = puStack_4[1];
        puStack_4 = puStack_4 + 2;
      }
      else if (uVar8 == 7) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else if (uVar8 == 8) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      if (uVar8 == 2) {
        uStack_448 = uStack_448 & 0xffff;
      }
      if ((uVar8 == 4) || (uVar8 == 6)) {
        unaff_r4 = (ushort *)
                   FUN_020064d8(uStack_450,uStack_44c,&puStack_28,uStack_438,uStack_434,iStack_430,
                                uStack_42c);
      }
      else {
        unaff_r4 = (ushort *)
                   FUN_02006328(uStack_448,&puStack_28,uStack_438,uStack_434,iStack_430,uStack_42c);
      }
      if (unaff_r4 == (ushort *)0x0) {
LAB_02007452:
        iVar5 = FUN_02007620(iVar4);
        if ((iVar5 == 0) || (iVar4 = (*param_1)(param_2,iVar4,iVar5), iVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0200748a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iStack_444 + iVar5);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x02007478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0xffffffff);
        return;
      }
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      goto LAB_0200748c;
    }
    switch(uVar8) {
    case 100:
    case 0x69:
      uVar8 = uStack_434 & 0xff;
      if (uVar8 == 3) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else if (uVar8 == 4) {
        uStack_450 = *puStack_4;
        uStack_44c = puStack_4[1];
        puStack_4 = puStack_4 + 2;
      }
      else if (uVar8 == 6) {
        uStack_450 = *puStack_4;
        uStack_44c = puStack_4[1];
        puStack_4 = puStack_4 + 2;
      }
      else if (uVar8 == 7) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else if (uVar8 == 8) {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      else {
        uStack_448 = *puStack_4;
        puStack_4 = puStack_4 + 1;
      }
      if (uVar8 == 2) {
        uStack_448 = (uint)(short)uStack_448;
      }
      if ((uVar8 == 4) || (uVar8 == 6)) {
        unaff_r4 = (ushort *)
                   FUN_020064d8(uStack_450,uStack_44c,&puStack_28,uStack_438,uStack_434,iStack_430,
                                uStack_42c);
      }
      else {
        unaff_r4 = (ushort *)
                   FUN_02006328(uStack_448,&puStack_28,uStack_438,uStack_434,iStack_430,uStack_42c);
      }
      if (unaff_r4 == (ushort *)0x0) goto LAB_02007452;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      break;
    case 0x65:
    case 0x66:
    case 0x67:
code_r0x020071e4:
      if ((char)uStack_434 == '\t') {
        uStack_458 = *puStack_4;
        uStack_454 = puStack_4[1];
      }
      else {
        uStack_458 = *puStack_4;
        uStack_454 = puStack_4[1];
      }
      puStack_4 = puStack_4 + 2;
      unaff_r4 = (ushort *)
                 func_0x02006a44(uStack_458,uStack_454,&puStack_28,uStack_438,uStack_434,iStack_430,
                                 uStack_42c);
      if (unaff_r4 == (ushort *)0x0) goto LAB_02007452;
      uStack_460 = (int)(auStack_2a + -(int)unaff_r4) / 2;
      break;
    case 0x68:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x74:
      goto LAB_02007452;
    case 0x6e:
      puVar6 = puStack_4 + 1;
      unaff_r4 = (ushort *)*puStack_4;
      puStack_4 = puVar6;
      if ((uStack_434 & 0xff) < 9) {
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
      goto code_r0x0200756e;
    case 0x6f:
    case 0x75:
      goto LAB_020070ec;
    case 0x73:
      if ((char)uStack_434 == '\x05') {
        puStack_4 = puStack_4 + 1;
        unaff_r4 = (ushort *)*puVar6;
        if ((ushort *)*puVar6 == (ushort *)0x0) {
          unaff_r4 = puRam02007594;
        }
        if (uStack_438._3_1_ == '\0') {
          if (uStack_438._2_1_ == '\0') {
            uStack_460 = FUN_02007620(unaff_r4);
          }
          else {
            uStack_460 = uStack_42c;
            iVar4 = func_0x02005f80(unaff_r4,0,uStack_42c);
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
        puStack_4 = puStack_4 + 1;
        uVar8 = *puVar6;
        if (*puVar6 == 0) {
          uVar8 = uRam02007598;
        }
        if (uStack_438._3_1_ == '\0') {
          if (uStack_438._2_1_ == '\0') {
            uVar7 = FUN_02004b04(uVar8);
          }
          else {
            iVar5 = FUN_02002494(uVar8,0,uStack_42c);
            uVar7 = uVar3;
            if (iVar5 != 0) {
              uVar7 = iVar5 - uVar8;
            }
          }
        }
        else {
          uVar7 = *unaff_r4 & 0xff;
          if ((uStack_438._2_1_ != '\0') && ((int)uStack_42c < (int)uVar7)) {
            uVar7 = uVar3;
          }
        }
        uStack_460 = func_0x0200238c(auStack_428,uVar8,uVar7);
        if ((int)uStack_460 < 0) goto LAB_02007452;
        unaff_r4 = auStack_428;
      }
      break;
    default:
      if (uVar8 != 99) goto LAB_02007452;
      unaff_r4 = auStack_428;
      if ((char)uStack_434 == '\x05') {
        puStack_4 = puStack_4 + 1;
        auStack_428[0] = (ushort)*puVar6;
        uStack_460 = 1;
      }
      else {
        auStack_440[0] = (undefined1)*puStack_4;
        puStack_4 = puStack_4 + 1;
        uStack_460 = FUN_02002334(unaff_r4,auStack_440,1);
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
                    /* WARNING: Could not recover jumptable at 0x020074d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return;
        }
        unaff_r4 = unaff_r4 + 1;
        uStack_460 = uStack_460 - 1;
      }
      if ((int)uVar8 < iStack_430) {
        do {
          iVar4 = (*param_1)(param_2,asStack_43c,1);
          if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x020074fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(0xffffffff);
            return;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iStack_430);
      }
    }
    if ((uStack_460 != 0) && (iVar4 = (*param_1)(param_2,unaff_r4,uStack_460), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0200752a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return;
    }
    if (((char)uStack_438 == '\0') && ((int)uVar8 < iStack_430)) {
      do {
        uStack_43e = 0x20;
        iVar4 = (*param_1)(param_2,&uStack_43e,1);
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0200755e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iStack_430);
    }
    iStack_444 = iStack_444 + uVar8;
code_r0x0200756e:
    sVar1 = *param_3;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d6dc(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_02166314(1);
  if ((iVar2 == 0) && (iVar2 = FUN_02166314(0), iVar2 == 0)) {
    thunk_FUN_02167764(0,*DAT_0216e794);
    thunk_FUN_02167764(1,DAT_0216e794[0xf]);
    iVar4 = 0;
    iVar2 = 0;
    do {
      FUN_02167204(*(undefined4 *)((int)DAT_0216e794 + iVar2 + 0x18));
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    if (DAT_0216e794[0xd] != 0) {
      FUN_02167204();
    }
    FUN_02161654();
    FUN_021664f0(0);
    FUN_021547b8();
    if (*(char *)(DAT_0216e794 + 0x10) != '\f') {
      FUN_02154560();
    }
    FUN_02161230();
    FUN_0216589c(DAT_0216e794[2]);
    iVar4 = 0;
    iVar2 = 0;
    do {
      FUN_0216589c(*(undefined4 *)((int)DAT_0216e794 + iVar2 + 0xc));
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    FUN_02154750(s_char_ybObjMain_ncl_l_0216ba00,0x2066ed5);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x1d);
    _DAT_04000010 = 0;
    _DAT_04000018 = 0;
    _DAT_0400000c = _DAT_0400000c & 0x43 | 0xe10;
    uVar3 = (uint)*(byte *)(DAT_0216e794 + 0x10);
    if (uVar3 < 0xe) {
                    /* WARNING: Switch is manually overridden */
      switch(uVar3) {
      case 0:
      case 1:
        FUN_02157054();
        FUN_0215707c(2,0);
        FUN_02157088(0x215ba5d);
        break;
      case 2:
      case 3:
      case 7:
      case 8:
        break;
      default:
        iVar2 = uVar3 - 4;
        if (8 < uVar3) {
          iVar2 = uVar3 - 6;
        }
        FUN_0215707c(2,0);
        FUN_02157054(iVar2,0);
        FUN_02157088(0x215c309);
        break;
      case 0xb:
        iVar2 = FUN_021622d4();
        uVar1 = FUN_0206a2e8(iVar2 + 0xf0);
        *(undefined1 *)(iVar2 + 0xd0) = uVar1;
        if (*(char *)(iVar2 + 0xf5) != '\0') {
          FUN_020517fc(iVar2 + 0xc0,0,4);
          FUN_020517fc(iVar2 + 0xc4,0,4);
          FUN_020517fc(iVar2 + 0xf0,0,4);
          *(undefined1 *)(iVar2 + 0xd0) = 0;
        }
        if (*(char *)(iVar2 + 0xf6) != '\0') {
          FUN_020517fc(iVar2 + 200,0,8);
        }
        FUN_0215707c(2,0);
        FUN_02157054(0,0);
        FUN_02157088(0x2160465);
        break;
      case 0xc:
        FUN_0215707c(0);
        FUN_02157088(0x215e38d);
        break;
      case 0xd:
        if (DAT_0216e788 == '\0') {
          FUN_0215707c(2,1);
          FUN_02157088(0x215fbd1);
        }
        else {
          iVar2 = FUN_021622d4();
          FUN_02161f10(*(undefined1 *)(iVar2 + 0xf4));
          FUN_0215707c(0,1);
          FUN_02157088(0x21600ed);
        }
      }
    }
    FUN_02166b5c(&DAT_0216e794);
  }
  return;
}


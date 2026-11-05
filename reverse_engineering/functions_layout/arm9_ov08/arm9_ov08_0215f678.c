
void FUN_0215f678(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02166314(1);
  if ((((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) &&
      (iVar1 = FUN_02162484(), iVar1 != 0)) && (iVar1 = FUN_02154444(), iVar1 != 0)) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_0216e7b4 + iVar1 + 4) != 0) {
        FUN_02165d6c();
      }
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_0216e7b4 + iVar1 + 0x10) != 0) {
        FUN_02165d6c();
      }
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    FUN_021547b8();
    FUN_02154560();
    FUN_0216589c(*DAT_0216e7b4);
    FUN_02154750(s_char_ybObjMain_ncl_l_0216bb78,0x2066ed5);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x14);
    if (*(char *)((int)DAT_0216e7b4 + 0x1d) == '\x02') {
      FUN_0215707c(0,0);
      FUN_02157088(0x2157f41);
    }
    else {
      switch(DAT_0216e7b0) {
      case 0:
      case 1:
      case 2:
        FUN_0215707c(2,0);
        iVar1 = FUN_021622d4();
        if (*(char *)(iVar1 + 0xe7) == -1) {
          FUN_02157088(0x21600ed);
        }
        else {
          FUN_02157054(0,0);
          FUN_0215c8c8(0);
          FUN_02157088(0x215e0a9);
        }
        break;
      case 3:
        FUN_0215707c(2,1);
        FUN_02157088(0x2160c45);
      }
    }
    FUN_02166b5c(&DAT_0216e7b4);
  }
  return;
}


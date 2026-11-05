
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215a9ac(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02166314(1);
  if (((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) &&
     (iVar1 = FUN_02154444(), iVar1 != 0)) {
    thunk_FUN_02167764(1,DAT_0216e774[0xf]);
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_0216e774 + iVar1 + 0x10) != 0) {
        FUN_02167204();
      }
      if (*(int *)((int)DAT_0216e774 + iVar1 + 0x24) != 0) {
        FUN_02167204();
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    FUN_02166510(DAT_0216e774[3]);
    FUN_02161654();
    FUN_021547b8();
    FUN_02154560();
    FUN_02161230();
    FUN_0216589c(DAT_0216e774[1]);
    FUN_0216589c(DAT_0216e774[2]);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x1d);
    _DAT_04000010 = 0;
    _DAT_04000018 = 0;
    if ((char)DAT_0216e774[0x15] == '\0') {
      FUN_02161a28();
      iVar1 = FUN_021622d4();
      FUN_02161f10(*(undefined1 *)(iVar1 + 0xf4));
      FUN_0215707c(2,0);
      FUN_02157088(0x21600ed);
    }
    else if (DAT_0216e76c == '\x04') {
      FUN_02161a28();
      FUN_0215707c(0,1);
      FUN_02157088(0x215f281);
    }
    else {
      FUN_02162280(*DAT_0216e774 + (uint)*(byte *)((int)DAT_0216e774 + 0x52) * 0x2a);
      FUN_0215707c(0,0);
      if (*(char *)(*DAT_0216e774 + (uint)*(byte *)((int)DAT_0216e774 + 0x52) * 0x2a + 0x28) == '\0'
         ) {
        FUN_0215707c(0,1);
        FUN_02157054(0,1);
        FUN_02157088(0x216080d);
      }
      else {
        FUN_0215707c(0,1);
        FUN_02157054(1,1);
        FUN_02157088(0x215ba5d);
      }
    }
    FUN_02166b5c(&DAT_0216e774);
  }
  return;
}


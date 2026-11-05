
undefined4 FUN_02153538(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_02153938();
  if (iVar2 != 0) {
    do {
      bVar1 = true;
      FUN_02052ea0(10);
      iVar2 = FUN_021536a8();
      while (iVar2 != 0) {
        if ((iVar2 != 4) && (iVar2 != 5)) {
          if (iVar2 == 0x14) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
          }
        }
        iVar2 = FUN_021536a8();
      }
    } while (bVar1);
  }
  if (DAT_0216d1a4 != 0) {
    (*DAT_0216d15c)();
    DAT_0216d1a4 = 0;
  }
  return 1;
}


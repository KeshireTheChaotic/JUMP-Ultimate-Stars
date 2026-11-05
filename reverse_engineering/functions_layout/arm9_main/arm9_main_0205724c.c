
void FUN_0205724c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_02056c14();
  iVar2 = 0;
  DAT_020aafa0 = &DAT_020ab280;
  puVar1 = &DAT_020ab280;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = &DAT_020ab280 + iVar2 * 6;
    puVar1 = puVar1 + 6;
  } while (iVar2 < 0xff);
  DAT_020aafb0 = &DAT_020aca68;
  DAT_020aca68 = 0;
  DAT_020aafa8 = 0;
  DAT_020aafac = 0;
  DAT_020aafbc = 0;
  DAT_020aafb4 = 0;
  DAT_020aafb8 = 0;
  DAT_020aafc0 = 1;
  DAT_020aafa4 = 0;
  DAT_020acae0 = &DAT_020ab000;
  FUN_02057444();
  iVar2 = FUN_0205707c(1);
  if (iVar2 == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + 4) = 0x1d;
  *(undefined **)(iVar2 + 8) = DAT_020acae0;
  FUN_02057034();
  FUN_02056e74(1);
  return;
}


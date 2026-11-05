
undefined4 FUN_02150230(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0216d188;
  if (DAT_0216d1b4 != 0) {
    DAT_0216d160 = 1;
    while ((0 < DAT_0216d188 && (DAT_0216d188 < 6))) {
      FUN_02052ea0(100);
    }
    FUN_02052ea0(500);
    iVar2 = FUN_020532e4(&DAT_0216d288);
    while (iVar2 == 0) {
      FUN_020531dc(&DAT_0216d288);
      FUN_020532f8(&DAT_0216d288);
      iVar2 = FUN_020532e4(&DAT_0216d288);
    }
    if (DAT_0216d180 != 0) {
      (*DAT_0216d15c)();
      DAT_0216d180 = 0;
    }
    DAT_0216d1b4 = 0;
    if (iVar1 != DAT_0216d188) {
      FUN_021501bc();
    }
  }
  if (DAT_0216d1c4 < 1) {
    return 0xfffffff6;
  }
  uVar3 = FUN_02153538();
  DAT_0216d1c4 = 0;
  return uVar3;
}


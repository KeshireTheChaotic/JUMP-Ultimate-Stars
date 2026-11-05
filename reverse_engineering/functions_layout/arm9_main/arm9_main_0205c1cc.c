
void FUN_0205c1cc(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_020adffc == 0) {
    return;
  }
  bVar3 = -1 < (int)DAT_020ae028;
  if (bVar3) {
    iVar2 = 1 << (DAT_020ae028 & 0xff);
  }
  else {
    iVar2 = 0;
  }
  FUN_020568e4(DAT_020ae020,DAT_020ae024,iVar2,0);
  if (bVar3) {
    uVar1 = FUN_02056da4();
    FUN_02056e74(1);
    FUN_02056de4(uVar1);
    do {
      iVar2 = FUN_02053bd8(&DAT_020adfdc,0,0);
    } while (iVar2 != 0);
  }
  if (DAT_020ae024 != 0) {
    FUN_0205b094();
  }
  if (iRam020ae01c != 0) {
    FUN_0205b0b0();
  }
  if (bVar3) {
    FUN_0205b030(DAT_020ae028);
  }
  if (DAT_020ae000 == 1) {
    FUN_020566d8(0,0,0,0);
  }
  DAT_020adffc = 0;
  return;
}


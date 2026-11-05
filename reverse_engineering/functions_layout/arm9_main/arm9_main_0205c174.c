
void FUN_0205c174(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_020adffc == 0) {
    return;
  }
  if ((int)DAT_020ae028 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1 << (DAT_020ae028 & 0xff);
  }
  FUN_020568e4(DAT_020ae020,DAT_020ae024,iVar2,0);
  uVar1 = FUN_02056da4();
  FUN_02056e74(1);
  FUN_02056de4(uVar1);
  return;
}


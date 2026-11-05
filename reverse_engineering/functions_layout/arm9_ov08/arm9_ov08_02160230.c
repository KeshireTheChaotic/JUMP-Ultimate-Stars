
void FUN_02160230(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_02161c68();
  iVar2 = FUN_02067574();
  if (iVar2 != 0) {
    uVar3 = FUN_02069cec();
    FUN_02051890(uVar3,iVar1 + 0xf0,0xe);
    uVar3 = FUN_02069cec();
    FUN_02051890(uVar3,iVar1 + 0x1f0,0xe);
    FUN_02154048();
    FUN_021664f0(0);
    FUN_02166a84(0,0x15);
    if (DAT_0216e7c8 == '\0') {
      FUN_0215707c(0,1);
      FUN_02157088(0x215c8ad);
      return;
    }
    FUN_0215707c(0,1);
    FUN_02157088(0x2160671);
  }
  return;
}


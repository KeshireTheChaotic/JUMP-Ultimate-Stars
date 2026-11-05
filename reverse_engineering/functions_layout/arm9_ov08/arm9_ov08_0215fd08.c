
void FUN_0215fd08(void)

{
  int iVar1;
  
  iVar1 = FUN_02166314(1);
  if (((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) &&
     (iVar1 = FUN_02154444(), iVar1 != 0)) {
    FUN_021547b8();
    FUN_02154560();
    FUN_0216589c(DAT_0216e7c4);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x14);
    if (DAT_0216e7c0 == '\0') {
      FUN_0215707c(2,0);
      FUN_02157088(0x215fbd1);
      return;
    }
    switch(DAT_0216e7bc) {
    case 0:
      FUN_0215707c(2,1);
      FUN_02157088(0x215f281);
      return;
    case 1:
      FUN_0215707c(2,1);
      FUN_02157088(0x215a205);
      return;
    case 2:
      FUN_0215707c(2,1);
      FUN_02157088(0x215eec5);
      return;
    case 3:
      FUN_0215707c(2);
      FUN_02157054(0,0);
      FUN_0215c8c8(1);
      FUN_02157088(0x215e0a9);
    }
  }
  return;
}


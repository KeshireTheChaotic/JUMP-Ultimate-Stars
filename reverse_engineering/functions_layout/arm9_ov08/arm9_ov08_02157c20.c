
void FUN_02157c20(void)

{
  int iVar1;
  
  iVar1 = FUN_02166314(1);
  if ((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) {
    FUN_021547b8();
    FUN_02154560();
    FUN_0216589c(DAT_0216e724);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x14);
    if (DAT_0216e720 == '\0') {
      FUN_0215707c(1,0);
      FUN_02157088(0x215fbd1);
      return;
    }
    if (DAT_0216e720 != '\x01') {
      return;
    }
    FUN_0215707c(0,0);
    FUN_02157088(0x2158bf9);
  }
  return;
}



void FUN_021cffe8(void)

{
  int iVar1;
  
  if (DAT_021d7bdc != 0) {
    DAT_021d7bd4 = DAT_021d7bd4 + 1;
    if ((DAT_021d7bd4 & 0xf) == 0) {
      FUN_021cf544();
    }
    iVar1 = FUN_021cdb58();
    if (iVar1 != 0) {
      FUN_021cdc18();
    }
  }
  return;
}



void FUN_0208a55c(void)

{
  int iVar1;
  undefined4 in_r3;
  short local_7c8 [992];
  undefined4 uStack_8;
  
  DAT_0214be6c = 0;
  uStack_8 = in_r3;
  iVar1 = FUN_02058b2c(local_7c8);
  if (iVar1 == 0) {
    if (((local_7c8[0] != 0) && (local_7c8[0] != 1)) && (local_7c8[0] != 2)) {
      iVar1 = FUN_02059470(0x208a541);
      if (iVar1 != 2) {
        return;
      }
      do {
      } while (DAT_0214be6c == 0);
    }
    iVar1 = FUN_02059428(0x208a525);
    if (iVar1 == 2) {
      do {
      } while (DAT_0214be6c == 0);
    }
  }
  return;
}


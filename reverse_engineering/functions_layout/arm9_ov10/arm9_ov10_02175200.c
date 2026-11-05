
void FUN_02175200(void)

{
  if (DAT_021a7364 != 0) {
    if (DAT_021a7370 != 0) {
      FUN_021744a0();
    }
    FUN_02173264();
    if (*(int *)(DAT_021a7364 + 0x1188) != 0) {
      FUN_020532f8(DAT_021a7364 + 0x111c);
    }
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffff9;
  }
  return;
}


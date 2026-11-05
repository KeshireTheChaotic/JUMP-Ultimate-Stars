
void FUN_02173264(void)

{
  if (DAT_021a7348 != 0) {
    FUN_02053ed0(DAT_021a7348 + 0x13d8);
    *(undefined4 *)(DAT_021a7348 + 0x13f0) = 1;
    FUN_02053e60(DAT_021a7348 + 0x13d8);
    if (*(int *)(DAT_021a7348 + 0x1314) != 0) {
      FUN_021744a0();
    }
    if (*(int *)(DAT_021a7348 + 0x1384) != 0) {
      FUN_020532f8(DAT_021a7348 + 0x1318);
    }
  }
  return;
}


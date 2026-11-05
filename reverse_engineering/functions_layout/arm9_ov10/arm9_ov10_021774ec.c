
void FUN_021774ec(void)

{
  if (*(int *)(DAT_021a759c + 0x24) != 0) {
    FUN_02173264();
    FUN_02173228();
    FUN_021758a4(0,*(undefined4 *)(DAT_021a759c + 0x24),0);
    *(undefined4 *)(DAT_021a759c + 0x24) = 0;
  }
  DAT_021a759c = 0;
  return;
}


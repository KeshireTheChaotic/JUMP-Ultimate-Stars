
void FUN_021611a4(void)

{
  if (*(char *)(DAT_0216e7dc + 0x604) != '\0') {
    DC_FlushRange(DAT_0216e7dc + 4,0x600);
    FUN_02066c18(DAT_0216e7dc + 4,0,0x600);
    *(undefined1 *)(DAT_0216e7dc + 0x604) = 0;
  }
  return;
}


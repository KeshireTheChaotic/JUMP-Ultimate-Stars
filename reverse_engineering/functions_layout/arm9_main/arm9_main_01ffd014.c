
void FUN_01ffd014(void)

{
  int iVar1;
  int unaff_r4;
  
  *(char *)(unaff_r4 + 0x701) =
       (char)((int)((uint)*(byte *)(unaff_r4 + 0x6ff) + (uint)*(byte *)(unaff_r4 + 0x703)) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xfd) + (uint)*(byte *)(unaff_r4 + 0x703)) >> 1;
  *(char *)(unaff_r4 + 0x303) = (char)iVar1;
  *(char *)(unaff_r4 + 0x301) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0x2ff)) >> 1);
  FUN_01ffe0b0();
  FUN_01ffe0b0();
  FUN_01ffe0b0();
  FUN_01ffe0b0();
  return;
}


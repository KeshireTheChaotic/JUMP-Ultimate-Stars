
void FUN_01ffaab8(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_r4;
  char unaff_r6;
  
  bVar1 = *(byte *)(unaff_r4 + -0xf2);
  bVar2 = *(byte *)(unaff_r4 + 0x2fe);
  FUN_01ff9450();
  *(char *)(unaff_r4 + 0x30e) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffaa60();
  return;
}


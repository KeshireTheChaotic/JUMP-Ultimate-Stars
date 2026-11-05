
void FUN_01ffbf74(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_r4;
  char unaff_r6;
  
  bVar1 = *(byte *)(unaff_r4 + -0xfa);
  bVar2 = *(byte *)(unaff_r4 + 0x2fe);
  FUN_01ff9450();
  *(char *)(unaff_r4 + 0x306) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffbe70();
  return;
}


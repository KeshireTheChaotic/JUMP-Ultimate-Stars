
void FUN_01ffe288(void)

{
  byte bVar1;
  byte bVar2;
  char *unaff_r4;
  char unaff_r6;
  
  bVar1 = unaff_r4[-0x100];
  bVar2 = unaff_r4[-2];
  FUN_01ff9450();
  *unaff_r4 = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  return;
}



void FUN_01ffe138(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char unaff_r6;
  
  iVar3 = param_1[-2] + *param_1;
  bVar1 = *(byte *)(iVar3 + -0xff);
  bVar2 = *(byte *)(iVar3 + 0x2ff);
  FUN_01ff9450();
  *(char *)(iVar3 + 0x301) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffe0b0();
  FUN_01ffe078();
  FUN_01ffe078();
  return;
}


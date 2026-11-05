
void FUN_01ffdf28(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char unaff_r6;
  
  iVar3 = param_1[-2] + *param_1;
  bVar1 = *(byte *)(iVar3 + -0xff);
  bVar2 = *(byte *)(iVar3 + 0x6ff);
  FUN_01ff9450();
  *(char *)(iVar3 + 0x701) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffde00();
  FUN_01ffdda4();
  FUN_01ffdda4();
  return;
}


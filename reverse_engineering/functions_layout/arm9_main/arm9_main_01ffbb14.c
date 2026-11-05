
void FUN_01ffbb14(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char unaff_r6;
  
  iVar3 = param_1[-2] + *param_1;
  bVar1 = *(byte *)(iVar3 + -0xf9);
  bVar2 = *(byte *)(iVar3 + 0xeff);
  FUN_01ff9450();
  *(char *)(iVar3 + 0xf07) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffbabc();
  FUN_01ffba90();
  FUN_01ffba90();
  return;
}


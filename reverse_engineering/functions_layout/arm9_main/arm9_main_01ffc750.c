
void FUN_01ffc750(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char unaff_r6;
  
  iVar3 = param_1[-2] + *param_1;
  bVar1 = *(byte *)(iVar3 + -0xf9);
  bVar2 = *(byte *)(iVar3 + 0xff);
  FUN_01ff9450();
  *(char *)(iVar3 + 0x107) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * '\x02';
  FUN_01ffc628();
  FUN_01ffc5cc();
  FUN_01ffc5cc();
  return;
}


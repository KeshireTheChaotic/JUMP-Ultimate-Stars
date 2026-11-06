
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f07f8(ushort param_1)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(_DAT_0380fff4 + 0x45c);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0x14;
  puVar1[6] = 0xa4;
  puVar1[7] = param_1 | 0xc000;
  FUN_027ea094(puVar1 + 8,_DAT_0380fff4 + 0x3a8,_DAT_0380fff4 + 0x324);
  return;
}


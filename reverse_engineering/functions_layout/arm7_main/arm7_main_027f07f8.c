
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f07f8(ushort param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = *(undefined2 **)(_DAT_0380fff4 + 0x45c);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0x14;
  puVar3[6] = 0xa4;
  puVar3[7] = param_1 | 0xc000;
  iVar1 = _DAT_0380fff4;
  puVar2 = (undefined2 *)(_DAT_0380fff4 + 0x324);
  puVar3[8] = *(undefined2 *)(_DAT_0380fff4 + 0x3a8);
  puVar3[9] = *(undefined2 *)(iVar1 + 0x3aa);
  puVar3[10] = *(undefined2 *)(iVar1 + 0x3ac);
  puVar3[0xb] = *puVar2;
  puVar3[0xc] = *(undefined2 *)(iVar1 + 0x326);
  puVar3[0xd] = *(undefined2 *)(iVar1 + 0x328);
  return;
}


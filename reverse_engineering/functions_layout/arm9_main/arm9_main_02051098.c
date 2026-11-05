
uint FUN_02051098(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = ((uint)param_1 & 1) != 0;
  uVar3 = 0;
  puVar1 = param_1;
  if (bVar6) {
    puVar1 = (ushort *)((int)param_1 + 1);
    uVar3 = (uint)(byte)*param_1;
  }
  uVar5 = 0;
  if (bVar6) {
    param_2 = param_2 - 1;
    uVar5 = uVar3;
  }
  uVar3 = param_2 >> 0x11;
  while (uVar3 != 0) {
    iVar4 = 0x10000;
    uVar3 = uVar3 - 1;
    param_2 = param_2 - 0x20000;
    puVar2 = puVar1;
    do {
      puVar1 = puVar2 + 1;
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 + *puVar2;
      puVar2 = puVar1;
    } while (iVar4 != 0);
    uVar5 = (uVar5 & 0xffff) + (uVar5 >> 0x10);
    uVar5 = uVar5 + (uVar5 >> 0x10) & 0xffff;
  }
  for (uVar3 = param_2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = uVar5 + *puVar1;
    puVar1 = puVar1 + 1;
  }
  if ((param_2 & 1) != 0) {
    uVar5 = uVar5 + (byte)*puVar1;
  }
  uVar3 = (uVar5 & 0xffff) + (uVar5 >> 0x10);
  uVar3 = uVar3 + (uVar3 >> 0x10);
  uVar3 = (uVar3 & 0xff) + ((uVar3 & 0xffff) >> 8);
  return ~(uVar3 + (uVar3 >> 8)) & 0xff;
}


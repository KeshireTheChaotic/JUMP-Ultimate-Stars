
void FUN_020601d0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((param_4 == 8) && (param_5 == 8)) {
    MIi_CpuClearFast(param_6,param_1,param_7 << 3);
    return;
  }
  if (param_7 == 4) {
    uVar4 = 0x20 - (param_2 * 4 + param_4 * 4);
    uVar1 = (0xffffffffU >> (param_2 * 4 & 0xffU)) << (uVar4 + param_2 * 4 & 0xff);
    puVar6 = (uint *)(param_1 + param_3 * 4);
    puVar8 = puVar6;
    if (puVar6 + param_5 <= puVar6) {
      return;
    }
    do {
      puVar7 = puVar8 + 1;
      *puVar8 = param_6 & uVar1 >> (uVar4 & 0xff) | *puVar8 & ~(uVar1 >> (uVar4 & 0xff));
      puVar8 = puVar7;
    } while (puVar7 < puVar6 + param_5);
    return;
  }
  uVar1 = param_2 * 8;
  iVar2 = -(uVar1 + param_4 * 8);
  uVar3 = iVar2 + 0x40;
  uVar4 = 0xffffffff >> (uVar1 & 0xff);
  if (uVar3 < 0x20) {
    uVar4 = uVar4 << (uVar1 & 0xff);
  }
  else {
    uVar5 = iVar2 + 0x20;
    uVar4 = (uVar4 << (uVar1 + uVar5 & 0xff)) >> (uVar5 & 0xff);
  }
  puVar8 = (uint *)(param_1 + param_3 * 8);
  uVar5 = -1 << (uVar3 & 0xff);
  if (uVar1 < 0x20) {
    uVar5 = uVar5 >> (uVar3 & 0xff);
  }
  else {
    uVar5 = (uVar5 >> ((uVar1 - 0x20) + uVar3 & 0xff)) << (uVar1 - 0x20 & 0xff);
  }
  puVar6 = puVar8 + param_5 * 2;
  if (puVar6 <= puVar8) {
    return;
  }
  do {
    *puVar8 = param_6 & uVar4 | *puVar8 & ~uVar4;
    puVar8[1] = param_6 & uVar5 | puVar8[1] & ~uVar5;
    puVar8 = puVar8 + 2;
  } while (puVar8 < puVar6);
  return;
}


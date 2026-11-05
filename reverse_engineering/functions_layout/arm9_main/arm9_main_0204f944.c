
void FUN_0204f944(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  puVar3 = param_1 + 6;
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar12 = param_1[2];
  uVar11 = param_1[3];
  piVar2 = &DAT_0209dbe0;
  iVar7 = 0;
  puVar9 = puVar3;
  do {
    uVar5 = *piVar2 + *puVar9 + uVar5 + (uVar4 & uVar12 | ~uVar4 & uVar11);
    uVar5 = uVar4 + (uVar5 * 0x80 | uVar5 >> 0x19);
    uVar11 = piVar2[1] + puVar9[1] + uVar11 + (uVar5 & uVar4 | ~uVar5 & uVar12);
    uVar11 = uVar5 + (uVar11 * 0x1000 | uVar11 >> 0x14);
    puVar1 = puVar9 + 3;
    uVar12 = piVar2[2] + puVar9[2] + uVar12 + (uVar11 & uVar5 | ~uVar11 & uVar4);
    piVar6 = piVar2 + 3;
    uVar12 = uVar11 + (uVar12 * 0x20000 | uVar12 >> 0xf);
    piVar2 = piVar2 + 4;
    puVar9 = puVar9 + 4;
    uVar4 = *piVar6 + *puVar1 + uVar4 + (uVar12 & uVar11 | ~uVar12 & uVar5);
    uVar4 = uVar12 + (uVar4 * 0x400000 | uVar4 >> 10);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  piVar6 = &DAT_0209db20;
  iVar7 = 0;
  do {
    uVar5 = *piVar2 + puVar3[*piVar6] + uVar5 + (uVar4 & uVar11 | uVar12 & ~uVar11);
    uVar5 = uVar4 + (uVar5 * 0x20 | uVar5 >> 0x1b);
    piVar8 = piVar6 + 3;
    uVar11 = piVar2[1] + puVar3[piVar6[1]] + uVar11 + (uVar5 & uVar12 | uVar4 & ~uVar12);
    uVar11 = uVar5 + (uVar11 * 0x200 | uVar11 >> 0x17);
    uVar12 = piVar2[2] + puVar3[piVar6[2]] + uVar12 + (uVar11 & uVar4 | uVar5 & ~uVar4);
    piVar10 = piVar2 + 3;
    uVar12 = uVar11 + (uVar12 * 0x4000 | uVar12 >> 0x12);
    piVar2 = piVar2 + 4;
    piVar6 = piVar6 + 4;
    uVar4 = *piVar10 + puVar3[*piVar8] + uVar4 + (uVar12 & uVar5 | uVar11 & ~uVar5);
    uVar4 = uVar12 + (uVar4 * 0x100000 | uVar4 >> 0xc);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    uVar5 = *piVar2 + puVar3[*piVar6] + uVar5 + (uVar11 ^ uVar4 ^ uVar12);
    uVar5 = uVar4 + (uVar5 * 0x10 | uVar5 >> 0x1c);
    uVar11 = piVar2[1] + puVar3[piVar6[1]] + uVar11 + (uVar12 ^ uVar5 ^ uVar4);
    uVar11 = uVar5 + (uVar11 * 0x800 | uVar11 >> 0x15);
    uVar12 = piVar2[2] + puVar3[piVar6[2]] + uVar12 + (uVar4 ^ uVar11 ^ uVar5);
    uVar12 = uVar11 + (uVar12 * 0x10000 | uVar12 >> 0x10);
    iVar7 = iVar7 + 1;
    uVar4 = piVar2[3] + puVar3[piVar6[3]] + uVar4 + (uVar5 ^ uVar12 ^ uVar11);
    piVar2 = piVar2 + 4;
    piVar6 = piVar6 + 4;
    uVar4 = uVar12 + (uVar4 * 0x800000 | uVar4 >> 9);
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    uVar5 = *piVar2 + puVar3[*piVar6] + uVar5 + (uVar12 ^ (uVar4 | ~uVar11));
    uVar5 = uVar4 + (uVar5 * 0x40 | uVar5 >> 0x1a);
    uVar11 = piVar2[1] + puVar3[piVar6[1]] + uVar11 + (uVar4 ^ (uVar5 | ~uVar12));
    piVar8 = piVar6 + 3;
    piVar10 = piVar2 + 3;
    uVar11 = uVar5 + (uVar11 * 0x400 | uVar11 >> 0x16);
    uVar12 = piVar2[2] + puVar3[piVar6[2]] + uVar12 + (uVar5 ^ (uVar11 | ~uVar4));
    uVar12 = uVar11 + (uVar12 * 0x8000 | uVar12 >> 0x11);
    piVar2 = piVar2 + 4;
    piVar6 = piVar6 + 4;
    uVar4 = *piVar10 + puVar3[*piVar8] + uVar4 + (uVar11 ^ (uVar12 | ~uVar5));
    uVar4 = uVar12 + (uVar4 * 0x200000 | uVar4 >> 0xb);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  *param_1 = *param_1 + uVar5;
  param_1[1] = param_1[1] + uVar4;
  param_1[2] = param_1[2] + uVar12;
  param_1[3] = param_1[3] + uVar11;
  return;
}


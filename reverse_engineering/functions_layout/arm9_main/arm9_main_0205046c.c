
void FUN_0205046c(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_ac [8];
  uint local_8c [5];
  uint local_78 [19];
  int local_2c;
  
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar11 = param_1[4];
  local_2c = param_3;
  do {
    iVar4 = 0;
    puVar2 = param_2;
    puVar5 = local_ac;
    do {
      uVar12 = uVar10;
      uVar10 = uVar9;
      uVar7 = uVar3;
      param_2 = puVar2 + 1;
      uVar9 = *puVar2;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff00) << 8 | (uVar9 & 0xff00ff) >> 8 | uVar9 << 0x18;
      puVar5[0x10] = uVar9;
      *puVar5 = uVar9;
      uVar3 = uVar11 + 0x5a827999 + (uVar7 >> 0x1b | uVar7 << 5) + uVar9 +
              ((uVar10 ^ uVar12) & uVar6 ^ uVar12);
      uVar9 = uVar6 >> 2 | uVar6 << 0x1e;
      iVar4 = iVar4 + 4;
      puVar2 = param_2;
      puVar5 = puVar5 + 1;
      uVar6 = uVar7;
      uVar11 = uVar12;
    } while (iVar4 < 0x40);
    iVar4 = 0;
    puVar2 = local_ac;
    do {
      uVar11 = uVar10;
      uVar10 = uVar9;
      uVar6 = uVar3;
      uVar9 = *puVar2 ^ puVar2[2] ^ puVar2[8] ^ puVar2[0xd];
      uVar9 = uVar9 >> 0x1f | uVar9 << 1;
      puVar2[0x10] = uVar9;
      puVar5 = puVar2 + 1;
      *puVar2 = uVar9;
      uVar3 = uVar9 + uVar12 + 0x5a827999 + (uVar6 >> 0x1b | uVar6 << 5) +
              ((uVar10 ^ uVar11) & uVar7 ^ uVar11);
      uVar9 = uVar7 >> 2 | uVar7 << 0x1e;
      iVar4 = iVar4 + 4;
      puVar2 = puVar5;
      uVar7 = uVar6;
      uVar12 = uVar11;
    } while (iVar4 < 0x10);
    iVar4 = 0;
    do {
      uVar12 = uVar10;
      uVar10 = uVar9;
      uVar7 = uVar3;
      uVar9 = *puVar5 ^ puVar5[2] ^ puVar5[8] ^ puVar5[0xd];
      uVar9 = uVar9 >> 0x1f | uVar9 << 1;
      puVar5[0x10] = uVar9;
      *puVar5 = uVar9;
      uVar3 = uVar9 + uVar11 + 0x6ed9eba1 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar6 ^ uVar10 ^ uVar12)
      ;
      uVar9 = uVar6 >> 2 | uVar6 << 0x1e;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
      if (iVar4 == 0xc) {
        puVar5 = local_ac;
      }
      uVar6 = uVar7;
      uVar11 = uVar12;
    } while (iVar4 < 0x14);
    iVar4 = 0;
    do {
      uVar13 = uVar10;
      uVar10 = uVar9;
      uVar8 = uVar3;
      uVar9 = *puVar5 ^ puVar5[2] ^ puVar5[8] ^ puVar5[0xd];
      uVar9 = uVar9 >> 0x1f | uVar9 << 1;
      puVar5[0x10] = uVar9;
      *puVar5 = uVar9;
      uVar3 = uVar9 + uVar12 + -0x70e44324 + (uVar8 >> 0x1b | uVar8 << 5) +
              ((uVar7 | uVar10) & uVar13 | uVar7 & uVar10);
      uVar9 = uVar7 >> 2 | uVar7 << 0x1e;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
      if (iVar4 == 8) {
        puVar5 = local_ac;
      }
      uVar7 = uVar8;
      uVar12 = uVar13;
    } while (iVar4 < 0x14);
    iVar4 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar9;
      uVar6 = uVar3;
      uVar9 = *puVar5 ^ puVar5[2] ^ puVar5[8] ^ puVar5[0xd];
      uVar9 = uVar9 >> 0x1f | uVar9 << 1;
      puVar5[0x10] = uVar9;
      *puVar5 = uVar9;
      iVar1 = local_2c;
      uVar3 = uVar9 + uVar13 + -0x359d3e2a + (uVar6 >> 0x1b | uVar6 << 5) +
              (uVar8 ^ uVar10 ^ uVar11);
      uVar9 = uVar8 >> 2 | uVar8 << 0x1e;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
      if (iVar4 == 4) {
        puVar5 = local_ac;
      }
      uVar8 = uVar6;
      uVar13 = uVar11;
    } while (iVar4 < 0x14);
    uVar3 = uVar3 + *param_1;
    uVar6 = uVar6 + param_1[1];
    uVar9 = uVar9 + param_1[2];
    uVar10 = uVar10 + param_1[3];
    uVar11 = uVar11 + param_1[4];
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_1[4] = uVar11;
    local_2c = local_2c + -0x40;
  } while (local_2c != 0 && 0x3f < iVar1);
  return;
}


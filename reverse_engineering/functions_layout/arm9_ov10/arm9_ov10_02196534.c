
void FUN_02196534(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_12c;
  byte *local_128;
  int *local_124;
  byte *local_120;
  int *local_11c;
  byte *local_118;
  int *local_114;
  byte *local_110;
  int *local_10c;
  int local_108;
  int local_104;
  int local_100;
  int aiStack_54 [16];
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  FUN_02196960(aiStack_54,param_2,0x40);
  local_12c = 0;
  local_110 = &DAT_021a6f84;
  local_10c = &DAT_021a7004;
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    uVar4 = uVar4 + *local_10c + (uVar6 ^ uVar3 & (uVar5 ^ uVar6)) + aiStack_54[*local_110];
    uVar4 = uVar3 + (uVar4 * 0x80 | uVar4 >> 0x19);
    uVar6 = uVar6 + (&DAT_021a7004)[iVar2 + 1] +
                    (uVar5 ^ uVar4 & (uVar3 ^ uVar5)) + aiStack_54[(byte)(&DAT_021a6f85)[iVar2]];
    uVar6 = uVar4 + (uVar6 * 0x1000 | uVar6 >> 0x14);
    uVar5 = uVar5 + (&DAT_021a7004)[iVar2 + 2] +
                    (uVar3 ^ uVar6 & (uVar4 ^ uVar3)) + aiStack_54[(byte)(&DAT_021a6f86)[iVar2]];
    uVar5 = uVar6 + (uVar5 * 0x20000 | uVar5 >> 0xf);
    uVar3 = uVar3 + (&DAT_021a7004)[iVar2 + 3] +
                    (uVar4 ^ uVar5 & (uVar6 ^ uVar4)) + aiStack_54[(byte)(&DAT_021a6f87)[iVar2]];
    uVar3 = uVar5 + (uVar3 * 0x400000 | uVar3 >> 10);
    local_110 = local_110 + 4;
    local_10c = local_10c + 4;
    iVar1 = iVar2 + 4;
    local_12c = local_12c + 1;
  } while (local_12c < 4);
  local_100 = 0;
  local_118 = &DAT_021a6f88 + iVar2;
  local_114 = &DAT_021a7004 + iVar1;
  do {
    iVar2 = iVar1;
    uVar4 = uVar4 + *local_114 + (uVar5 ^ uVar6 & (uVar3 ^ uVar5)) + aiStack_54[*local_118];
    uVar4 = uVar3 + (uVar4 * 0x20 | uVar4 >> 0x1b);
    uVar6 = uVar6 + (&DAT_021a7004)[iVar2 + 1] +
                    (uVar3 ^ uVar5 & (uVar4 ^ uVar3)) + aiStack_54[(byte)(&DAT_021a6f85)[iVar2]];
    uVar6 = uVar4 + (uVar6 * 0x200 | uVar6 >> 0x17);
    uVar5 = uVar5 + (&DAT_021a7004)[iVar2 + 2] +
                    (uVar4 ^ uVar3 & (uVar6 ^ uVar4)) + aiStack_54[(byte)(&DAT_021a6f86)[iVar2]];
    uVar5 = uVar6 + (uVar5 * 0x4000 | uVar5 >> 0x12);
    uVar3 = uVar3 + (&DAT_021a7004)[iVar2 + 3] +
                    (uVar6 ^ uVar4 & (uVar5 ^ uVar6)) + aiStack_54[(byte)(&DAT_021a6f87)[iVar2]];
    uVar3 = uVar5 + (uVar3 * 0x100000 | uVar3 >> 0xc);
    local_118 = local_118 + 4;
    local_114 = local_114 + 4;
    iVar1 = iVar2 + 4;
    local_100 = local_100 + 1;
  } while (local_100 < 4);
  local_104 = 0;
  local_120 = &DAT_021a6f88 + iVar2;
  local_11c = &DAT_021a7004 + iVar1;
  do {
    iVar2 = iVar1;
    uVar4 = uVar4 + *local_11c + (uVar6 ^ uVar3 ^ uVar5) + aiStack_54[*local_120];
    uVar4 = uVar3 + (uVar4 * 0x10 | uVar4 >> 0x1c);
    uVar6 = uVar6 + (&DAT_021a7004)[iVar2 + 1] +
                    (uVar5 ^ uVar4 ^ uVar3) + aiStack_54[(byte)(&DAT_021a6f85)[iVar2]];
    uVar6 = uVar4 + (uVar6 * 0x800 | uVar6 >> 0x15);
    uVar5 = uVar5 + (&DAT_021a7004)[iVar2 + 2] +
                    (uVar3 ^ uVar6 ^ uVar4) + aiStack_54[(byte)(&DAT_021a6f86)[iVar2]];
    uVar5 = uVar6 + (uVar5 * 0x10000 | uVar5 >> 0x10);
    uVar3 = uVar3 + (&DAT_021a7004)[iVar2 + 3] +
                    (uVar4 ^ uVar5 ^ uVar6) + aiStack_54[(byte)(&DAT_021a6f87)[iVar2]];
    uVar3 = uVar5 + (uVar3 * 0x800000 | uVar3 >> 9);
    local_120 = local_120 + 4;
    local_11c = local_11c + 4;
    iVar1 = iVar2 + 4;
    local_104 = local_104 + 1;
  } while (local_104 < 4);
  local_108 = 0;
  local_128 = &DAT_021a6f88 + iVar2;
  local_124 = &DAT_021a7004 + iVar1;
  do {
    uVar4 = uVar4 + *local_124 + (uVar5 ^ (uVar3 | ~uVar6)) + aiStack_54[*local_128];
    uVar4 = uVar3 + (uVar4 * 0x40 | uVar4 >> 0x1a);
    uVar6 = uVar6 + (&DAT_021a7004)[iVar1 + 1] +
                    (uVar3 ^ (uVar4 | ~uVar5)) + aiStack_54[(byte)(&DAT_021a6f85)[iVar1]];
    uVar6 = uVar4 + (uVar6 * 0x400 | uVar6 >> 0x16);
    uVar5 = uVar5 + (&DAT_021a7004)[iVar1 + 2] +
                    (uVar4 ^ (uVar6 | ~uVar3)) + aiStack_54[(byte)(&DAT_021a6f86)[iVar1]];
    uVar5 = uVar6 + (uVar5 * 0x8000 | uVar5 >> 0x11);
    uVar3 = uVar3 + (&DAT_021a7004)[iVar1 + 3] +
                    (uVar6 ^ (uVar5 | ~uVar4)) + aiStack_54[(byte)(&DAT_021a6f87)[iVar1]];
    uVar3 = uVar5 + (uVar3 * 0x200000 | uVar3 >> 0xb);
    local_128 = local_128 + 4;
    local_124 = local_124 + 4;
    iVar1 = iVar1 + 4;
    local_108 = local_108 + 1;
  } while (local_108 < 4);
  *param_1 = *param_1 + uVar4;
  param_1[1] = param_1[1] + uVar3;
  param_1[2] = param_1[2] + uVar5;
  param_1[3] = param_1[3] + uVar6;
  return;
}


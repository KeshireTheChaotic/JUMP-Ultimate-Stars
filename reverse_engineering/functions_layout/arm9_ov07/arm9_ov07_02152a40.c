
/* WARNING: Removing unreachable block (ram,0x02152d58) */
/* WARNING: Removing unreachable block (ram,0x02152dc8) */

void FUN_02152a40(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int local_60;
  char local_58 [4];
  int local_54 [2];
  char local_4c [4];
  int local_48 [10];
  char local_20 [12];
  
  iVar12 = param_1 + param_2 * 4;
  uVar15 = *(undefined4 *)(iVar12 + 0x114);
  uVar13 = *(undefined4 *)(iVar12 + 0x4c);
  iVar12 = FUN_0214f898(uVar15,0x67625053);
  iVar7 = FUN_0214f898(uVar15,0x6d625053);
  iVar14 = *(int *)(param_1 + param_2 * 4 + 0x640);
  local_60 = 0;
  bVar2 = false;
  if (iVar14 < 0) {
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[9] = 0;
    iVar8 = 0;
  }
  else {
    FUN_020710f8(iVar14,local_48 + 9,local_48 + 8,local_48 + 7,local_48 + 6,local_48 + 5,
                 local_48 + 4);
    iVar8 = FUN_02070ff4();
    iVar8 = iVar8 + iVar14 * 0xc;
  }
  if (iVar8 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = func_0x021a2934(iVar8);
  }
  switch(uVar15) {
  case 0:
    FUN_021524c8(iVar12,0);
    local_60 = -1;
    break;
  case 1:
    FUN_021524c8(iVar12,2);
    bVar2 = true;
    break;
  case 2:
    FUN_021524c8(iVar12,1);
    break;
  case 3:
    iVar9 = func_0x021a26e0(iVar14);
    if (iVar9 == 0) {
      bVar2 = true;
      if ((local_48[8] < 1) || (0xc < local_48[8])) {
        FUN_021524c8(iVar12,2);
      }
      else {
        FUN_021524c8(iVar12,3);
      }
    }
    else {
      FUN_021524c8(iVar12,1);
    }
    iVar8 = func_0x021a2940(iVar8);
    if (iVar8 != 0) {
      local_60 = 1;
    }
  }
  uVar15 = 0;
  if (bVar2) {
    uVar15 = FUN_02071050(iVar14);
  }
  FUN_02152e60(param_1,param_2,uVar13,uVar15);
  FUN_02152f38(uVar13,0x6d665053);
  FUN_02152f38(uVar13,0x746d5053);
  FUN_02152f38(uVar13,0x6b665053);
  iVar6 = local_48[9];
  iVar5 = local_48[8];
  iVar4 = local_48[7];
  iVar3 = local_48[6];
  iVar9 = local_48[5];
  iVar8 = local_48[4];
  sVar1 = *(short *)(*(int *)(*(int *)(iVar12 + 4) + 100) + 0x4a);
  if (sVar1 == 1) {
    uVar16 = func_0x021a2728(iVar14);
    func_0x0219c380((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),local_20);
    FUN_02152f38(uVar13,0x6b665053);
    local_48[2] = 0x91;
    local_48[3] = 0xf;
    iVar12 = 0;
    do {
      FUN_021529e4(uVar13,local_20[iVar12] + 0x1e,0x6b665053,local_48 + 2);
      iVar12 = iVar12 + 1;
      local_48[2] = local_48[2] + 5;
    } while (iVar12 < 0xc);
  }
  else {
    if (sVar1 != 2) {
      if (sVar1 != 3) {
        FUN_02152e60(param_1,param_2,uVar13,0);
        goto LAB_02152dfe;
      }
      FUN_02152f38(uVar13,0x746d5053);
      FUN_02151668(iVar6 + 2000,4,local_4c);
      local_48[0] = 0x1a;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 4);
      FUN_02151668(iVar5,2,local_4c);
      local_48[0] = 0x35;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 2);
      FUN_02151668(iVar4,2,local_4c);
      local_48[0] = 0x44;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 2);
      FUN_02151668(iVar3,2,local_4c);
      local_48[0] = 0x58;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 2);
      FUN_02151668(iVar9,2,local_4c);
      local_48[0] = 0x6b;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 2);
      FUN_02151668(iVar8,2,local_4c);
      local_48[0] = 0x7e;
      local_48[1] = 0x1e;
      iVar12 = 0;
      do {
        FUN_021529e4(uVar13,local_4c[iVar12] + 10,0x746d5053,local_48);
        iVar12 = iVar12 + 1;
        local_48[0] = local_48[0] + 6;
      } while (iVar12 < 2);
    }
    uVar10 = FUN_02071200(iVar14);
    uVar11 = FUN_020711c0(iVar14);
    FUN_02152f38(uVar13,0x6d665053);
    if (uVar11 < 1000) {
      iVar14 = 3;
      iVar12 = 0x91;
    }
    else {
      iVar14 = 4;
      iVar12 = 0x8d;
    }
    FUN_02151668(uVar11,iVar14,local_58);
    local_54[0] = iVar12;
    local_54[1] = 0x11;
    for (iVar12 = 0; iVar12 < iVar14; iVar12 = iVar12 + 1) {
      FUN_021529e4(uVar13,local_58[iVar12] + 0x14,0x6d665053,local_54);
      local_54[0] = local_54[0] + 6;
    }
    if (uVar10 < 1000) {
      iVar14 = 3;
      iVar12 = 0xb3;
    }
    else {
      iVar14 = 4;
      iVar12 = 0xaf;
    }
    FUN_02151668(uVar10,iVar14,local_58);
    local_54[0] = iVar12;
    local_54[1] = 0x11;
    for (iVar12 = 0; iVar12 < iVar14; iVar12 = iVar12 + 1) {
      FUN_021529e4(uVar13,local_58[iVar12] + 0x14,0x6d665053,local_54);
      local_54[0] = local_54[0] + 6;
    }
  }
LAB_02152dfe:
  if (local_60 < 0) {
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
  }
  else {
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    if (local_60 < 1) {
      FUN_02023894(*(undefined4 *)(iVar7 + 4),0x810009,0);
    }
    else {
      FUN_02023894(*(undefined4 *)(iVar7 + 4),0x810008,0);
    }
    (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
  }
  return;
}


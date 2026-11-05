
undefined4 FUN_021a076c(int param_1,uint param_2,char *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  ushort local_30 [2];
  undefined4 local_2c;
  uint uStack_28;
  
  if (*param_3 != 'p') {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x8e8);
  *(uint *)(param_1 + 0x8e8) = uVar5 + param_4;
  *(uint *)(param_1 + 0x8ec) =
       *(int *)(param_1 + 0x8ec) + ((int)param_4 >> 0x1f) + (uint)CARRY4(uVar5,param_4);
  uVar8 = param_4 - 0xc;
  *(int *)(param_1 + 0x8dc) = *(int *)(param_1 + 0x8dc) + 1;
  local_30[0] = *(ushort *)(param_3 + 2);
  bVar1 = param_3[1];
  uVar5 = bVar1 & 3;
  uStack_28 = param_4;
  iVar2 = FUN_02199e24();
  iVar7 = iVar2 * 0x20c;
  iVar6 = 0;
  for (; ((iVar6 < (int)(uint)bVar1 >> 2 && (3 < uVar8)) && (-1 < (short)local_30[0]));
      local_30[0] = local_30[0] - 1 & 0x7fff) {
    local_2c = *(undefined4 *)(param_3 + iVar6 * 4 + 0xc);
    FUN_021a1b3c(param_1 + 0x40 + iVar7,local_30);
    uVar8 = uVar8 - 4;
    iVar6 = iVar6 + 1;
  }
  iVar6 = (int)*(short *)(param_1 + iVar2 * 2 + 0x880);
  if (iVar6 < 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (int)*(short *)(param_3 + 8);
    if (iVar4 < iVar6) {
      iVar4 = (iVar6 + 0x8000) - iVar4;
    }
    else {
      iVar4 = iVar4 - iVar6;
    }
  }
  if ((-1 < iVar4) && (iVar4 < 0x3fff)) {
    iVar6 = param_1 + iVar2 * 2;
    *(undefined2 *)(iVar6 + 0x880) = *(undefined2 *)(param_3 + 8);
    *(undefined2 *)(iVar6 + 0x888) = *(undefined2 *)(param_3 + 8);
  }
  iVar6 = *(int *)(param_1 + 0x44 + iVar7);
  if (iVar6 < 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (int)*(short *)(param_3 + 4);
    if (iVar4 < iVar6) {
      iVar4 = (iVar6 + 0x8000) - iVar4;
    }
    else {
      iVar4 = iVar4 - iVar6;
    }
  }
  if ((-1 < iVar4) && (iVar4 < 0x3fff)) {
    *(int *)(param_1 + 0x44 + iVar7) = (int)*(short *)(param_3 + 4);
    *(undefined2 *)(param_1 + iVar2 * 2 + 0x890) = *(undefined2 *)(param_3 + 4);
  }
  iVar6 = FUN_021a1a60(param_1 + 0x40 + iVar7);
  if (iVar6 < 0) {
    *(undefined2 *)(param_1 + iVar2 * 2 + 0x898) = 0xffff;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + iVar2 * 2 + 0x880);
    if (iVar6 < iVar4) {
      iVar6 = iVar6 + 0x8000;
    }
    iVar6 = iVar6 - iVar4;
    if ((-1 < iVar6) && (iVar6 < 0x3fff)) {
      *(short *)(param_1 + iVar2 * 2 + 0x898) = (short)iVar6;
    }
  }
  uVar3 = FUN_021a1aa8(param_1 + 0x40 + iVar7);
  uVar8 = (uint)*(ushort *)(param_3 + 6);
  if (uVar3 != 0xffff) {
    bVar9 = SBORROW4(uVar3,uVar8);
    iVar2 = uVar3 - uVar8;
    if ((int)uVar3 < (int)uVar8) {
      bVar9 = SBORROW4(uVar8 - uVar3,0x40);
      iVar2 = (uVar8 - uVar3) + -0x40;
    }
    if ((iVar2 < 0 == bVar9) &&
       (((int)uVar3 <= (int)uVar8 || (0x3f < (int)(uVar8 + (0x8000 - uVar3)))))) {
      uVar8 = uVar3;
      goto LAB_021a09a0;
    }
  }
  FUN_021a1b90(param_1 + 0x40 + iVar7,uVar8);
LAB_021a09a0:
  if (uVar3 != uVar8) {
    if (uVar3 == 0xffff) {
      iVar2 = uVar8 + 1;
    }
    else if ((int)uVar3 < (int)uVar8) {
      iVar2 = uVar8 - uVar3;
    }
    else {
      iVar2 = (uVar8 + 0x8000) - uVar3;
    }
    *(int *)(param_1 + 0xb10 + param_2 * 4) = *(int *)(param_1 + 0xb10 + param_2 * 4) + 1;
    *(int *)(param_1 + 0xb20 + param_2 * 4) = *(int *)(param_1 + 0xb20 + param_2 * 4) + iVar2;
  }
  if (uVar5 != param_2) {
    FUN_0219cb80(uVar5,param_2);
  }
  return 1;
}


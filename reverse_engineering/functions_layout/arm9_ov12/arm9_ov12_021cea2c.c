
undefined4 FUN_021cea2c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  uint local_20;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar7 = FUN_021ced0c(param_1,param_2,*(uint *)(param_2 + 0x18) & 0xffff);
    if (iVar7 == 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 == uVar2) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return 0;
    }
    if ((uVar1 + 1 != uVar2) && (*(int *)(param_2 + 0x45c) == 0)) {
      iVar7 = uVar2 - uVar1;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (100 < iVar7) {
        *(uint *)(param_1 + 0x54) = uVar2;
        return 0;
      }
      if (uVar2 < uVar1) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
    }
  }
  else {
    FUN_021ced90(param_1,*(uint *)(param_2 + 0x18) & 0xffff);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x460);
    uVar3 = *(undefined4 *)(param_2 + 0x468);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x464);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  uVar1 = (*(int *)(param_2 + 0x460) - *(int *)(param_1 + 0x4c)) * 0x40;
  iVar7 = uVar1 - (*(int *)(param_2 + 0x464) - *(int *)(param_1 + 0x44));
  if ((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_2 + 0x45c) != 0)) {
    *(int *)(param_1 + 0x80) = iVar7;
  }
  else {
    uVar2 = iVar7 - *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar7;
    if ((int)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    uVar5 = (*(int *)(param_1 + 0x7c) + 0x8b18) * 2;
    uVar4 = ((int)uVar5 >> 0x1f) + (uint)(0xffff3372 < uVar5);
    if (uVar4 <= (uint)((int)uVar2 >> 0x1f) &&
        (uint)(uVar2 <= uVar5 + 0xcc8d) <= uVar4 - ((int)uVar2 >> 0x1f)) {
      iVar6 = FUN_0200d12c(uVar2,0x8b18);
      *(int *)(param_1 + 0x84) = iVar6 + 2;
    }
    if (*(int *)(param_1 + 0x84) < 1) {
      *(int *)(param_1 + 0x7c) =
           *(int *)(param_1 + 0x7c) + ((int)(uVar2 - *(int *)(param_1 + 0x7c)) >> 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x7c);
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x44);
  iVar6 = *(int *)(param_1 + 0x48);
  uVar5 = uVar1 + uVar4;
  *(uint *)(param_2 + 0x46c) = uVar2 + uVar5;
  *(uint *)(param_2 + 0x470) = iVar6 + (uint)CARRY4(uVar1,uVar4) + (uint)CARRY4(uVar2,uVar5);
  lVar9 = OS_GetTick();
  uVar2 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar5 = *(uint *)(param_2 + 0x46c);
  uVar4 = *(uint *)(param_2 + 0x470);
  uVar1 = uVar4 + (0xffff74e7 < uVar5);
  if (uVar1 <= uVar2 && (uint)((uint)lVar9 <= uVar5 + 0x8b18) <= uVar1 - uVar2) {
    return 0;
  }
  uVar1 = (uint)((ulonglong)(lVar9 + 0x7fd88) >> 0x20);
  bVar8 = uVar5 <= (uint)(lVar9 + 0x7fd88);
  if (uVar1 <= uVar4 && (uint)bVar8 <= uVar1 - uVar4) {
    return 0;
  }
  if (*(int *)(param_1 + 0x84) < 1) {
    uVar2 = *(int *)(param_1 + 0x7c) * 3;
    iVar6 = FUN_0200d12c(uVar2,0x8b18,uVar5,(uVar1 - uVar4) - (uint)!bVar8);
    if (*(uint *)(param_1 + 0x8c) < uVar2) {
      *(int *)(param_1 + 0x8c) = (iVar6 + 1) * 0x8b18 + 0x134df;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x8c) + -0xd0a4;
      *(int *)(param_1 + 4) = iVar6 * 0x8b18 + 0x134df;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    else if (((int)uVar2 < *(int *)(param_1 + 0x88)) &&
            (*(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1,
            0x46 < *(uint *)(param_1 + 0x90))) {
      *(int *)(param_1 + 0x8c) = (iVar6 + 1) * 0x8b18 + 0x134df;
      *(int *)(param_1 + 0x88) = iVar6 * 0x8b18 + -0x458c;
      if (*(int *)(param_1 + 0x88) < 0) {
        *(undefined4 *)(param_1 + 0x88) = 0;
      }
      *(int *)(param_1 + 4) = iVar6 * 0x8b18 + 0x134df;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if (0x68520 < *(uint *)(param_1 + 4)) {
      *(undefined4 *)(param_1 + 4) = 0x68520;
    }
    if (*(uint *)(param_1 + 0x6c) < 0x10) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) + 1;
      *(int *)(param_1 + 0x74) = iVar7;
      *(int *)(param_1 + 0x78) = iVar7;
    }
    else {
      uVar3 = FUN_0200d12c(iVar7 + *(int *)(param_1 + 0x74) * 0x1f,0x20);
      *(undefined4 *)(param_1 + 0x74) = uVar3;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
    local_20 = (uint)(0x8701 < *(int *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0xc) < -0x8701) {
      local_20 = 0xffffffff;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    if (local_20 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  return 1;
}


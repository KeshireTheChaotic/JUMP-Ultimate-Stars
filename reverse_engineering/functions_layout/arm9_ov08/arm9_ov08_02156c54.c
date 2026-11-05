
void FUN_02156c54(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  int local_50;
  int local_4c;
  int local_40;
  int local_2c;
  short local_24;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  
  uVar5 = DAT_0216a7c2;
  uVar2 = DAT_0216a79a;
  uVar1 = DAT_0216a798;
  DAT_0216e6e0 = FUN_02166b8c(0x6c,4);
  *(undefined1 *)(DAT_0216e6e0 + 0x60) = 0x1f;
  iVar11 = 0;
  *(undefined1 *)(DAT_0216e6e0 + 99) = 0;
  *(undefined1 *)(DAT_0216e6e0 + 0x66) = 1;
  *(undefined1 *)(DAT_0216e6e0 + 0x67) = 1;
  *(undefined1 *)(DAT_0216e6e0 + 0x68) = 1;
  iVar9 = 0;
  do {
    uVar6 = FUN_02165ff4(0,0x36);
    *(undefined4 *)(DAT_0216e6e0 + iVar9 + 0x10) = uVar6;
    puVar7 = *(uint **)(DAT_0216e6e0 + iVar9 + 0x10);
    *puVar7 = *puVar7 & 0xc1fffcff | 0x200;
    iVar8 = *(int *)(DAT_0216e6e0 + iVar9 + 0x10);
    *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xf3ff | 0xc00;
    iVar9 = iVar9 + 4;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 10);
  iVar11 = 0;
  puVar12 = &DAT_0216a784;
  iVar9 = 0;
  do {
    uVar6 = FUN_02165ff4(0,*puVar12);
    *(undefined4 *)(DAT_0216e6e0 + iVar9 + 0x38) = uVar6;
    puVar7 = *(uint **)(DAT_0216e6e0 + iVar9 + 0x38);
    *puVar7 = *puVar7 & 0xc1fffcff | 0x200;
    iVar8 = *(int *)(DAT_0216e6e0 + iVar9 + 0x38);
    *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xf3ff | 0xc00;
    puVar12 = puVar12 + 1;
    iVar9 = iVar9 + 4;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  iVar11 = 0;
  puVar12 = &DAT_0216a788;
  iVar9 = 0;
  do {
    uVar6 = FUN_02165fc4(0,*puVar12,1);
    *(undefined4 *)(DAT_0216e6e0 + iVar9 + 0x40) = uVar6;
    FUN_02165ce0(*(undefined4 *)(DAT_0216e6e0 + iVar9 + 0x40),0xffffffff,0x200,0);
    FUN_02165b80(*(undefined4 *)(DAT_0216e6e0 + iVar9 + 0x40),0xffffffff,3);
    uVar4 = DAT_0216a79e;
    uVar3 = DAT_0216a79c;
    puVar12 = puVar12 + 1;
    iVar9 = iVar9 + 4;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  local_40 = 0;
  local_16 = 0;
  local_50 = 0;
  local_4c = 0;
  local_2c = 0;
  do {
    uVar6 = FUN_02166718(0,uVar3,uVar4,0,&local_1c,0);
    *(undefined4 *)(DAT_0216e6e0 + local_50) = uVar6;
    local_24 = 0;
    puVar10 = (undefined2 *)(&DAT_0216a7e4 + local_4c * 2);
    iVar9 = local_2c;
    do {
      local_18 = *puVar10;
      FUN_02166408(*(undefined4 *)(local_50 + DAT_0216e6e0),local_24,uVar5,uVar1,uVar2,2,0x480,
                   &local_18);
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
      local_24 = local_24 + 0x20;
    } while (iVar9 < 3);
    uVar6 = FUN_02165dcc(0,local_1c,0);
    *(undefined4 *)(DAT_0216e6e0 + local_50 + 0x48) = uVar6;
    local_50 = local_50 + 4;
    local_4c = local_4c + 3;
    local_40 = local_40 + 1;
  } while (local_40 < 4);
  uVar6 = FUN_02165fc4(0,0x44,1);
  *(undefined4 *)(DAT_0216e6e0 + 0x58) = uVar6;
  FUN_02165ce0(*(undefined4 *)(DAT_0216e6e0 + 0x58),0xffffffff,0x200);
  FUN_02165b80(*(undefined4 *)(DAT_0216e6e0 + 0x58),0xffffffff,2);
  uVar6 = FUN_02167814(0,0x2156b79,0,0x78);
  *(undefined4 *)(DAT_0216e6e0 + 0x5c) = uVar6;
  FUN_02156354(0,0xc0);
  return;
}


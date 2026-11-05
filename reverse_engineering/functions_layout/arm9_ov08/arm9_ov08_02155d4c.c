
void FUN_02155d4c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_68;
  int local_64;
  int *local_60;
  int local_54;
  int local_50;
  int local_48;
  int local_30;
  short local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  
  uVar4 = DAT_0216a4d2;
  uVar3 = DAT_0216a4d0;
  DAT_0216e6dc = FUN_02166b8c(0x128,4);
  *(undefined1 *)(DAT_0216e6dc + 0x11c) = 0xff;
  iVar9 = 0;
  *(undefined1 *)(DAT_0216e6dc + 0x121) = 0;
  *(undefined1 *)(DAT_0216e6dc + 0x123) = 1;
  *(undefined1 *)(DAT_0216e6dc + 0x124) = 1;
  iVar8 = 0;
  do {
    uVar5 = FUN_02165ff4(0,0x34);
    *(undefined4 *)(DAT_0216e6dc + iVar8 + 0x30) = uVar5;
    puVar6 = *(uint **)(DAT_0216e6dc + iVar8 + 0x30);
    *puVar6 = *puVar6 & 0xc1fffcff | 0x200;
    iVar7 = *(int *)(DAT_0216e6dc + iVar8 + 0x30);
    *(ushort *)(iVar7 + 4) = *(ushort *)(iVar7 + 4) & 0xf3ff | 0xc00;
    iVar8 = iVar8 + 4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x2f);
  iVar9 = 0;
  puVar10 = &DAT_0216a4c4;
  iVar8 = 0;
  do {
    uVar5 = FUN_02165ff4(0,*puVar10);
    *(undefined4 *)(DAT_0216e6dc + iVar8 + 0xec) = uVar5;
    puVar6 = *(uint **)(DAT_0216e6dc + iVar8 + 0xec);
    *puVar6 = *puVar6 & 0xc1fffcff | 0x200;
    iVar7 = *(int *)(DAT_0216e6dc + iVar8 + 0xec);
    *(ushort *)(iVar7 + 4) = *(ushort *)(iVar7 + 4) & 0xf3ff | 0xc00;
    puVar10 = puVar10 + 1;
    iVar8 = iVar8 + 4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = 0;
  puVar10 = &DAT_0216a4bc;
  iVar8 = 0;
  do {
    uVar5 = FUN_02165fc4(0,*puVar10,1);
    *(undefined4 *)(DAT_0216e6dc + iVar8 + 0xfc) = uVar5;
    FUN_02165ce0(*(undefined4 *)(DAT_0216e6dc + iVar8 + 0xfc),0xffffffff,0x200,0);
    FUN_02165b80(*(undefined4 *)(DAT_0216e6dc + iVar8 + 0xfc),0xffffffff,3);
    uVar2 = DAT_0216a4ca;
    uVar1 = DAT_0216a4c8;
    puVar10 = puVar10 + 1;
    iVar8 = iVar8 + 4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  local_48 = 0;
  local_1a = 0;
  local_64 = 0;
  local_60 = &DAT_0216b2f0;
  local_30 = 0;
  do {
    local_68 = 0;
    local_54 = 0;
    local_50 = 0;
    do {
      uVar5 = FUN_02166718(0,uVar1,uVar2,0,&local_20,0);
      *(undefined4 *)(local_54 + local_64 + DAT_0216e6dc) = uVar5;
      local_28 = 0;
      iVar9 = local_50 << 1;
      iVar8 = local_30;
      do {
        local_1c = *(undefined2 *)(*local_60 + iVar9);
        FUN_02166408(*(undefined4 *)(local_64 + local_54 + DAT_0216e6dc),local_28,0,uVar3,uVar4,2,
                     0x480,&local_1c);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 2;
        local_28 = local_28 + 0x12;
      } while (iVar8 < 0xc);
      if (local_48 == 0) {
        uVar5 = FUN_02165dcc(0,local_20,1);
        *(undefined4 *)(DAT_0216e6dc + local_54 + 0x104) = uVar5;
      }
      local_54 = local_54 + 4;
      local_50 = local_50 + 0xc;
      local_68 = local_68 + 1;
    } while (local_68 < 4);
    local_64 = local_64 + 0x10;
    local_60 = local_60 + 1;
    local_48 = local_48 + 1;
  } while (local_48 < 3);
  uVar5 = FUN_02165fc4(0,0x40,1);
  *(undefined4 *)(DAT_0216e6dc + 0x114) = uVar5;
  FUN_02165ce0(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,0x200);
  FUN_02165b80(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,2);
  uVar5 = FUN_02167814(0,0x2155c55,0,0x78);
  *(undefined4 *)(DAT_0216e6dc + 0x118) = uVar5;
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),0,0xc0);
  return;
}


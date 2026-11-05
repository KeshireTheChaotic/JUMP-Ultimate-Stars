
void FUN_021c6bbc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_144 [8];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  undefined1 auStack_128 [8];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  undefined1 auStack_10c [8];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  undefined1 auStack_d4 [8];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  short local_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(*param_2 + 0xc))();
  (**(code **)(*param_2 + 0x48))();
  (**(code **)(*param_2 + 0x50))(param_2,2);
  FUN_021c6f9c(&local_24);
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
  for (uVar10 = 0; uVar10 < uVar2; uVar10 = uVar10 + 1) {
    iVar8 = uVar10 * 8;
    puVar5 = (undefined2 *)(*(int *)(param_1 + 0x58) + iVar8);
    if (*(short *)(*(int *)(param_1 + 0x58) + iVar8) == -1) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))(*(int **)(param_1 + 0x54),puVar5[1]);
      *puVar5 = uVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x54) + 0x40))
              (*(int **)(param_1 + 0x54),&local_84,*(undefined2 *)(*(int *)(param_1 + 0x58) + iVar8)
              );
    local_24 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + iVar8 + 4) * 0x1000;
    local_1c = local_24 + sStack_80 * 0x1000;
    local_20 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + iVar8 + 6) * 0x1000;
    local_18 = local_20 + sStack_7e * 0x1000;
    FUN_021c6f9c(&local_34);
    iVar9 = (int)local_84;
    uVar6 = FUN_0200c954(iVar9);
    uVar6 = FUN_0200bfb4(uVar6,DAT_0209d488);
    uVar7 = FUN_0200c954(uVar3);
    uVar6 = FUN_0200c5ac(uVar6,uVar7);
    FUN_0200c9e4(0x45800000,uVar6);
    local_34 = FUN_0200c8e0();
    iVar8 = (int)sStack_82;
    uVar6 = FUN_0200c954();
    uVar6 = FUN_0200bfb4(uVar6,DAT_0209d488);
    uVar7 = FUN_0200c954(uVar4);
    uVar6 = FUN_0200c5ac(uVar6,uVar7);
    FUN_0200c9e4(0x45800000,uVar6);
    local_30 = FUN_0200c8e0();
    uVar6 = FUN_0200c954(iVar9 + sStack_80);
    uVar6 = FUN_0200bfb4(DAT_0209d488,uVar6);
    uVar7 = FUN_0200c954(uVar3);
    uVar6 = FUN_0200c5ac(uVar6,uVar7);
    FUN_0200c9e4(0x45800000,uVar6);
    local_2c = FUN_0200c8e0();
    uVar6 = FUN_0200c954(iVar8 + sStack_7e);
    uVar6 = FUN_0200bfb4(DAT_0209d488,uVar6);
    uVar7 = FUN_0200c954(uVar4);
    uVar6 = FUN_0200c5ac(uVar6,uVar7);
    FUN_0200c9e4(0x45800000,uVar6);
    local_28 = FUN_0200c8e0();
    local_90 = 0;
    local_8c = local_20;
    local_88 = local_24;
    FUN_021c6fb4(auStack_40,&local_88,&local_8c,&local_90);
    local_98 = local_30;
    local_94 = local_34;
    FUN_021c6fc8(auStack_a0,&local_94,&local_98);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_40,&DAT_02093c5c,param_3,auStack_a0,auStack_a8,auStack_b0,auStack_b8)
    ;
    local_c4 = 0;
    local_c0 = local_20;
    local_bc = local_1c;
    FUN_021c6fb4(auStack_4c,&local_bc,&local_c0,&local_c4);
    local_cc = local_30;
    local_c8 = local_2c;
    FUN_021c6fc8(auStack_d4,&local_c8,&local_cc);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_4c,&DAT_02093c5c,param_3,auStack_d4,auStack_a8,auStack_b0,auStack_b8)
    ;
    local_e0 = 0;
    local_dc = local_18;
    local_d8 = local_1c;
    FUN_021c6fb4(auStack_58,&local_d8,&local_dc,&local_e0);
    local_e8 = local_28;
    local_e4 = local_2c;
    FUN_021c6fc8(auStack_f0,&local_e4,&local_e8);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_58,&DAT_02093c5c,param_4,auStack_f0,auStack_a8,auStack_b0,auStack_b8)
    ;
    local_fc = 0;
    local_f8 = local_18;
    local_f4 = local_1c;
    FUN_021c6fb4(auStack_64,&local_f4,&local_f8,&local_fc);
    local_104 = local_28;
    local_100 = local_2c;
    FUN_021c6fc8(auStack_10c,&local_100,&local_104);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_64,&DAT_02093c5c,param_4,auStack_10c,auStack_a8,auStack_b0,auStack_b8
              );
    local_118 = 0;
    local_114 = local_18;
    local_110 = local_24;
    FUN_021c6fb4(auStack_70,&local_110,&local_114,&local_118);
    local_120 = local_28;
    local_11c = local_34;
    FUN_021c6fc8(auStack_128,&local_11c,&local_120);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_70,&DAT_02093c5c,param_4,auStack_128,auStack_a8,auStack_b0,auStack_b8
              );
    local_134 = 0;
    local_130 = local_20;
    local_12c = local_24;
    FUN_021c6fb4(auStack_7c,&local_12c,&local_130,&local_134);
    local_13c = local_30;
    local_138 = local_34;
    FUN_021c6fc8(auStack_144,&local_138,&local_13c);
    FUN_021c6fd8(auStack_a8,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b0,&DAT_02093c2c);
    FUN_021c6fd8(auStack_b8,&DAT_02093c2c);
    (**(code **)(*param_2 + 0x10))
              (param_2,auStack_7c,&DAT_02093c5c,param_3,auStack_144,auStack_a8,auStack_b0,auStack_b8
              );
  }
  (**(code **)(*param_2 + 0x4c))();
  return;
}



undefined4 FUN_02156578(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_1d4;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [8];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [8];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 auStack_178 [8];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 auStack_160 [8];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 auStack_148 [8];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined1 auStack_11c [11];
  undefined1 auStack_111 [17];
  int local_100 [6];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar1 = FUN_02155824();
  if ((iVar1 != 0) && (*(char *)(iVar1 + 6) == '\0')) {
    iVar2 = FUN_0214e2d0(iVar1);
    iVar7 = *(int *)(param_1 + 0x3c8);
    if (iVar7 == 0) {
      iVar7 = -1;
      local_1d4 = FUN_0214e284(iVar1);
    }
    else {
      local_1d4 = (uint)*(byte *)(iVar7 + 0x13);
      iVar7 = (int)*(short *)(iVar7 + 0x16) >> 6;
    }
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    if (iVar7 != -1) {
      if (0x100 < iVar7) {
        iVar7 = 0x100;
      }
      if (iVar7 < 0x40) {
        iVar7 = 0x40;
      }
    }
    iVar11 = (int)(iVar2 * 0x3000 + ((uint)(iVar2 * 0x3000 >> 0xd) >> 0x12)) >> 0xe;
    (**(code **)(**(int **)(*(int *)(param_2[0x23] + 4) + 100) + 0x60))();
    (**(code **)(**(int **)(*(int *)(param_2[0x23] + 4) + 100) + 100))();
    local_1ac = 0x200;
    local_1b0 = 0x100;
    local_1b4 = 0;
    local_1b8 = 0x80;
    FUN_02155fdc(auStack_d8,&local_1b8,&local_1b4,&local_1b0,&local_1ac);
    FUN_021509f8(auStack_1c0,0xfffffff8,0,0,8);
    FUN_02155fa8(auStack_e8,auStack_1c0);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x23] + 4) + 100),1,auStack_e8,&DAT_02093d5c,
                 auStack_d8);
    local_194 = 0x240;
    local_198 = 0x80;
    local_19c = 0;
    local_1a0 = 0;
    FUN_02155fdc(auStack_b8,&local_1a0,&local_19c,&local_198,&local_194);
    FUN_021509f8(auStack_1a8,0,0,iVar11,9);
    FUN_02155fa8(auStack_c8,auStack_1a8);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x23] + 4) + 100),1,auStack_c8,&DAT_02093d5c,
                 auStack_b8);
    local_17c = 0x200;
    local_180 = 0x180;
    local_184 = 0;
    local_188 = 0x100;
    FUN_02155fdc(auStack_98,&local_188,&local_184,&local_180,&local_17c);
    FUN_021509f8(auStack_190,iVar11,0,iVar11 + 8,8);
    FUN_02155fa8(auStack_a8,auStack_190);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x23] + 4) + 100),1,auStack_a8,&DAT_02093d5c,
                 auStack_98);
    (**(code **)(**(int **)(*(int *)(param_2[0x23] + 4) + 100) + 0x68))();
    (**(code **)(**(int **)(param_2[0x23] + 4) + 0xd8))(*(int **)(param_2[0x23] + 4),1);
    if (iVar7 != -1) {
      iVar10 = ((int)(iVar7 * 0x3000 + ((uint)(iVar7 * 0x3000 >> 0xd) >> 0x12)) >> 0xe) - iVar11;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if (iVar10 == 0) {
        piVar3 = *(int **)(param_2[0x24] + 4);
        (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_2[0x24] + 4) + 100) + 0x60))();
        (**(code **)(**(int **)(*(int *)(param_2[0x24] + 4) + 100) + 100))();
        local_164 = 0x200;
        local_168 = 0x100;
        local_16c = 0;
        local_170 = 0x80;
        FUN_02155fdc(auStack_78,&local_170,&local_16c,&local_168,&local_164);
        FUN_021509f8(auStack_178,0xfffffff8,0,0,8);
        FUN_02155fa8(auStack_88,auStack_178);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x24] + 4) + 100),1,auStack_88,&DAT_0216fa54,
                     auStack_78);
        local_14c = 0x240;
        local_150 = 0x80;
        local_154 = 0;
        local_158 = 0;
        FUN_02155fdc(auStack_58,&local_158,&local_154,&local_150,&local_14c);
        FUN_021509f8(auStack_160,0,0,iVar10,9);
        FUN_02155fa8(auStack_68,auStack_160);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x24] + 4) + 100),1,auStack_68,&DAT_0216fa54,
                     auStack_58);
        local_134 = 0x200;
        local_138 = 0x180;
        local_13c = 0;
        local_140 = 0x100;
        FUN_02155fdc(auStack_38,&local_140,&local_13c,&local_138,&local_134);
        FUN_021509f8(auStack_148,iVar10,0,iVar10 + 8,8);
        FUN_02155fa8(auStack_48,auStack_148);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_2[0x24] + 4) + 100),1,auStack_48,&DAT_0216fa54,
                     auStack_38);
        local_130 = (iVar11 + 0x16) * 0x1000;
        FUN_02150a10(param_2[0x24],&local_130);
        (**(code **)(**(int **)(*(int *)(param_2[0x24] + 4) + 100) + 0x68))();
        (**(code **)(**(int **)(param_2[0x24] + 4) + 0xd8))(*(int **)(param_2[0x24] + 4),1);
      }
    }
    if (0xd0 < iVar11) {
      iVar11 = 0xd0;
    }
    if (iVar11 < 0x60) {
      iVar11 = 0x60;
    }
    iVar10 = 0;
    do {
      FUN_0200d12c(iVar2,10);
      local_100[-iVar10 + 2] = extraout_r1;
      iVar2 = FUN_0200d12c(iVar2,10);
      if (iVar7 != -1) {
        FUN_0200d12c(iVar7,10);
        local_100[-iVar10 + 5] = extraout_r1_00;
        iVar7 = FUN_0200d12c(iVar7,10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    local_12c = iVar11 << 0xc;
    FUN_02150a10(param_2[0x19],&local_12c);
    (**(code **)(**(int **)(param_2[0x19] + 4) + 0xd8))(*(int **)(param_2[0x19] + 4),1);
    iVar2 = 0;
    bVar6 = false;
    iVar11 = iVar11 + 8;
    do {
      iVar10 = local_100[iVar2];
      if ((iVar10 != 0 || bVar6) || (iVar2 == 2)) {
        local_128 = iVar11 << 0xc;
        FUN_02150a10(param_2[iVar2 + 0x1a],&local_128);
        FUN_02023894(*(undefined4 *)(param_2[iVar2 + 0x1a] + 4),iVar10 + 0x830008,0);
        (**(code **)(**(int **)(param_2[iVar2 + 0x1a] + 4) + 0xd8))
                  (*(int **)(param_2[iVar2 + 0x1a] + 4),1);
        iVar11 = iVar11 + 8;
        bVar6 = true;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    if (iVar7 != -1) {
      local_124 = iVar11 << 0xc;
      FUN_02150a10(param_2[0x1d],&local_124);
      (**(code **)(**(int **)(param_2[0x1d] + 4) + 0xd8))(*(int **)(param_2[0x1d] + 4),1);
      iVar2 = 0;
      bVar6 = false;
      iVar11 = iVar11 + 8;
      do {
        iVar7 = local_100[iVar2 + 3];
        if ((iVar7 != 0 || bVar6) || (iVar2 == 2)) {
          local_120 = iVar11 << 0xc;
          FUN_02150a10(param_2[iVar2 + 0x1e],&local_120);
          FUN_02023894(*(undefined4 *)(param_2[iVar2 + 0x1e] + 4),iVar7 + 0x830008,0);
          (**(code **)(**(int **)(param_2[iVar2 + 0x1e] + 4) + 0xd8))
                    (*(int **)(param_2[iVar2 + 0x1e] + 4),1);
          iVar11 = iVar11 + 8;
          bVar6 = true;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    iVar2 = FUN_02078cb8(iVar1);
    uVar9 = (uint)*(byte *)(iVar1 + 7);
    uVar8 = *param_2;
    if (*(int *)(param_1 + 0x418) == 0) {
      FUN_021552e0();
      iVar1 = FUN_0203b404();
      DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
      piVar3 = (int *)FUN_020101f4(s_battle_ChrWin_aar_0216fbe0,0);
      if (uVar9 != 0xffffffff) {
        if (iVar2 == 0) {
          thunk_FUN_0207400c(auStack_11c,s_battle_chr_________aar_0216fc10);
          iVar1 = 0x5f1000;
        }
        else {
          thunk_FUN_0207400c(auStack_11c,s_battle_chr_________b_aar_0216fbf4);
          iVar1 = 0x5f2000;
        }
        thunk_FUN_02074258(auStack_111,*(undefined4 *)(&DAT_020924b0 + uVar9 * 8));
        piVar4 = (int *)FUN_020101f4(auStack_11c,0);
        piVar5 = (int *)FUN_020329ec(iVar1 + uVar9);
        if (piVar5[6] == 0) {
          (**(code **)(*piVar5 + 0x14))();
        }
        *(int *)(param_1 + 0x418) = piVar5[6];
        local_1cc = 0x80000;
        FUN_0214d494(*(undefined4 *)(param_1 + 0x418),&local_1cc);
        FUN_021500cc(*(undefined4 *)(param_1 + 0x418),uVar8);
        FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x418) + 4),iVar1 + uVar9,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x418) + 4) + 0x68) + 0x6c))();
        local_1c4 = 0x18000;
        local_1c8 = 0x3000;
        FUN_0214ce68(*(undefined4 *)(param_1 + 0x418),&local_1c8,&local_1c4);
        piVar5 = *(int **)(*(int *)(param_1 + 0x418) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        (**(code **)(*piVar4 + 0xc))();
      }
      (**(code **)(*piVar3 + 0xc))();
      FUN_0214d4cc();
    }
    FUN_02023894(*(undefined4 *)(param_2[0x17] + 4),local_1d4 + 0x5f001a,0);
    FUN_02023894(*(undefined4 *)(param_2[0x18] + 4),
                 *(char *)(*(int *)(param_1 + 0x3b8) + 0x5cc) + 0x5f0006,0);
    iVar1 = 6;
    do {
      (**(code **)(**(int **)(param_2[iVar1 + 0x11] + 4) + 0xd8))
                (*(int **)(param_2[iVar1 + 0x11] + 4),1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    (**(code **)(**(int **)(param_2[0x25] + 4) + 0xd8))(*(int **)(param_2[0x25] + 4),1);
  }
  return 1;
}


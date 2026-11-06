
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov03 */

void ALWidgetImp::Create(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int local_19c;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130 [25];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4 [4];
  undefined1 auStack_a4 [64];
  undefined2 local_64;
  undefined2 local_62 [10];
  undefined2 uStack_4e;
  
  FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  uVar10 = _DAT_021d5154;
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 4);
  iVar1 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_0215e570,s_Create_0215e3f8,0x159);
  if (iVar1 != 0) {
    func_0x021ae114(iVar1,uVar9,uVar10,CreateDrawFunc);
  }
  iVar1 = FUN_0214d47c();
  iVar8 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar8 + 0x170) = 0xe0;
  *(undefined4 *)(iVar8 + 0x174) = 0x20;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x180) = 5;
  FUN_0214fb44(iVar1,*(undefined4 *)(param_1 + 0x98));
  local_b4[2] = 0xc000;
  local_b4[3] = 0x4000;
  FUN_0214e990(iVar1,local_b4 + 3,local_b4 + 2);
  FUN_02157d04(iVar1,0);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x13c) = 1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215891c);
  local_b4[1] = 0x82000;
  FUN_02152730(iVar1,local_b4 + 1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x144) = 1;
  *(int *)(param_1 + 0x30) = iVar1;
  uVar10 = *(undefined4 *)(param_1 + 0x38);
  iVar8 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  iVar12 = *(int *)(*(int *)(iVar8 + 4) + 0x10);
  iVar8 = Create(uVar10,_DAT_021d5154);
  local_c8 = 0;
  local_cc = 0;
  FUN_0214e990(iVar8,&local_cc,&local_c8);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  local_c4 = 0x84000;
  FUN_02152730(iVar8,&local_c4);
  FUN_02028384(*(undefined4 *)(iVar8 + 4),FUN_02157d2c);
  (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),param_1);
  FUN_0214fb44(iVar8,*(undefined4 *)(param_1 + 0x98));
  iVar2 = FUN_0203b424(0);
  FUN_0214cf8c(*(undefined4 *)(iVar2 + 0x88));
  FUN_02036ab8();
  iVar2 = FUN_0214d47c();
  local_bc = 0x1c000;
  local_c0 = 0x1a000;
  FUN_0214e990(iVar2,&local_c0,&local_bc);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0xa4))(piVar3,0x20,0x20);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x7c))(piVar3,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_0214e908(iVar8,iVar2);
  iVar11 = 0;
  do {
    iVar4 = func_0x021ca3a4(0x100,0x10,&DAT_0215e6f0,0,0);
    local_64 = 0x3000;
    iVar5 = FUN_0214d784(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar12 + iVar11 + 0x74));
    for (iVar7 = 0;
        (iVar7 < 10 &&
        (local_62[iVar11] = *(undefined2 *)(iVar5 + iVar7 * 2), *(short *)(iVar5 + iVar7 * 2) != 0))
        ; iVar7 = iVar7 + 1) {
    }
    if (iVar7 == 10) {
      uStack_4e = 0;
    }
    piVar3 = *(int **)(iVar4 + 4);
    (**(code **)(*(int *)piVar3[0x19] + 0x70))();
    (**(code **)(*piVar3 + 0xc4))();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar3 + 0x6c))(piVar3,&local_64,0xffffffff);
    piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    FUN_0214fb44(iVar4,iVar2);
    local_b4[0] = iVar11 << 0x11;
    local_b8 = 0;
    FUN_0214e990(iVar4,&local_b8,local_b4);
    FUN_0214e908(iVar8,iVar4);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  FUN_0214cfc8();
  uVar10 = *(undefined4 *)(param_1 + 0x38);
  iVar8 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  iVar12 = *(int *)(*(int *)(iVar8 + 4) + 0x10);
  iVar8 = Create(uVar10,_DAT_021d5154);
  local_130[0x13] = 0;
  local_130[0x12] = 0;
  FUN_0214e990(iVar8,local_130 + 0x12,local_130 + 0x13);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  local_130[0x14] = 0x84000;
  FUN_02152730(iVar8,local_130 + 0x14);
  FUN_02028384(*(undefined4 *)(iVar8 + 4),FUN_02157e6c);
  (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),param_1);
  FUN_0214fb44(iVar8,*(undefined4 *)(param_1 + 0x98));
  iVar2 = FUN_0203b424(2);
  FUN_0214cf8c(*(undefined4 *)(iVar2 + 0x88));
  FUN_02036ab8();
  iVar2 = FUN_0214d47c();
  local_130[0x16] = 0xf000;
  local_130[0x15] = 0x1a000;
  FUN_0214e990(iVar2,local_130 + 0x15,local_130 + 0x16);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0xa4))(piVar3,0x20,0x20);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x7c))(piVar3,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_0214e908(iVar8,iVar2);
  iVar11 = 0;
  do {
    iVar4 = func_0x021ca3a4(0xa0,0x10,s_font_JSKFont_aft_0215e700,0,0);
    thunk_FUN_0207400c(auStack_a4,FUN_0215e714);
    uVar10 = FUN_0214d79c(*(undefined4 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 2),
                          *(undefined1 *)(iVar12 + iVar11 + 0x74));
    thunk_FUN_020741c4(auStack_a4,uVar10);
    piVar3 = *(int **)(iVar4 + 4);
    (**(code **)(*(int *)piVar3[0x19] + 0x70))();
    (**(code **)(*piVar3 + 0xc4))();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,auStack_a4);
    piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    FUN_0214fb44(iVar4,iVar2);
    local_130[0x17] = 0;
    local_130[0x18] = iVar11 << 0x11;
    FUN_0214e990(iVar4,local_130 + 0x17,local_130 + 0x18);
    FUN_0214e908(iVar8,iVar4);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  FUN_0214cfc8();
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  do {
    func_0x021ae3a4(*(undefined4 *)(iVar1 + 4));
    iVar2 = FUN_0214d47c();
    FUN_02157d04(iVar2,0);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    *(int *)(param_1 + iVar8 * 4 + 0x3c) = iVar2;
    iVar11 = Create(iVar2,_DAT_021d5154);
    (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
    *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar8;
    local_130[0xe] = 0;
    local_130[0xd] = 0;
    FUN_0214e990(iVar11,local_130 + 0xd,local_130 + 0xe);
    local_130[0xf] = 0xe0000;
    FUN_0214d52c(iVar11,local_130 + 0xf);
    (**(code **)(**(int **)(iVar11 + 4) + 0x24))(*(int **)(iVar11 + 4),param_1);
    if (*(int *)(param_1 + 0xd8) == iVar8) {
      func_0x021b6214(*(undefined4 *)(iVar11 + 4),1);
    }
    else {
      func_0x021b6214(*(undefined4 *)(iVar11 + 4),0);
    }
    uVar10 = FUN_0214e81c(0,&DAT_0215e474,&DAT_02093c8c);
    FUN_02020e98(iVar11,uVar10);
    *(code **)(*(int *)(iVar11 + 4) + 0xdc) = FUN_02158a5c;
    iVar12 = FUN_0203b3f4();
    iVar12 = FUN_0214d4a4(*(undefined4 *)(iVar12 + 0x88),0x8b1000,0,0xe0);
    (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
    local_130[0x11] = 0x10000;
    local_130[0x10] = 0x6c000;
    FUN_0214e990(iVar12,local_130 + 0x10,local_130 + 0x11);
    FUN_0214e908(iVar11,iVar12);
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),iVar11);
    *(code **)(*(int *)(iVar2 + 4) + 0xdc) = FUN_0215898c;
    *(code **)(*(int *)(iVar2 + 4) + 0xe0) = FUN_021589f4;
    iVar11 = Create(iVar2,_DAT_021d5154);
    (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
    *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar8;
    local_130[3] = 0;
    local_130[2] = 0;
    FUN_0214e990(iVar11,local_130 + 2,local_130 + 3);
    func_0x021b6214(*(undefined4 *)(iVar11 + 4),0);
    local_130[4] = 0xd8000;
    FUN_0214d52c(iVar11,local_130 + 4);
    uVar10 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    uVar6 = FUN_02157f80(uVar10,*(undefined1 *)(param_1 + 2),iVar8);
    if (uVar6 < 3) {
      iVar12 = FUN_0203b3f4();
      iVar12 = FUN_0214d4a4(*(undefined4 *)(iVar12 + 0x88),0x851000,uVar6 + 0x18,0xd8);
      local_130[0xc] = 0x14000;
      local_130[0xb] = 0x11000;
      FUN_0214e990(iVar12,local_130 + 0xb,local_130 + 0xc);
      (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
      FUN_0214e908(iVar11,iVar12);
    }
    else {
      iVar12 = FUN_0200d12c(uVar6 + 1,10);
      if (iVar12 != 0) {
        iVar4 = FUN_0203b3f4();
        iVar4 = FUN_0214d4a4(*(undefined4 *)(iVar4 + 0x88),0x851000,iVar12 + 0x1b,0xd8);
        local_130[6] = 0x10000;
        local_130[5] = 0xe000;
        FUN_0214e990(iVar4,local_130 + 5,local_130 + 6);
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
        FUN_0214e908(iVar11,iVar4);
      }
      iVar4 = FUN_0203b3f4();
      iVar4 = FUN_0214d4a4(*(undefined4 *)(iVar4 + 0x88),0x851000,uVar6 + 1 + iVar12 * -10 + 0x1b,
                           0xd8);
      if (iVar12 == 0) {
        local_130[10] = 0x10000;
        local_130[9] = 0x12000;
        FUN_0214e990(iVar4,local_130 + 9,local_130 + 10);
      }
      else {
        local_130[8] = 0x10000;
        local_130[7] = 0x16000;
        FUN_0214e990(iVar4,local_130 + 7,local_130 + 8);
      }
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      FUN_0214e908(iVar11,iVar4);
    }
    iVar11 = Create(iVar2,_DAT_021d5154);
    (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
    *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar8;
    local_150 = 0;
    local_154 = 0xc7000;
    FUN_0214e990(iVar11,&local_154,&local_150);
    func_0x021b6214(*(undefined4 *)(iVar11 + 4),0);
    local_14c = 0xd8000;
    FUN_0214d52c(iVar11,&local_14c);
    iVar12 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    iVar4 = (int)*(short *)(*(int *)(*(int *)(iVar12 + 4) + 0x10) + iVar8 * 2 + 0x88);
    iVar12 = FUN_0200d12c(iVar4,100);
    iVar4 = iVar4 + iVar12 * -100;
    iVar5 = FUN_0200d12c(iVar4,10);
    local_19c = 0xc;
    if (iVar12 != 0) {
      iVar7 = FUN_0203b3f4();
      iVar7 = FUN_0214d4a4(*(undefined4 *)(iVar7 + 0x88),0x851000,iVar12 + 0x2d,0xd8);
      local_144 = 0xd000;
      local_148 = 0x4000;
      FUN_0214e990(iVar7,&local_148,&local_144);
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      FUN_0214e908(iVar11,iVar7);
    }
    if (iVar12 != 0 || iVar5 != 0) {
      iVar7 = FUN_0203b3f4();
      iVar7 = FUN_0214d4a4(*(undefined4 *)(iVar7 + 0x88),0x851000,iVar5 + 0x2d,0xd8);
      if (iVar12 == 0) {
        if (iVar5 != 0) {
          local_134 = 0xd000;
          local_138 = 0x8000;
          FUN_0214e990(iVar7,&local_138,&local_134);
          local_19c = 0x10;
        }
      }
      else {
        local_13c = 0xd000;
        local_140 = 0xc000;
        FUN_0214e990(iVar7,&local_140,&local_13c);
        local_19c = 0x14;
      }
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      FUN_0214e908(iVar11,iVar7);
    }
    iVar12 = FUN_0203b3f4();
    iVar12 = FUN_0214d4a4(*(undefined4 *)(iVar12 + 0x88),0x851000,iVar4 + iVar5 * -10 + 0x2d,0xd8);
    local_130[0] = local_19c << 0xc;
    local_130[1] = 0xd000;
    FUN_0214e990(iVar12,local_130,local_130 + 1);
    (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
    FUN_0214e908(iVar11,iVar12);
    iVar11 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    iVar12 = *(int *)(*(int *)(iVar11 + 4) + 0x10) + iVar8;
    iVar11 = FUN_0214d7d4(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar12 + 0x74));
    if (-1 < *(int *)(&DAT_0215e450 + iVar11 * 4)) {
      iVar11 = Create(iVar2,_DAT_021d5154);
      (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
      *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar8;
      local_164 = 0x8000;
      local_168 = 0xac000;
      FUN_0214e990(iVar11,&local_168,&local_164);
      func_0x021b6214(*(undefined4 *)(iVar11 + 4),0);
      local_160 = 0xd8000;
      FUN_0214d52c(iVar11,&local_160);
      iVar4 = FUN_0203b3f4();
      uVar10 = *(undefined4 *)(iVar4 + 0x88);
      iVar12 = FUN_0214d7d4(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar12 + 0x74));
      iVar12 = FUN_0214d4a4(uVar10,0x851000,*(undefined4 *)(&DAT_0215e450 + iVar12 * 4),0xd8);
      (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
      local_158 = 0x8000;
      local_15c = 0x8000;
      FUN_0214e990(iVar12,&local_15c,&local_158);
      FUN_0214e908(iVar11,iVar12);
    }
    iVar11 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    iVar11 = FUN_0214d808(*(undefined1 *)(param_1 + 2),
                          *(undefined1 *)(*(int *)(*(int *)(iVar11 + 4) + 0x10) + iVar8 + 0x74));
    if (iVar11 != 0) {
      iVar11 = Create(iVar2,_DAT_021d5154);
      (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
      *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar8;
      local_178 = 0x10000;
      local_17c = 0x90000;
      FUN_0214e990(iVar11,&local_17c,&local_178);
      func_0x021b6214(*(undefined4 *)(iVar11 + 4),0);
      local_174 = 0xd8000;
      FUN_0214d52c(iVar11,&local_174);
      iVar12 = FUN_0203b3f4();
      iVar12 = FUN_0214d4a4(*(undefined4 *)(iVar12 + 0x88),0x851000,0x25,0xd8);
      (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
      local_16c = 0x8000;
      local_170 = 0x8000;
      FUN_0214e990(iVar12,&local_170,&local_16c);
      FUN_0214e908(iVar11,iVar12);
    }
    if (*(int *)(param_1 + 0xd8) == iVar8) {
      iVar2 = Create(iVar2,_DAT_021d5154);
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      *(int *)(*(int *)(iVar2 + 4) + 0x124) = iVar8;
      local_18c = 0;
      local_190 = 0;
      FUN_0214e990(iVar2,&local_190,&local_18c);
      func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
      local_188 = 0xd9000;
      FUN_0214d52c(iVar2,&local_188);
      iVar11 = FUN_0203b3f4();
      iVar11 = FUN_0214d4a4(*(undefined4 *)(iVar11 + 0x88),0x851000,0xb,0xd9);
      (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
      local_180 = 0x10000;
      local_184 = 0x74000;
      FUN_0214e990(iVar11,&local_184,&local_180);
      FUN_0214e908(iVar2,iVar11);
      if (*(int *)(param_1 + 0xcc) == 0) {
        uVar10 = FUN_02157f9c(iVar11);
        iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar10,0x21,0xe,5,0x80);
        *(int *)(param_1 + 0xcc) = iVar2;
        if (iVar2 != 0) {
          FUN_02157fe4(iVar2,0x79f,0x1e);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x14);
  (**(code **)(**(int **)(iVar1 + 4) + 0x1a0))
            (*(int **)(iVar1 + 4),*(undefined4 *)(param_1 + 0xd8),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0x198))(*(int **)(iVar1 + 4),*(undefined4 *)(param_1 + 0xd8))
  ;
  return;
}


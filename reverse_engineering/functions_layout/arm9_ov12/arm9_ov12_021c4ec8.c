
/* JUS-GAME JArenaParam::JArena_ParamInit [source-string] __FILE__="JArenaParam.cpp"
   __FUNCTION__="JArena_ParamInit" lines=[78] passed to 1 source-location call(s) */

void JArenaParam::JArena_ParamInit(int param_1)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int extraout_r1;
  undefined1 *puVar11;
  uint uVar12;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar13;
  undefined *puVar14;
  int iVar15;
  int local_5c;
  undefined1 auStack_48 [20];
  undefined1 local_34 [20];
  uint local_20 [3];
  
  iVar13 = param_1 * 0xca4;
  puVar14 = &DAT_020b4118 + iVar13;
  FUN_02073114(iVar13 + 0x3e60);
  uVar4 = FUN_020703b8(param_1);
  (&DAT_020b4dac)[iVar13] = uVar4;
  iVar5 = thunk_FUN_0201a228(0x2f0,s_JArenaParam_cpp_021d45e0,s_JArena_ParamInit_021d45b8,0x4e);
  FUN_020517fc(iVar5,0,0x2f0);
  if ((&DAT_020b4dac)[iVar13] == '\0') {
    switch(param_1) {
    case 0:
      FUN_0207120c(0x10000,1);
      break;
    case 1:
      FUN_0207120c(0x20000,1);
      break;
    case 2:
      FUN_0207120c(0x40000,1);
      break;
    case 3:
      FUN_0207120c(0x80000,1);
    }
    iVar8 = 0;
    iVar7 = 0;
    iVar15 = 0;
    do {
      *(undefined2 *)(iVar5 + iVar8 * 4) = 0;
      *(short *)(iVar5 + iVar8 * 4 + 2) = (short)iVar7;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar7 < 0x32);
    do {
      iVar7 = FUN_021c5478(iVar15);
      if (iVar7 != 0) {
        *(undefined2 *)(iVar5 + iVar8 * 4) = 1;
        *(short *)(iVar5 + iVar8 * 4 + 2) = (short)iVar15;
        iVar8 = iVar8 + 1;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x20);
    for (uVar12 = 0; uVar6 = FUN_020720d8(), uVar12 < uVar6; uVar12 = uVar12 + 1) {
      *(undefined2 *)(iVar5 + iVar8 * 4) = 2;
      *(short *)(iVar5 + iVar8 * 4 + 2) = (short)uVar12;
      iVar8 = iVar8 + 1;
    }
    for (iVar7 = 0; iVar7 < iVar8; iVar7 = iVar7 + 1) {
      uVar9 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar9,iVar8 - iVar7);
      FUN_02051890(iVar5 + extraout_r1 * 4,&DAT_021d529c,4);
      iVar15 = ((iVar8 - iVar7) + -1) * 4;
      FUN_02051890(iVar5 + iVar15,iVar5 + extraout_r1 * 4,4);
      FUN_02051890(&DAT_021d529c,iVar5 + iVar15,4);
    }
    FUN_020720d8();
    iVar7 = 0;
    bVar3 = true;
    local_5c = 0;
    do {
      *(uint *)(puVar14 + iVar7 * 4 + 0xc30) = *(uint *)(puVar14 + iVar7 * 4 + 0xc30) & 0xf7f00000;
      puVar14[iVar7 + 0xc80] = 0;
      (&DAT_020b4db3)[iVar13] = 0;
      (&DAT_020b4db2)[iVar13] = (&DAT_020b4db3)[iVar13];
      (&DAT_020b4db1)[iVar13] = (&DAT_020b4db2)[iVar13];
      (&DAT_020b4db0)[iVar13] = (&DAT_020b4db1)[iVar13];
      (&DAT_020b4db9)[iVar13] = 0;
      (&DAT_020b4db8)[iVar13] = (&DAT_020b4db9)[iVar13];
      (&DAT_020b4db7)[iVar13] = (&DAT_020b4db8)[iVar13];
      (&DAT_020b4db6)[iVar13] = (&DAT_020b4db7)[iVar13];
      (&DAT_020b4db5)[iVar13] = (&DAT_020b4db6)[iVar13];
      (&DAT_020b4db4)[iVar13] = (&DAT_020b4db5)[iVar13];
      *(undefined2 *)(&DAT_020b4dba + iVar13) = 0;
      iVar8 = FUN_0207216c(param_1,iVar7);
      uVar9 = FUN_02072198(param_1,iVar7);
      uVar12 = *(uint *)(puVar14 + iVar7 * 4 + 0xc30);
      if (((uVar12 & 0x1000000) != 0) || ((iVar7 == 0x13 && (bVar3)))) {
        *(uint *)(puVar14 + iVar7 * 4 + 0xc30) = *(uint *)(puVar14 + iVar7 * 4 + 0xc30) | 0x1000000;
        uVar10 = FUN_02071f10(DAT_020afeb4);
        FUN_02051890(uVar10,uVar9,0x5c);
        uVar9 = FUN_02071f08();
        FUN_02051890(uVar9,iVar8,0x40);
        (&DAT_020b4dad)[iVar13] = (char)iVar7;
        (&DAT_020b4dae)[iVar13] = (&DAT_020b4dad)[iVar13];
        bVar3 = false;
      }
      else if (((uVar12 & 0x4000000) == 0) && ((uVar12 & 0x2000000) == 0)) {
        iVar15 = iVar5 + local_5c * 4;
        sVar2 = *(short *)(iVar5 + local_5c * 4);
        if (sVar2 == 0) {
          FUN_02070a28(uVar9,7,*(undefined2 *)(iVar15 + 2));
          FUN_02070b5c(iVar8,7,*(undefined2 *)(iVar15 + 2));
          *(char *)(iVar8 + 0x37) = (char)*(undefined2 *)(iVar15 + 2);
        }
        else if (sVar2 == 1) {
          FUN_02070a28(uVar9,8,*(undefined2 *)(iVar15 + 2));
          FUN_02070b5c(iVar8,8,*(undefined2 *)(iVar15 + 2));
          *(undefined1 *)(iVar8 + 0x37) = 0xff;
        }
        else if (sVar2 == 2) {
          uVar10 = FUN_02072070(*(undefined2 *)(iVar15 + 2));
          FUN_02051890(uVar10,uVar9,0x5c);
          uVar9 = FUN_02072050(*(undefined2 *)(iVar15 + 2));
          FUN_02051890(uVar9,iVar8,0x40);
          *(undefined1 *)(iVar8 + 0x37) = 0xff;
        }
        local_5c = local_5c + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
  }
  DAT_020aff25 = 0;
  if ((&DAT_020b4dac)[iVar13] == '\x13') {
    DAT_020aff25 = 1;
    *(uint *)(&DAT_020b4d48 + (uint)(byte)(&DAT_020b4dad)[iVar13] * 4 + iVar13) =
         *(uint *)(&DAT_020b4d48 + (uint)(byte)(&DAT_020b4dad)[iVar13] * 4 + iVar13) | 0x8000000;
    FUN_021c5bb0(iVar5,puVar14);
    iVar7 = 0;
    for (iVar8 = 0; iVar8 < 5; iVar8 = iVar8 + 1) {
      uVar12 = (uint)*(short *)(iVar5 + iVar8 * 4 + 0x212);
      if ((byte)(&DAT_020b4dad)[iVar13] != uVar12) {
        local_20[iVar7] = uVar12;
        puVar1 = local_20 + iVar7;
        iVar7 = iVar7 + 1;
        *(uint *)(puVar14 + *puVar1 * 4 + 0xc30) =
             *(uint *)(puVar14 + *puVar1 * 4 + 0xc30) | 0x8000000;
        if (2 < iVar7) break;
      }
    }
  }
  else {
    local_20[2] = 0xffffffff;
    local_20[1] = 0xffffffff;
    local_20[0] = 0xffffffff;
    iVar7 = FUN_021c5d24(puVar14,(&DAT_020b4dad)[iVar13],local_20,3,1);
    if ((iVar7 != 0) && (iVar7 < 3)) {
      FUN_021c5d24(puVar14,(&DAT_020b4dad)[iVar13],local_20,3 - iVar7,0);
    }
  }
  DAT_020aff14 = (&DAT_020b4dad)[iVar13];
  iVar7 = 0;
  do {
    puVar1 = local_20 + iVar7;
    puVar11 = &DAT_020aff15 + iVar7;
    iVar7 = iVar7 + 1;
    *puVar11 = (char)*puVar1;
  } while (iVar7 < 3);
  if ((&DAT_020b4dac)[iVar13] == '\0') {
    iVar7 = 0;
    do {
      puVar11 = &DAT_020aff10 + iVar7;
      iVar7 = iVar7 + 1;
      *puVar11 = 0x13;
    } while (iVar7 < 4);
  }
  else {
    FUN_021c5bb0(iVar5,puVar14);
    FUN_021c5c64(puVar14,local_34,auStack_48);
    iVar7 = 0;
    do {
      uVar12 = (uint)*(short *)(iVar5 + iVar7 * 4 + 0x212);
      if ((byte)(&DAT_020b4dad)[iVar13] == uVar12) {
        DAT_020aff10 = local_34[iVar7];
      }
      else if (local_20[0] == uVar12) {
        DAT_020aff11 = local_34[iVar7];
      }
      else if (local_20[1] == uVar12) {
        DAT_020aff12 = local_34[iVar7];
      }
      else if (local_20[2] == uVar12) {
        DAT_020aff13 = local_34[iVar7];
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
  }
  FUN_020703d8();
  DAT_020afeac = 0x224f;
  uVar12 = 0;
  iVar7 = 0;
  DAT_020afeba = 0;
  do {
    if ((1 << (uVar12 & 0x1f) & (&DAT_020b0c94)[uVar12 >> 5]) != 0) {
      iVar8 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(uint *)(iVar5 + iVar8 + 0x260) = uVar12;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x24);
  uVar9 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar9,iVar7);
  DAT_020afe9c = *(undefined4 *)(iVar5 + extraout_r1_00 * 4 + 0x260);
  if (*(int *)(&DAT_021d4588 + param_1 * 4) == -1) {
    uVar9 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar9,3);
    DAT_020afea0 = *(int *)(&DAT_021d4588 + extraout_r1_01 * 4);
  }
  else {
    DAT_020afea0 = *(int *)(&DAT_021d4588 + param_1 * 4);
  }
  DAT_020afe90 = 4;
  DAT_020afe98 = 0;
  uVar9 = FUN_02072198(param_1,(&DAT_020b4dad)[iVar13]);
  uVar10 = FUN_02070ca4(0);
  FUN_02051890(uVar9,uVar10,0x5c);
  uVar9 = FUN_0207216c(param_1,(&DAT_020b4dad)[iVar13]);
  uVar10 = FUN_02070cdc(0);
  FUN_02051890(uVar9,uVar10,0x40);
  uVar12 = 1;
  iVar13 = 0;
  do {
    DAT_020afec2 = DAT_020afec2 | (byte)(1 << (uVar12 & 0xff));
    uVar9 = FUN_02072198(param_1,local_20[iVar13]);
    uVar10 = FUN_02070ca4(uVar12);
    FUN_02051890(uVar9,uVar10,0x5c);
    uVar9 = FUN_0207216c(param_1,local_20[iVar13]);
    uVar10 = FUN_02070cdc(uVar12);
    FUN_02051890(uVar9,uVar10,0x40);
    iVar13 = iVar13 + 1;
    puVar11 = &DAT_020afec4 + uVar12;
    uVar12 = uVar12 + 1;
    *puVar11 = 3;
  } while ((int)uVar12 < 4);
  FUN_0201b244(iVar5);
  return;
}


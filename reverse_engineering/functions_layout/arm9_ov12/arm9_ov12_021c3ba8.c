
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 4 instantiations in arm9_ov12 */

void ALNodeImp::Create(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  uint extraout_r1_00;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  int local_350;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_304;
  int local_300;
  undefined1 auStack_2fc [8];
  int local_2f4;
  int local_2f0 [7];
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  int local_29c;
  int local_298;
  undefined1 auStack_294 [256];
  int local_194 [32];
  undefined1 auStack_114 [256];
  
  uVar1 = FUN_020152d4();
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN_021c38d8(uVar1,*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1d) < 0) {
    iVar13 = FUN_0203b414(0);
    local_2f0[5] = 0;
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_2f0 + 5);
    iVar13 = FUN_0203b414(1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),1);
    iVar13 = FUN_0203b414(1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),4);
    iVar13 = FUN_0203b414(1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),0x40,0x40);
    iVar13 = FUN_0203b414(1);
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    iVar13 = FUN_0203b414(1);
    local_2f0[4] = 0x1000;
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_2f0 + 4);
    iVar13 = FUN_0203b414(2);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),1);
    iVar13 = FUN_0203b414(2);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),4);
    iVar13 = FUN_0203b414(2);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),0x40,0x40);
    iVar13 = FUN_0203b414(2);
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
    iVar13 = FUN_0203b414(2);
    local_2f0[3] = 0x2000;
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_2f0 + 3);
    iVar13 = FUN_0203b414(3);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),1);
    iVar13 = FUN_0203b414(3);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),4);
    iVar13 = FUN_0203b414(3);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),0x40,0x40);
    iVar13 = FUN_0203b414(3);
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
    iVar13 = FUN_0203b414(3);
    local_2f0[2] = 0x3000;
    piVar2 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_2f0 + 2);
    FUN_021c46b8(param_1);
    iVar13 = 0;
    do {
      iVar5 = *(int *)(param_1 + iVar13 * 4 + 0x40);
      if (iVar5 != 0) {
        piVar2 = *(int **)(iVar5 + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 4);
    iVar13 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    iVar5 = iVar13 + *(int *)(iVar13 + 4);
    iVar10 = *(int *)(iVar13 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    for (iVar6 = 0; iVar6 < *(short *)(iVar5 + 6); iVar6 = iVar6 + 1) {
      for (iVar7 = 0; iVar7 < *(short *)(iVar5 + 4); iVar7 = iVar7 + 1) {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x44) + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,iVar7,iVar6,1,0xe,0,0);
      }
    }
    for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)(iVar5 + 0x30); iVar6 = iVar6 + 1) {
      iVar7 = iVar13 + iVar10 + iVar6 * 0x18;
      (*(code *)(&PTR_FUN_021c47ec_1_021d0224)[*(byte *)(iVar7 + 0x14)])
                (uVar1,iVar7,iVar5 + 0x34,iVar5);
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 4);
    iVar13 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    iVar5 = 2;
    iVar13 = iVar13 + *(int *)(iVar13 + 4);
    do {
      iVar10 = iVar5 * 4;
      piVar2 = *(int **)(*(int *)(param_1 + iVar10 + 0x50) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      local_29c = (*(int *)(iVar13 + iVar10 + 0x10) >> 9) << 0xc;
      local_298 = (*(int *)(iVar13 + iVar10) >> 9) << 0xc;
      FUN_021bb970(*(undefined4 *)(param_1 + iVar10 + 0x50),&local_298,&local_29c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    piVar2 = *(int **)(*(int *)(param_1 + 0x30) + 4);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,0);
    iVar13 = *piVar2;
    puVar9 = (ushort *)((int)piVar2 + iVar13 + 4);
    for (local_338 = 0; local_338 < (int)(uint)*(byte *)((int)piVar2 + iVar13 + 1);
        local_338 = local_338 + 1) {
      iVar5 = jus_AllocDebug(0x78,s_ALNodeImp_h_021d43b4,s_Create_021d439c,0x4c3);
      if (iVar5 != 0) {
        jus_Class_0209c0b4::jus_Class_0209c0b4(iVar5,FUN_02024a30,1);
      }
      iVar5 = FUN_021acab4();
      local_2d4 = ((int)(short)puVar9[3] >> 1) << 0xc;
      local_2f0[6] = ((int)(short)puVar9[2] >> 1) << 0xc;
      FUN_021bb970(iVar5,local_2f0 + 6,&local_2d4);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      FUN_021c38d8(iVar5,*(undefined4 *)(param_1 + 0x68));
      FUN_021b87e0(*(undefined4 *)(param_1 + 0x68),iVar5);
      iVar10 = ((short)puVar9[4] * 2 + -0x20) / 2;
      iVar10 = (int)(iVar10 + ((uint)(iVar10 >> 2) >> 0x1d)) >> 3;
      iVar6 = FUN_0203b404();
      uVar1 = FUN_021c4644(0x820000,0x820005,0x83,iVar5,*(undefined4 *)(iVar6 + 0x88));
      local_2cc = ((int)*(char *)((int)puVar9 + 3) >> 1) << 0xc;
      local_2d0 = ((int)(char)puVar9[1] >> 1) << 0xc;
      FUN_021bb970(uVar1,&local_2d0,&local_2cc);
      iVar6 = FUN_0203b404();
      iVar6 = FUN_021c4644(0x820000,0x820006,0x83,iVar5,*(undefined4 *)(iVar6 + 0x88));
      local_2b8 = iVar10 << 0xc;
      FUN_020236cc(*(undefined4 *)(iVar6 + 4),&local_2b8);
      local_2c4 = ((int)*(char *)((int)puVar9 + 3) >> 1) << 0xc;
      local_2c8 = (((int)(char)puVar9[1] >> 1) + 8) * 0x1000;
      FUN_021bb970(iVar6,&local_2c8,&local_2c4);
      iVar6 = FUN_0203b404();
      uVar1 = FUN_021c4644(0x820000,0x820007,0x83,iVar5,*(undefined4 *)(iVar6 + 0x88));
      local_2bc = ((int)*(char *)((int)puVar9 + 3) >> 1) << 0xc;
      local_2c0 = ((int)(char)puVar9[1] >> 1) * 0x1000 + iVar10 * 0x8000 + 0x8000;
      FUN_021bb970(uVar1,&local_2c0,&local_2bc);
      puVar12 = puVar9 + 0x12;
      FUN_021c33c4(&local_2a4,iVar5,s_Position_021d4500);
      local_328 = 0;
      local_32c = (int)(short)puVar9[2];
      local_330 = (int)(short)puVar9[3];
      FUN_02023940(*(undefined4 *)(iVar5 + 4));
      piVar3 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
      (**(code **)(*piVar3 + 0xac))(piVar3,1);
      local_2ac = (local_330 >> 1) << 0xc;
      local_2a8 = (local_32c >> 1) << 0xc;
      FUN_021bb970(iVar5,&local_2a8,&local_2ac);
      FUN_02023c80(*(undefined4 *)(iVar5 + 4),local_2a4,0x494c,local_2a0);
      FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_2a4,0,local_2a0);
      for (local_334 = 0; local_334 < (int)(uint)*(byte *)((int)puVar9 + 0x1d);
          local_334 = local_334 + 1) {
        if ((char)*puVar12 == '\0') {
          FUN_0200c954(((short)puVar12[2] - local_32c) * ((short)puVar12[2] - local_32c) +
                       ((short)puVar12[3] - local_330) * ((short)puVar12[3] - local_330));
          uVar1 = FUN_0200cb80();
          uVar1 = FUN_0200c9e4(0x43800000,uVar1);
          uVar4 = FUN_0200c954((int)*(short *)(&DAT_02092ea8 + (uint)(byte)puVar9[0xe] * 2));
          FUN_0200c5ac(uVar1,uVar4);
          iVar10 = FUN_0200c914();
          local_328 = local_328 + iVar10;
          local_32c = (int)(short)puVar12[2];
          local_330 = (int)(short)puVar12[3];
        }
        else if ((char)*puVar12 == '\x01') {
          local_328 = local_328 + *(int *)(puVar12 + 2);
        }
        local_2b4 = (local_330 >> 1) << 0xc;
        local_2b0 = (local_32c >> 1) << 0xc;
        FUN_021bb970(iVar5,&local_2b0,&local_2b4);
        FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_2a4,local_328,local_2a0);
        puVar12 = puVar12 + 4;
      }
      (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
      puVar9 = (ushort *)((int)puVar9 + (uint)*puVar9);
    }
  }
  else {
    FUN_021c46b8(param_1);
    piVar2 = *(int **)(*(int *)(param_1 + 0x30) + 4);
    iVar5 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    iVar5 = iVar5 + *(int *)(iVar5 + 4);
    uVar1 = FUN_020101f4(*(undefined4 *)(&DAT_021d43ac + (uint)*(byte *)(iVar5 + 4) * 4),0);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    iVar13 = 0;
    for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)(iVar5 + 1); iVar10 = iVar10 + 1) {
      piVar2 = (int *)(iVar5 + 0x24 + iVar10 * 0xc);
      iVar6 = iVar13;
      if (0x16000 < piVar2[1]) {
        iVar6 = iVar13 + 1;
        local_194[iVar13 * 2] = *piVar2;
        local_194[iVar13 * 2 + 1] = piVar2[1];
      }
      iVar13 = iVar6;
    }
    for (iVar10 = 0; iVar10 < iVar13; iVar10 = iVar10 + 1) {
      uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar1,iVar13);
      FUN_021c4eb4(auStack_2fc,local_194 + extraout_r1 * 2);
      FUN_021c4eb4(local_194 + extraout_r1 * 2,local_194 + iVar10 * 2);
      FUN_021c4eb4(local_194 + iVar10 * 2,auStack_2fc);
    }
    if (3 < iVar13) {
      iVar13 = 4;
    }
    for (iVar10 = 0; iVar10 < iVar13; iVar10 = iVar10 + 1) {
      local_350 = 0;
      uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar1,100);
      uVar11 = extraout_r1_00;
      for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
        uVar8 = (uint)*(byte *)(iVar5 + 0x18 + iVar6 * 4);
        if (uVar11 < uVar8) {
          local_350 = iVar6;
          break;
        }
        uVar11 = uVar11 - uVar8;
      }
      iVar6 = FUN_02020dac();
      iVar7 = FUN_0203b404();
      iVar7 = FUN_021c4644(0x300000,0,0x82,iVar6,*(undefined4 *)(iVar7 + 0x88));
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0x54) = 0x31305053;
      FUN_021b87e0(*(undefined4 *)(param_1 + 0x68),iVar6);
      FUN_02023894(*(undefined4 *)(iVar6 + 4),local_350 * 2 + 0x300000,0);
      (**(code **)(**(int **)(*(int *)(iVar6 + 4) + 0x68) + 0x6c))();
      FUN_021c38d8(iVar6,*(undefined4 *)(param_1 + 0x68));
      local_304 = (local_194[iVar10 * 2 + 1] + 1 >> 8) << 0xc;
      local_300 = (local_194[iVar10 * 2] >> 8) << 0xc;
      FUN_021bb970(iVar6,&local_300,&local_304);
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 8) + 0x50))();
    piVar2 = *(int **)(*(int *)(param_1 + 0x30) + 4);
    iVar13 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    iVar13 = iVar13 + *(int *)(iVar13 + 0xc);
    if (*(char *)(iVar13 + 1) != '\0') {
      uVar1 = *(undefined4 *)(&DAT_02092d08 + (uint)*(byte *)(param_1 + 0xa7) * 8);
      thunk_FUN_0207400c(auStack_114,s_stage__021d4540);
      thunk_FUN_020741c4(auStack_114,uVar1);
      thunk_FUN_020741c4(auStack_114,s__gimmick_aar_021d4548);
      uVar1 = FUN_020101f4(auStack_114,0);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      piVar2 = (int *)(iVar13 + 4);
      for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar13 + 1); iVar5 = iVar5 + 1) {
        if ((&DAT_021d0254)[*(byte *)(piVar2 + 3)] != '\0') {
          iVar10 = FUN_0203b404();
          uVar1 = *(undefined4 *)(*(int *)(iVar10 + 0x88) + 4);
          FUN_021c3394();
          DAT_020a0dd0 = uVar1;
          FUN_02010bb4(0,0x401200,0);
          iVar10 = FUN_021acab4();
          FUN_02023894(*(undefined4 *)(iVar10 + 4),*(byte *)((int)piVar2 + 0xd) + 0x401200,0);
          (**(code **)(**(int **)(*(int *)(iVar10 + 4) + 0x68) + 0x6c))();
          local_2f0[1] = 0x82000;
          FUN_021bbde0(iVar10,local_2f0 + 1);
          (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
          FUN_021c38d8(iVar10,*(undefined4 *)(param_1 + 0x68));
          FUN_021b87e0(*(undefined4 *)(param_1 + 0x68),iVar10);
          local_2f4 = (piVar2[2] + 1 >> 8) << 0xc;
          local_2f0[0] = (piVar2[1] >> 8) << 0xc;
          FUN_021bb970(iVar10,local_2f0,&local_2f4);
          FUN_021bc03c();
        }
        piVar2 = (int *)((int)piVar2 + *piVar2);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 8) + 0x50))();
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x30) + 4);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,0);
    uVar1 = BattleMapObj::BattleMapMoveFloorCreate
                      (0,(int)piVar2 + *piVar2,*(undefined1 *)(param_1 + 0xa7),
                       *(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
    uVar1 = FUN_02083fcc(*(undefined1 *)(param_1 + 0xa7),*(undefined4 *)(param_1 + 4),
                         *(undefined4 *)(param_1 + 0x2c),1,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  iVar13 = FUN_020751a4(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0xa7));
  if (iVar13 == -1) {
    iVar13 = 0x2f;
  }
  else if (iVar13 == -2) {
    uVar11 = (uint)*(byte *)(param_1 + 0xa7);
    if (uVar11 < 0x13) {
      iVar13 = uVar11 + 0x1d;
    }
    else {
      iVar13 = uVar11 + 0xe;
    }
  }
  FUN_021bd794(*(undefined4 *)(param_1 + 0x4c));
  uVar1 = FUN_02075190(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0xa7));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x4c) + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,uVar1);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),iVar13 + 0xa01000,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x50) + 4) + 0x68) + 0x6c))();
  uVar1 = *(undefined4 *)(&DAT_02092d08 + (uint)*(byte *)(param_1 + 0xa7) * 8);
  thunk_FUN_0207400c(auStack_294,s_stage__021d4540);
  thunk_FUN_020741c4(auStack_294,uVar1);
  thunk_FUN_020741c4(auStack_294,&DAT_021d4558);
  iVar13 = FUN_021bd4d4(auStack_294,0,0);
  *(int *)(param_1 + 0x34) = iVar13;
  iVar13 = (**(code **)(**(int **)(iVar13 + 4) + 0x2c))(*(int **)(iVar13 + 4),0);
  *(int *)(param_1 + 0x74) = iVar13;
  *(int *)(param_1 + 0x78) = iVar13 + 0x10;
  iVar13 = *(int *)(param_1 + 0x74);
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1d) < 0) {
    FUN_021c4d40(param_1,((int)*(short *)(iVar13 + 4) / 2 + -0x40) * -0x10000 >> 0x10,
                 ((int)*(short *)(iVar13 + 6) / 2 + -0x30) * -0x10000 >> 0x10,
                 ((int)*(short *)(iVar13 + 8) / 2 + -0xc0) * -0x10000 >> 0x10,
                 ((int)*(short *)(iVar13 + 10) / 2 + -0x90) * -0x10000 >> 0x10);
  }
  else {
    FUN_021c4d40(param_1,(*(short *)(iVar13 + 4) + -0x80) * -0x10000 >> 0x10,
                 (*(short *)(iVar13 + 6) + -0x60) * -0x10000 >> 0x10,
                 (*(short *)(iVar13 + 8) + -0x80) * -0x10000 >> 0x10,
                 (*(short *)(iVar13 + 10) + -0x60) * -0x10000 >> 0x10);
  }
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1c) < 0) {
    FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  FUN_021c4d68(param_1);
  return;
}


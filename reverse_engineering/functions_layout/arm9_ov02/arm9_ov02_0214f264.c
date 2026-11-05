
void FUN_0214f264(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  char local_1ac;
  byte local_1ab [3];
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  int local_17c [5];
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [4];
  int local_158;
  undefined1 auStack_150 [12];
  int local_144 [8];
  undefined1 auStack_124 [256];
  
  iVar11 = 0;
  do {
    iVar2 = FUN_0203b3f4();
    iVar2 = FUN_0214d53c(0x12000,0x12000,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(param_1 + 8),
                         0x4d);
    local_144[iVar11] = iVar2;
    FUN_0214f960(iVar2,&DAT_0215cba4 + iVar11 * 0xc);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  FUN_0214db0c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),local_1ab,&local_1ac)
  ;
  local_17c[4] = 0x4e000;
  FUN_0214d650(local_144[0],local_17c + 4);
  FUN_02023894(*(undefined4 *)(local_144[7] + 4),0x12014,0);
  (**(code **)(**(int **)(*(int *)(local_144[7] + 4) + 0x68) + 0x6c))();
  FUN_0214dcd8((int)(char)local_1ab[0],local_144[1],local_144[2],local_144[3],0x12001);
  FUN_0214dcd8((int)local_1ac,local_144[4],local_144[5],local_144[6],0x12001);
  local_17c[3] = 0x9e000;
  FUN_0214ef60(local_144[7],local_17c + 3);
  piVar3 = *(int **)(local_144[7] + 4);
  if ((int)local_1ac == (uint)local_1ab[0]) {
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  }
  else {
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  }
  iVar11 = FUN_0203b3f4();
  local_144[0] = FUN_0214d53c(0x1200b,0x12000,*(undefined4 *)(iVar11 + 0x88),
                              *(undefined4 *)(param_1 + 4),0x4f);
  FUN_0214f960(local_144[0],&DAT_0215bf24);
  uVar4 = FUN_0214dfa8(*(undefined4 *)(param_1 + 0x88));
  iVar11 = FUN_0203b3e4();
  uVar4 = FUN_0214d53c(uVar4,0xa01000,*(undefined4 *)(iVar11 + 0x88),*(undefined4 *)(param_1 + 4),
                       0x21);
  FUN_0214f960(uVar4,&DAT_0215bedc);
  iVar11 = FUN_0203b3e4();
  uVar4 = FUN_0214d53c(0x10003,0x10000,*(undefined4 *)(iVar11 + 0x88),*(undefined4 *)(param_1 + 4),
                       0x60);
  FUN_0214f960(uVar4,&DAT_0215bed0);
  iVar9 = *(int *)(*(int *)(param_1 + 0x84) + 0x34);
  iVar11 = (short)(ushort)*(byte *)(*(int *)(param_1 + 0x88) + 0x2c) * 0x48;
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_0214d53c(0x10002,0x10000,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(param_1 + 4),
                       0x62);
  FUN_0214f960(iVar2,&DAT_0215bef4);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x70))();
  iVar5 = FUN_02074294(iVar9 + iVar11);
  if (iVar5 < 6) {
    iVar11 = 6;
  }
  else {
    iVar11 = FUN_02074294(iVar9 + iVar11);
  }
  FUN_0214f990(&local_1a4,iVar2);
  local_1a8 = local_1a4 + iVar11 * -0xc000;
  FUN_0214ef60(iVar2,&local_1a8);
  FUN_0214f990(&local_194,iVar2);
  local_198 = local_194 + 0x100000;
  local_18c = 0;
  FUN_0214f9a4(auStack_190,iVar2);
  FUN_0214e39c(auStack_168,&local_198,auStack_190,&local_18c);
  FUN_0214ef10(&local_1a0,iVar2,s_Position_0215c048);
  iVar11 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215bec0,0x2ef);
  if (iVar11 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar11,0,local_1a0,local_19c,0x494c,auStack_168,8,0,1);
  }
  iVar11 = FUN_0214f194();
  uVar4 = *(undefined4 *)(iVar11 + 4);
  iVar11 = jus_AllocDebug(0x48,s_ALControllerImp_h_0215bfe0,s_Create_0215beb0,0x3e3);
  if (iVar11 != 0) {
    jus_TagDLST::jus_TagDLST(iVar11,0,uVar4,0x78,0);
  }
  uVar4 = FUN_0214f194();
  FUN_02020f38(iVar2,uVar4);
  iVar11 = jus_AllocDebug(0x78,s_ALNodeImp_h_0215bfa4,s_Create_0215bea0,0x4c3);
  if (iVar11 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar11,FUN_02024a30,1);
  }
  uVar4 = FUN_0214d498();
  FUN_0214d6b0(*(undefined4 *)(param_1 + 8),uVar4);
  FUN_0214d678(uVar4,*(undefined4 *)(param_1 + 8));
  iVar5 = 0xa1;
  iVar11 = FUN_0214df2c(*(undefined4 *)(param_1 + 0x84),*(undefined1 *)(param_1 + 0x8c));
  iVar2 = FUN_0203b404();
  iVar9 = (uint)(iVar11 == 0) * 6;
  uVar6 = FUN_0214d53c(iVar9 + 0x20000,0x20000,*(undefined4 *)(iVar2 + 0x88),uVar4,0xa1);
  for (iVar11 = 1; iVar11 < 6; iVar11 = iVar11 + 1) {
    iVar5 = iVar5 + -1;
    iVar2 = FUN_0203b404();
    iVar2 = FUN_0214d53c(0x20000,0x20000,*(undefined4 *)(iVar2 + 0x88),uVar4,iVar5);
    iVar7 = FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar11 + 0x20000 + iVar9,0);
    if (iVar7 == 0) {
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
      break;
    }
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    local_17c[1] = 0;
    local_17c[2] = 0;
    FUN_0214d4c0(iVar2,local_17c + 2,local_17c + 1);
  }
  iVar11 = 0;
  do {
    if (0x12 < iVar11) {
      bVar1 = false;
LAB_0214f714:
      if (bVar1) {
        thunk_FUN_0207400c(auStack_124,s_jgalaxy__0215c054);
        uVar8 = FUN_0214e008(*(undefined1 *)(*(int *)(param_1 + 0x88) + 0x2d));
        thunk_FUN_020741c4(auStack_124,uVar8);
        thunk_FUN_020741c4(auStack_124,s__battle_bin_0215c094);
        uVar6 = FUN_0214f9b8(uVar6);
        uVar6 = CommonPaletteAnime::CommonPaletteAnime_Load(uVar6,auStack_124,0x80);
        *(undefined4 *)(param_1 + 0x80) = uVar6;
      }
      for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x88) + 0x30);
          iVar11 = iVar11 + 1) {
        psVar10 = (short *)((uint)*(byte *)(*(int *)(param_1 + 0x88) + iVar11 + 0x31) * 0x88 +
                           *(int *)(*(int *)(param_1 + 0x84) + 0x3c));
        if ((*(byte *)(psVar10 + 6) & 4) == 0) {
          uVar6 = 0x10005;
        }
        else {
          uVar6 = 0x10006;
        }
        iVar2 = FUN_0203b3e4();
        uVar6 = FUN_0214d53c(uVar6,0x10000,*(undefined4 *)(iVar2 + 0x88),uVar4,99);
        local_180 = (int)psVar10[1] << 0xc;
        local_17c[0] = (int)*psVar10 << 0xc;
        FUN_0214d4c0(uVar6,local_17c,&local_180);
        *(undefined4 *)(param_1 + iVar11 * 4 + 0x1c) = uVar6;
      }
      uVar6 = FUN_0214f9b8(*(undefined4 *)(param_1 + 0x1c));
      iVar11 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar6,0x1a,6,3,0x80);
      *(undefined2 *)(iVar11 + 0x16) = 0x7fff;
      *(undefined1 *)(iVar11 + 0x18) = 0xf;
      *(undefined1 *)(iVar11 + 0x19) = 1;
      *(int *)(param_1 + 0x7c) = iVar11;
      FUN_0214fa00(auStack_150,&DAT_0215bf00);
      FUN_0214fa00(auStack_15c,auStack_150);
      local_158 = local_158 + 0xa000;
      FUN_0214ef10(&local_188,uVar4,s_Position_0215c048);
      iVar11 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0215bff4,s_Create_0215be90,0x2b9);
      if (iVar11 != 0) {
        jus_TagIPCT::jus_TagIPCT(iVar11,0,local_188,local_184,0x494c,auStack_150,auStack_15c,0xb4,0)
        ;
      }
      uVar6 = FUN_0214f194();
      FUN_02020f38(uVar4,uVar6);
      return;
    }
    if ((uint)*(byte *)(*(int *)(param_1 + 0x88) + 0x2d) == (&DAT_0215afe8)[iVar11]) {
      bVar1 = true;
      goto LAB_0214f714;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}


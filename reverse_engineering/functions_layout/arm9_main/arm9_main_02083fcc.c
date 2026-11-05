
int * FUN_02083fcc(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  char param_6)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  short *psVar17;
  short *psVar18;
  int local_164;
  int local_158;
  int local_154 [3];
  int local_148 [3];
  int local_13c [4];
  int local_12c;
  undefined1 auStack_128 [256];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
                    /* JUS-TAG
                       strings=[".aar","BattleMapBG.cpp","BattleMapBG_Create","BattleMapBG_SetAnime","BattleMapBG_SetPriority","stage/","stage/stage.aar"]
                        */
  piVar4 = (int *)thunk_FUN_0201a228(100,s_BattleMapBG_cpp_020a0048,s_BattleMapBG_Create_020a0004,
                                     0x115);
  FUN_020517fc(piVar4,0,100);
  piVar4[0x10] = param_2;
  *piVar4 = param_3;
  *(char *)(piVar4 + 0x18) = (char)param_4;
  thunk_FUN_0207400c(auStack_128,s_stage__020a0058);
  thunk_FUN_020741c4(auStack_128,*(undefined4 *)(&DAT_02092d08 + param_1 * 8));
  thunk_FUN_020741c4(auStack_128,&DAT_020a0060);
  iVar5 = FUN_020101f4(s_stage_stage_aar_020a0068,0);
  piVar4[1] = iVar5;
  iVar5 = FUN_020101f4(auStack_128,0);
  piVar4[2] = iVar5;
  piVar6 = (int *)(**(code **)(**(int **)(*piVar4 + 4) + 0x2c))(*(int **)(*piVar4 + 4),0);
  piVar4[9] = (int)piVar6 + *piVar6;
  iVar5 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x40);
  iVar5 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar5 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,0);
  iVar5 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x40);
  iVar5 = FUN_0203b414(2);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar5 = FUN_0203b414(2);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,0);
  iVar5 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),3);
  iVar5 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),8);
  iVar5 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x40);
  iVar5 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar5 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,0);
  iVar11 = piVar4[9];
  iVar5 = 0;
  do {
    uVar1 = *(undefined1 *)(iVar11 + 7);
    iVar7 = FUN_0203b414(iVar5 + 1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),uVar1);
    uVar1 = *(undefined1 *)(iVar11 + 8);
    iVar7 = FUN_0203b414(iVar5 + 1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),uVar1);
    iVar7 = FUN_0203b414(iVar5 + 1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x40,0x40);
    bVar2 = *(byte *)(iVar11 + 9);
    iVar7 = FUN_0203b414(iVar5 + 1);
    piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x90))(piVar6,(uint)bVar2 << 10);
    iVar7 = FUN_0203b414(iVar5 + 1);
    FUN_02084eec(*(undefined4 *)(iVar7 + 0x88),*(undefined1 *)(iVar11 + 6));
    iVar7 = FUN_0203b414(iVar5 + 1);
    piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x94))(piVar6,1);
    iVar5 = iVar5 + 1;
    iVar11 = iVar11 + (uint)*(ushort *)(iVar11 + 4);
  } while (iVar5 < 3);
  iVar5 = piVar4[9];
  if (*(char *)(iVar5 + 9) != '\0') {
    if (param_6 == '\0') {
      iVar11 = FUN_0203b414(1);
      iVar11 = FUN_02084f10(0x400000,0x400100,*(undefined4 *)(iVar11 + 0x88),piVar4 + 6,param_2,
                            param_5);
      piVar4[3] = iVar11;
    }
    else {
      iVar11 = FUN_0203b414(1);
      iVar11 = FUN_02084f10(0x400003,0x400100,*(undefined4 *)(iVar11 + 0x88),piVar4 + 6,param_2,
                            param_5);
      piVar4[3] = iVar11;
    }
  }
  iVar5 = iVar5 + (uint)*(ushort *)(iVar5 + 4);
  if (*(char *)(iVar5 + 9) != '\0') {
    iVar11 = FUN_0203b414(2);
    iVar11 = FUN_02084f10(0x400001,0x400101,*(undefined4 *)(iVar11 + 0x88),piVar4 + 7,param_2,
                          param_5);
    piVar4[4] = iVar11;
  }
  if (*(char *)(iVar5 + (uint)*(ushort *)(iVar5 + 4) + 9) != '\0') {
    iVar5 = FUN_0203b414(3);
    iVar5 = FUN_02084f10(0x400002,0x400102,*(undefined4 *)(iVar5 + 0x88),piVar4 + 8,param_2,param_5)
    ;
    piVar4[5] = iVar5;
  }
  psVar18 = (short *)piVar4[9];
  iVar5 = 0;
  do {
    piVar6 = piVar4 + iVar5 * 2 + 0x11;
    *(char *)(piVar6 + 1) = (char)psVar18[5];
    if (piVar4[iVar5 + 3] != 0) {
      local_154[0] = (int)psVar18[1] << 0xc;
      local_158 = (int)*psVar18 << 0xc;
      FUN_0206c9f8(piVar4[iVar5 + 3],&local_158,local_154);
    }
    if (*(byte *)(piVar6 + 1) != 0) {
      iVar11 = thunk_FUN_0201a228((uint)*(byte *)(piVar6 + 1) * 0x1c,s_BattleMapBG_cpp_020a0048,
                                  s_BattleMapBG_SetAnime_020a0018,0x39a);
      *piVar6 = iVar11;
      FUN_020517fc(iVar11,0,(short)(ushort)*(byte *)(piVar6 + 1) * 0x1c);
      psVar17 = psVar18 + 6;
      for (local_164 = 0; local_164 < (int)(uint)*(byte *)(piVar6 + 1); local_164 = local_164 + 1) {
        iVar11 = local_164 * 0x1c;
        *(char *)(*piVar6 + iVar11 + 0x14) = (char)*(undefined4 *)psVar17;
        *(int **)(*piVar6 + iVar11 + 4) = piVar4;
        *(int *)(*piVar6 + iVar11 + 8) = piVar4[iVar5 + 3];
        switch(*(undefined4 *)psVar17) {
        case 0:
          iVar7 = *piVar6;
          psVar12 = psVar17 + 2;
          uVar8 = FUN_02084ea4(piVar4[iVar5 + 3]);
          iVar9 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar8,psVar17[5] & 0xff,1,3,0x8a);
          *(int *)(iVar7 + iVar11 + 0x10) = iVar9;
          uVar8 = *(undefined4 *)(psVar17 + 2);
          psVar13 = psVar17 + 4;
          psVar17 = psVar17 + 6;
          *(short *)(iVar9 + 0x16) = *psVar13;
          *(char *)(iVar9 + 0x18) = (char)uVar8;
          *(undefined1 *)(iVar9 + 0x19) = 1;
          *(short **)(iVar7 + iVar11 + 0xc) = psVar12;
          break;
        case 1:
          iVar9 = *piVar6;
          psVar13 = psVar17 + 2;
          bVar2 = *(byte *)((int)psVar17 + 0xb);
          uVar8 = FUN_02084ea4(piVar4[iVar5 + 3]);
          iVar7 = CommonPaletteAnime::CommonPaletteAnime_Create
                            (uVar8,psVar17[3] & 0xff,psVar17[4] & 0xff,(bVar2 & 1) != 0,0x8a);
          *(int *)(iVar9 + iVar11 + 0x10) = iVar7;
          sVar3 = psVar17[5];
          psVar17 = psVar17 + 6;
          *(char *)(iVar7 + 0x17) = (char)*psVar13;
          *(char *)(iVar7 + 0x16) = (char)sVar3;
          *(undefined1 *)(iVar7 + 0x19) = 1;
          *(short **)(iVar9 + iVar11 + 0xc) = psVar13;
          break;
        case 2:
          iVar7 = piVar4[iVar5 + 3];
          piVar15 = (int *)(*piVar6 + iVar11);
          iVar11 = FUN_02086bd4();
          if ((iVar11 == 0) || (iVar5 != 2)) {
            local_154[2] = ((int)psVar17[3] + (uint)(ushort)psVar17[4] * 8) * 0x1000;
            local_148[0] = (int)psVar17[2] << 0xc;
            iVar11 = FUN_02085000(iVar7,(uint)(ushort)psVar17[4] << 3,local_148,local_154 + 2);
            piVar15[4] = iVar11;
            piVar15[3] = (int)(psVar17 + 2);
            *(undefined1 *)((int)piVar15 + 0x15) = 0;
            *(undefined2 *)((int)piVar15 + 0x16) = 0;
            iVar11 = FUN_02026f94();
            *piVar15 = iVar11;
            FUN_02028384(*(undefined4 *)(iVar11 + 4),FUN_02085034);
            local_154[1] = 0x8a000;
            FUN_02012940(*piVar15,local_154 + 1);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x24))(*(int **)(*piVar15 + 4),piVar15);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x94))(*(int **)(*piVar15 + 4),0x20000);
          }
          psVar17 = psVar17 + (uint)*(byte *)(psVar17 + 5) * 4 + 6;
          break;
        case 3:
          iVar7 = piVar4[iVar5 + 3];
          piVar15 = (int *)(*piVar6 + iVar11);
          iVar11 = FUN_02086bd4();
          if ((iVar11 == 0) || (iVar5 != 2)) {
            local_148[2] = (int)psVar17[3] << 0xc;
            local_13c[0] = (int)psVar17[2] << 0xc;
            iVar11 = FUN_02085000(iVar7,psVar17[3] + 1,local_13c,local_148 + 2);
            piVar15[4] = iVar11;
            piVar15[3] = (int)(psVar17 + 2);
            *(undefined1 *)((int)piVar15 + 0x15) = 0;
            *(undefined2 *)((int)piVar15 + 0x16) = 0;
            iVar11 = FUN_02026f94();
            *piVar15 = iVar11;
            FUN_02028384(*(undefined4 *)(iVar11 + 4),FUN_020850ec);
            local_148[1] = 0x9a000;
            FUN_02012940(*piVar15,local_148 + 1);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x24))(*(int **)(*piVar15 + 4),piVar15);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x94))(*(int **)(*piVar15 + 4),0xffff000);
          }
          psVar17 = psVar17 + 10;
          break;
        case 4:
          pbVar14 = (byte *)(psVar17 + 2);
          piVar15 = (int *)(*piVar6 + iVar11);
          iVar11 = FUN_02086bd4();
          if ((iVar11 == 0) || (iVar5 != 2)) {
            iVar11 = thunk_FUN_0201a228((uint)*pbVar14 << 2,s_BattleMapBG_cpp_020a0048,
                                        s_BattleMapBG_SetPriority_020a0030,0x4d1);
            piVar15[4] = iVar11;
            FUN_020517fc(iVar11,0,(uint)*pbVar14 << 2);
            piVar15[3] = (int)pbVar14;
            *(char *)((int)piVar15 + 0x15) = (char)(iVar5 + 1);
            *(undefined2 *)((int)piVar15 + 0x16) = 0;
            iVar11 = FUN_02026f94();
            *piVar15 = iVar11;
            FUN_02028384(*(undefined4 *)(iVar11 + 4),FUN_02085314);
            local_13c[1] = 0x9a000;
            FUN_02012940(*piVar15,local_13c + 1);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x24))(*(int **)(*piVar15 + 4),piVar15);
            (**(code **)(**(int **)(*piVar15 + 4) + 0x94))(*(int **)(*piVar15 + 4),0xffff000);
            FUN_0204267c(DAT_020a0f64,FUN_020854a4,piVar15);
          }
          psVar17 = psVar17 + (uint)*pbVar14 * 2 + 4;
          break;
        case 5:
          piVar15 = (int *)(*piVar6 + iVar11);
          iVar11 = FUN_0203b414(iVar5 + 1);
          FUN_0206c498(*(undefined4 *)(iVar11 + 0x88));
          FUN_02032a4c(*(undefined4 *)(piVar4[iVar5 + 6] + 4));
          iVar11 = FUN_02011b38();
          FUN_020796b8(iVar11,(char)psVar17[7]);
          local_13c[3] = (int)psVar17[3] << 0xc;
          local_12c = (int)psVar17[2] << 0xc;
          FUN_0206c9f8(iVar11,&local_12c,local_13c + 3);
          FUN_0206c514(iVar11,piVar4[iVar5 + 3]);
          uVar16 = 0;
          while (uVar10 = (**(code **)(**(int **)(iVar11 + 4) + 0xac))(), uVar16 < uVar10) {
            iVar9 = (**(code **)(**(int **)(iVar11 + 4) + 0xa8))();
            iVar7 = iVar11;
            if (iVar9 != 0) {
              (**(code **)(**(int **)(iVar11 + 4) + 0xc0))(*(int **)(iVar11 + 4),uVar16);
              iVar7 = FUN_02011b38();
            }
            uVar16 = uVar16 + 1;
            iVar7 = *(int *)(*(int *)(iVar7 + 4) + 100);
            bVar2 = *(byte *)(iVar7 + 0x10);
            if ((bVar2 & 0x7f) >> 6 != 0) {
              *(byte *)(iVar7 + 0x10) = bVar2 & 0xbf;
            }
          }
          (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
          piVar15[4] = iVar11;
          piVar15[3] = (int)(psVar17 + 2);
          *(undefined1 *)((int)piVar15 + 0x15) = 0;
          *(undefined2 *)((int)piVar15 + 0x16) = 0;
          iVar11 = FUN_02026f94();
          *piVar15 = iVar11;
          FUN_02028384(*(undefined4 *)(iVar11 + 4),FUN_020854c4);
          local_13c[2] = 0x8a000;
          FUN_02012940(*piVar15,local_13c + 2);
          (**(code **)(**(int **)(*piVar15 + 4) + 0x24))(*(int **)(*piVar15 + 4),piVar15);
          (**(code **)(**(int **)(*piVar15 + 4) + 0x94))(*(int **)(*piVar15 + 4),0x20000);
          FUN_0206c54c();
          psVar17 = psVar17 + (uint)*(byte *)(psVar17 + 4) * 2 + 6;
        }
      }
    }
    iVar5 = iVar5 + 1;
    psVar18 = (short *)((int)psVar18 + (uint)(ushort)psVar18[2]);
  } while (iVar5 < 3);
  (**(code **)(**(int **)(piVar4[2] + 8) + 0x50))();
  return piVar4;
}


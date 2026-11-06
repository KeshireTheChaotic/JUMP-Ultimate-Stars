
/* JUS-GAME JQuizJGalaxyMode::JQuizJGalaxyMode_Add [source-string] __FILE__="JQuizJGalaxyMode.cpp"
   __FUNCTION__="JQuizJGalaxyMode_Add" lines=[61, 92, 93] passed to 3 source-location call(s) */

void JQuizJGalaxyMode::JQuizJGalaxyMode_Add(void)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined2 *local_30;
  
  iVar3 = thunk_FUN_0201a228(0x28,s_JQuizJGalaxyMode_cpp_021613d4,&DAT_021613bc,0x3d);
  FUN_020517fc(iVar3,0,0x28);
  FUN_0214f568(10);
  JQuizMainCommon::JQuizMainCommon_ListRandomMix(iVar3,9,&DAT_02160520,10);
  iVar11 = 0;
  *(undefined2 *)(iVar3 + 0x12) = 0xff;
  do {
    uVar1 = *(ushort *)(iVar3 + iVar11 * 2);
    iVar4 = FUN_0214efa0();
    pbVar10 = *(byte **)(iVar4 + 0x40);
    for (uVar9 = 0; iVar4 = FUN_0214efa0(), uVar9 < *(uint *)(iVar4 + 0x44); uVar9 = uVar9 + 1) {
      if (uVar1 == *pbVar10) {
        bVar2 = true;
        goto LAB_0215a1cc;
      }
      pbVar10 = pbVar10 + 0x28;
    }
    bVar2 = false;
LAB_0215a1cc:
    if (!bVar2) {
      *(undefined2 *)(iVar3 + iVar11 * 2) = 0x17;
    }
    iVar11 = iVar11 + 1;
    if (9 < iVar11) {
      iVar11 = 0;
      do {
        if (*(short *)(iVar3 + iVar11 * 2 + 0x14) == 0) {
          iVar8 = iVar11 + 1;
          iVar4 = 1;
          while (iVar8 < 10) {
            iVar5 = iVar8 * 2;
            iVar8 = iVar8 + 1;
            if (*(short *)(iVar3 + iVar5) == *(short *)(iVar3 + iVar11 * 2)) {
              iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
            }
          }
          iVar8 = 0;
          uVar1 = *(ushort *)(iVar3 + iVar11 * 2);
          iVar5 = FUN_0214efa0();
          pbVar10 = *(byte **)(iVar5 + 0x40);
          for (uVar9 = 0; iVar5 = FUN_0214efa0(), uVar9 < *(uint *)(iVar5 + 0x44); uVar9 = uVar9 + 1
              ) {
            if ((uVar1 == *pbVar10) && (pbVar10[1] == 0)) {
              iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
            }
            pbVar10 = pbVar10 + 0x28;
          }
          puVar6 = (undefined2 *)
                   thunk_FUN_0201a228(iVar8 << 1,s_JQuizJGalaxyMode_cpp_021613d4,&DAT_021613bc,0x5c)
          ;
          psVar7 = (short *)thunk_FUN_0201a228(iVar4 << 1,s_JQuizJGalaxyMode_cpp_021613d4,
                                               &DAT_021613bc,0x5d);
          uVar1 = *(ushort *)(iVar3 + iVar11 * 2);
          iVar5 = FUN_0214efa0();
          pbVar10 = *(byte **)(iVar5 + 0x40);
          local_30 = puVar6;
          for (uVar9 = 0; iVar5 = FUN_0214efa0(), uVar9 < *(uint *)(iVar5 + 0x44); uVar9 = uVar9 + 1
              ) {
            if ((uVar1 == *pbVar10) && (pbVar10[1] == 0)) {
              *local_30 = (short)uVar9;
              local_30 = local_30 + 1;
            }
            pbVar10 = pbVar10 + 0x28;
          }
          JQuizMainCommon::JQuizMainCommon_ListRandomMix(psVar7,iVar4,puVar6,iVar8);
          *(short *)(iVar3 + iVar11 * 2 + 0x14) = *psVar7 + 1;
          iVar4 = 1;
          iVar8 = iVar11;
          while (iVar8 = iVar8 + 1, iVar8 < 10) {
            if (*(short *)(iVar3 + iVar8 * 2) == *(short *)(iVar3 + iVar11 * 2)) {
              *(short *)(iVar3 + iVar8 * 2 + 0x14) = psVar7[iVar4] + 1;
              iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
            }
          }
          FUN_0201b268(psVar7);
          FUN_0201b268(puVar6);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 10);
      iVar11 = 0;
      do {
        iVar5 = FUN_0214efa0();
        iVar4 = iVar11 * 2;
        iVar8 = iVar11 * 2;
        iVar11 = iVar11 + 1;
        *(short *)(iVar5 + iVar8 + 0x50) = *(short *)(iVar3 + iVar4 + 0x14) + -1;
      } while (iVar11 < 10);
      FUN_0214f514();
      FUN_0214f754();
      FUN_0214f93c();
      FUN_0214f718(0);
      FUN_0214f740(1);
      FUN_0201b244(iVar3);
      JQuizMainSinglePlay::JQuizMainSinglePlay_Add();
      return;
    }
  } while( true );
}


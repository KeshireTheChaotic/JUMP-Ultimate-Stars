
void FUN_02047d5c(int *param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint extraout_r1;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_40;
  uint local_38;
  
  iVar14 = param_1[0xd];
  iVar15 = param_1[0x2b];
  uVar1 = *(undefined2 *)(iVar14 + 0x8ca);
  iVar16 = *(int *)(iVar14 + 0x8e0);
  uVar2 = *(undefined2 *)(iVar14 + 0x8c8);
  for (local_38 = 0; local_38 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); local_38 = local_38 + 1)
  {
    psVar6 = (short *)FUN_0203be48(param_2,local_38);
    for (local_40 = (uint)psVar6[1]; local_40 < (uint)(int)psVar6[3]; local_40 = local_40 + 1) {
      uVar17 = (uint)*(ushort *)(iVar15 + 2 + local_40 * 2);
      uVar18 = 0;
      psVar7 = (short *)(**(code **)(*param_1 + 0xd8))(param_1,(int)*psVar6,local_40,uVar2,uVar1);
      uVar9 = (uint)*psVar6;
      while( true ) {
        uVar12 = (uint)((byte *)(iVar15 + uVar17))[1];
        if (uVar9 < uVar18 + uVar12) break;
        uVar18 = uVar18 + uVar12;
        uVar17 = uVar17 + ((*(byte *)(iVar15 + uVar17) & 0x3f) + 2) * 2;
      }
      while (uVar9 < (uint)(int)psVar6[2]) {
        uVar12 = (int)psVar6[2] - uVar18;
        pbVar8 = (byte *)(iVar15 + uVar17);
        uVar13 = (uint)pbVar8[1];
        uVar9 = uVar9 - uVar18;
        uVar10 = (uint)*pbVar8;
        if ((int)uVar13 < (int)uVar12) {
          uVar12 = uVar13;
        }
        sVar5 = (short)iVar16;
        if (uVar10 + 1 == uVar13) {
          if (iVar16 == 0) {
            MIi_CpuCopy16(iVar15 + uVar17 + 2 + uVar9 * 2,psVar7,(uVar12 - uVar9) * 2);
            psVar7 = psVar7 + (uVar12 - uVar9);
          }
          else {
            psVar11 = (short *)(iVar15 + uVar17 + 2 + uVar9 * 2);
            for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
              *psVar7 = sVar5 + *psVar11;
              psVar11 = psVar11 + 1;
              psVar7 = psVar7 + 1;
            }
          }
        }
        else if (uVar10 == 0x40) {
          uVar10 = iVar16 + uVar9 + *(ushort *)(iVar15 + uVar17 + 2);
          for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
            *psVar7 = (short)uVar10;
            uVar10 = (uVar10 & 0xffff) + 1;
            psVar7 = psVar7 + 1;
          }
        }
        else if (uVar10 == 0xc0) {
          uVar10 = iVar16 + (*(ushort *)(iVar15 + uVar17 + 2) - uVar9);
          for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
            *psVar7 = (short)uVar10;
            uVar10 = (uVar10 & 0xffff) - 1;
            psVar7 = psVar7 + 1;
          }
        }
        else {
          uVar10 = uVar10 & 0x3f;
          if ((*pbVar8 & 0x3f) == 0) {
            MIi_CpuClear16(iVar16 + (uint)*(ushort *)(iVar15 + uVar17 + 2) & 0xffff,psVar7,
                           (uVar12 - uVar9) * 2);
            psVar7 = psVar7 + (uVar12 - uVar9);
          }
          else if (uVar10 == 1) {
            sVar3 = *(short *)(iVar15 + uVar17 + 2);
            sVar4 = *(short *)(iVar15 + uVar17 + 4);
            for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
              if ((uVar9 & 1) == 0) {
                *psVar7 = sVar5 + sVar3;
              }
              else {
                *psVar7 = sVar5 + sVar4;
              }
              psVar7 = psVar7 + 1;
            }
          }
          else {
            uVar19 = uVar10 + 1;
            uVar13 = 0;
            if (uVar9 != 0) {
              if (uVar19 == 4) {
                uVar13 = uVar9 & 3;
              }
              else if (uVar19 == 8) {
                uVar13 = uVar9 & 7;
              }
              else if ((uVar19 == 0) || ((uVar19 & uVar10) != 0)) {
                FUN_0200d338(uVar9,uVar19);
                uVar13 = extraout_r1;
              }
              else {
                uVar13 = uVar9 & uVar10;
              }
            }
            for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
              iVar14 = uVar13 * 2;
              uVar13 = uVar13 + 1;
              if (uVar13 == uVar19) {
                uVar13 = 0;
              }
              *psVar7 = sVar5 + *(short *)(iVar15 + uVar17 + 2 + iVar14);
              psVar7 = psVar7 + 1;
            }
          }
        }
        uVar17 = uVar17 + ((*pbVar8 & 0x3f) + 2) * 2;
        uVar9 = uVar18 + pbVar8[1];
        uVar18 = uVar9;
      }
    }
  }
  return;
}


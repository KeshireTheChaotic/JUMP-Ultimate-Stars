
undefined4
FUN_021c2488(ushort *param_1,int *param_2,int param_3,int param_4,int *param_5,int param_6,
            ushort *param_7)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ushort *puVar20;
  int iVar21;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_3c;
  ushort *local_38;
  int local_14;
  
  puVar8 = param_7 + param_3;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  iVar9 = *param_5;
  iVar4 = param_5[1];
  do {
    iVar3 = local_64;
    if ((param_3 < local_64 + 3) || (param_4 < local_68)) {
LAB_021c26e4:
      *param_2 = local_64;
      iVar4 = 0;
      if (0 < local_64 + -1) {
        puVar8 = param_1;
        do {
          iVar9 = iVar4 + 1;
          if (iVar9 < local_64) {
            puVar20 = param_1 + iVar9;
            do {
              uVar1 = *puVar8;
              if (*puVar20 < uVar1) {
                *puVar8 = *puVar20;
                *puVar20 = uVar1;
              }
              puVar20 = puVar20 + 1;
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_64);
          }
          puVar8 = puVar8 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_64 + -1);
      }
      if (*param_2 < 1) {
        return 0;
      }
      return 1;
    }
    for (; (uVar5 = local_78, (int)local_78 < iVar4 && (*(short *)(iVar9 + local_78 * 4) == -1));
        local_78 = local_78 + 1 & 0xffff) {
    }
    if (iVar4 <= (int)local_78) goto LAB_021c26e4;
    for (; ((int)local_78 < iVar4 && (*(short *)(iVar9 + local_78 * 4) != -1));
        local_78 = local_78 + 1 & 0xffff) {
    }
    if ((int)local_78 < iVar4) {
      param_1[local_64] = (ushort)local_78;
    }
    else {
      param_1[local_64] = 0xffff;
    }
    local_64 = local_64 + 1;
    uVar1 = (ushort)uVar5;
    param_1[local_64] = uVar1;
    uVar2 = (ushort)local_78 - 1;
    param_1[iVar3 + 2] = uVar2;
    local_64 = iVar3 + 3;
    local_68 = local_68 + 1;
    if (param_3 <= local_64) goto LAB_021c26e4;
    if (2 < (int)(local_78 - uVar5)) {
      *param_7 = uVar1;
      *puVar8 = uVar2;
      local_74 = 1;
      local_70 = 0;
      local_6c = 1;
      local_38 = param_1 + local_64;
      do {
        uVar1 = param_7[local_70];
        uVar5 = (uint)uVar1;
        uVar2 = puVar8[local_70];
        uVar19 = (uint)uVar2;
        local_70 = local_70 + 1;
        if (param_3 <= local_70) {
          local_70 = 0;
        }
        iVar3 = local_74 + -1;
        if (1 < (int)(uVar19 - uVar5)) {
          iVar16 = (int)*(short *)(iVar9 + uVar5 * 4);
          iVar14 = (int)*(short *)(iVar9 + uVar5 * 4 + 2);
          iVar6 = (int)*(short *)(iVar9 + uVar19 * 4);
          iVar18 = (int)*(short *)(iVar9 + uVar19 * 4 + 2);
          iVar10 = iVar6 - iVar16;
          iVar11 = iVar18 - iVar14;
          iVar17 = -1;
          local_3c = 0xffff;
          local_3c._0_2_ = 0xffff;
          local_14 = -1;
          uVar5 = uVar5 + 1;
          if (uVar5 < uVar19) {
            psVar7 = (short *)(iVar9 + uVar5 * 4);
            iVar21 = iVar17;
            do {
              iVar15 = (int)*psVar7;
              iVar12 = (int)psVar7[1];
              if ((iVar21 != iVar15) || (local_14 != iVar12)) {
                iVar13 = (iVar11 * iVar15 - iVar10 * iVar12) - (iVar18 * iVar16 - iVar14 * iVar6);
                if (iVar13 < 0) {
                  iVar13 = -iVar13;
                }
                iVar21 = iVar15;
                local_14 = iVar12;
                if (iVar17 < iVar13) {
                  local_3c = uVar5 & 0xffff;
                  iVar17 = iVar13;
                }
              }
              psVar7 = psVar7 + 2;
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)uVar19);
          }
          if ((iVar10 * iVar10 + iVar11 * iVar11) * param_6 * param_6 <= iVar17 * iVar17) {
            *local_38 = (ushort)local_3c;
            local_38 = local_38 + 1;
            local_64 = local_64 + 1;
            param_7[local_6c] = (ushort)local_3c;
            puVar8[local_6c] = uVar2;
            local_6c = local_6c + 1;
            if (param_3 <= local_6c) {
              local_6c = 0;
            }
            param_7[local_6c] = uVar1;
            puVar8[local_6c] = (ushort)local_3c;
            local_6c = local_6c + 1;
            if (param_3 <= local_6c) {
              local_6c = 0;
            }
            iVar3 = local_74 + 1;
            if (param_3 <= local_64) break;
          }
        }
        local_74 = iVar3;
      } while (0 < local_74);
    }
  } while( true );
}


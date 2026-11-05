
int FUN_0216220c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6,
                int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int local_9c;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_6c = 0;
  *param_6 = 0;
  FUN_020517fc(param_5,0,0x10);
  iVar9 = *param_4;
  local_34 = *param_2;
  local_2c = param_2[2];
  local_54 = local_34 - iVar9;
  if (local_34 - iVar9 <= *param_3) {
    local_54 = *param_3;
  }
  local_44[3] = param_2[1];
  iVar10 = param_4[1];
  local_4c = local_2c - iVar9;
  if (param_3[2] <= local_2c - iVar9) {
    local_4c = param_3[2];
  }
  local_64[3] = local_44[3] - iVar10;
  if (local_44[3] - iVar10 <= param_3[1]) {
    local_64[3] = param_3[1];
  }
  local_28 = param_2[3];
  local_48 = local_28 - iVar10;
  if (param_3[3] <= local_28 - iVar10) {
    local_48 = param_3[3];
  }
  local_64[0] = local_54;
  if (iVar9 < 0) {
    iVar9 = 2;
  }
  else {
    iVar9 = 0;
  }
  if (iVar10 < 0) {
    iVar9 = iVar9 + 1;
  }
  local_64[2] = local_4c;
  iVar9 = iVar9 * 3 + 0x21714e8;
  local_64[1] = local_64[3];
  local_50 = local_48;
  local_44[0] = local_34;
  local_44[1] = local_44[3];
  local_44[2] = local_2c;
  local_30 = local_28;
  local_68 = 0;
  do {
    iVar16 = 0;
    uVar13 = (uint)*(byte *)(iVar9 + local_68);
    iVar10 = local_44[uVar13 * 2];
    iVar14 = local_44[uVar13 * 2 + 1];
    local_70 = param_7;
    if (uVar13 < 2) {
      local_70 = 1;
    }
    iVar18 = 0;
    iVar2 = FUN_02162928(param_1,iVar14);
    iVar4 = local_64[uVar13 * 2];
    iVar5 = local_64[uVar13 * 2 + 1];
    iVar6 = iVar4 >> 0xc;
    iVar3 = FUN_02162928(param_1,iVar5);
    uVar11 = iVar3 + iVar6;
    iVar8 = iVar10 >> 0xc;
    if (iVar2 + iVar8 == uVar11) {
      local_74 = 0;
    }
    else {
      local_78 = 0;
      if (iVar4 < iVar10) {
        iVar8 = iVar8 - iVar6;
        local_88 = 1;
        iVar17 = *(int *)(param_1 + 0x14);
        local_90 = iVar10 - local_64[uVar13 * 2];
        iVar6 = local_64[uVar13 * 2] + (uint)*(ushort *)(iVar17 + uVar11 * 8 + 4) * -0x100;
      }
      else {
        iVar8 = iVar6 - iVar8;
        local_88 = -1;
        iVar17 = *(int *)(param_1 + 0x14);
        local_90 = local_64[uVar13 * 2] - iVar10;
        iVar6 = ((uint)*(ushort *)(iVar17 + uVar11 * 8 + 0xc) * 0x100 - local_64[uVar13 * 2]) + -1;
      }
      if (iVar5 < iVar14) {
        iVar2 = iVar2 - iVar3;
        local_84 = 0x40;
        local_8c = iVar14 - local_64[uVar13 * 2 + 1];
        iVar3 = local_64[uVar13 * 2 + 1] + (uint)*(ushort *)(iVar17 + uVar11 * 8 + 6) * -0x100;
      }
      else {
        iVar2 = iVar3 - iVar2;
        local_84 = -0x40;
        local_8c = local_64[uVar13 * 2 + 1] - iVar14;
        iVar3 = ((uint)*(ushort *)(iVar17 + uVar11 * 8 + 0x206) * 0x100 - local_64[uVar13 * 2 + 1])
                + -1;
      }
      uVar15 = iVar8 + (iVar2 >> 6);
      if (local_8c < local_90) {
        iVar6 = FUN_0200d12c(iVar6 * local_8c * 0x10,local_90);
        if (iVar5 < iVar14) {
          local_80 = (iVar5 * 0x10 - iVar6) + (uint)*(ushort *)(iVar17 + uVar11 * 8 + 6) * -0x1000;
        }
        else if (iVar14 < iVar5) {
          local_80 = (uint)*(ushort *)(iVar17 + uVar11 * 8 + 0x206) * 0x1000 -
                     (iVar6 + iVar5 * 0x10);
        }
        else {
          local_80 = 0;
        }
        iVar8 = FUN_0200d12c(local_8c << 0x10,local_90);
        local_9c = local_84;
        iVar6 = local_88;
      }
      else {
        iVar6 = FUN_0200d12c(iVar3 * local_90 * 0x10,local_8c);
        if (iVar4 < iVar10) {
          local_80 = (iVar4 * 0x10 - iVar6) + (uint)*(ushort *)(iVar17 + uVar11 * 8 + 4) * -0x1000;
        }
        else if (iVar10 < iVar4) {
          local_80 = (uint)*(ushort *)(iVar17 + uVar11 * 8 + 0xc) * 0x1000 - (iVar6 + iVar4 * 0x10);
        }
        else {
          local_80 = 0;
        }
        iVar8 = FUN_0200d12c(local_90 << 0x10,local_8c);
        local_9c = local_88;
        iVar6 = local_84;
      }
      uVar7 = 0;
      while (uVar12 = uVar11, uVar7 < uVar15) {
        local_80 = local_80 + iVar8;
        iVar3 = iVar6;
        if (0xffff < local_80) {
          local_80 = (local_80 + -0x10000) - iVar8;
          iVar3 = local_9c;
        }
        uVar11 = uVar12 + iVar3;
        iVar3 = *(int *)(param_1 + 0x14);
        local_74 = iVar3 + uVar11 * 8;
        uVar19 = (uint)*(byte *)(local_74 + 2);
        if (uVar19 == 7) goto LAB_021627ec;
        uVar7 = uVar7 + 1;
        if (*(char *)(local_74 + 3) == '\0') {
          if ((local_70 == 1) && ((&DAT_02171558)[uVar19] != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            if ((&DAT_02171558)[uVar19] == '\0') {
              if (uVar11 == uVar12 + 1) {
                iVar18 = ((uint)*(ushort *)(iVar3 + uVar11 * 8 + 4) * 0x100 - iVar10) + -1;
                iVar6 = FUN_02161bac(param_1,iVar10 + iVar18,iVar14 + iVar16);
                iVar8 = 0;
                uVar15 = (iVar6 >> 6) - ((int)uVar12 >> 6);
                local_80 = 0;
                uVar7 = 0;
                iVar6 = local_84;
                uVar11 = uVar12;
                if ((int)uVar15 < 0) {
                  uVar15 = -uVar15;
                }
              }
              else if (uVar11 == uVar12 - 1) {
                iVar18 = (uint)*(ushort *)(iVar3 + uVar11 * 8 + 0xc) * 0x100 - iVar10;
                iVar6 = FUN_02161bac(param_1,iVar10 + iVar18,iVar14 + iVar16);
                iVar8 = 0;
                uVar15 = (iVar6 >> 6) - ((int)uVar12 >> 6);
                local_80 = 0;
                uVar7 = 0;
                iVar6 = local_84;
                uVar11 = uVar12;
                if ((int)uVar15 < 0) {
                  uVar15 = -uVar15;
                }
              }
            }
            if (uVar11 == uVar12 + 0x40) {
              iVar16 = ((uint)*(ushort *)(*(int *)(param_1 + 0x14) + uVar11 * 8 + 6) * 0x100 -
                       iVar14) + -1;
              uVar11 = FUN_02161bac(param_1,iVar10 + iVar18,iVar14 + iVar16);
              uVar15 = (uVar11 & 0x3f) - (uVar12 & 0x3f);
              iVar8 = 0;
              local_80 = 0;
              uVar7 = 0;
              iVar6 = local_88;
              uVar11 = uVar12;
              local_78 = local_74;
              if ((int)uVar15 < 0) {
                uVar15 = -uVar15;
              }
            }
            else if ((uVar11 == uVar12 - 0x40) && ((&DAT_02171528)[*(byte *)(local_74 + 2)] != '\0')
                    ) {
              iVar16 = (uint)*(ushort *)(*(int *)(param_1 + 0x14) + uVar11 * 8 + 0x206) * 0x100 -
                       iVar14;
              uVar11 = FUN_02161bac(param_1,iVar10 + iVar18,iVar14 + iVar16);
              uVar15 = (uVar11 & 0x3f) - (uVar12 & 0x3f);
              iVar8 = 0;
              local_80 = 0;
              uVar7 = 0;
              iVar6 = local_88;
              uVar11 = uVar12;
              if ((int)uVar15 < 0) {
                uVar15 = -uVar15;
              }
            }
          }
        }
      }
      local_74 = local_78;
    }
LAB_021627ec:
    if ((1 < uVar13) && (local_74 != 0)) {
      local_6c = local_74;
    }
    if (iVar18 != 0 || iVar16 != 0) {
      uVar11 = 0;
      iVar10 = local_68;
      while (iVar10 = iVar10 + 1, iVar10 < 3) {
        uVar15 = (uint)*(byte *)(iVar9 + iVar10);
        local_44[uVar15 * 2] = local_44[uVar15 * 2] + iVar18;
        local_44[uVar15 * 2 + 1] = local_44[uVar15 * 2 + 1] + iVar16;
      }
      if (iVar18 < 1) {
        if (iVar18 < 0) {
          uVar11 = 2;
          param_5[2] = iVar18 + local_44[uVar13 * 2];
        }
      }
      else {
        uVar11 = 8;
        *param_5 = iVar18 + local_44[uVar13 * 2];
      }
      if (iVar16 < 1) {
        if (iVar16 < 0) {
          uVar11 = uVar11 | 4;
          param_5[3] = iVar16 + local_44[uVar13 * 2 + 1];
        }
      }
      else {
        uVar11 = uVar11 | 1;
        param_5[1] = iVar16 + local_44[uVar13 * 2 + 1];
      }
      *param_6 = *param_6 | uVar11 & (byte)(&DAT_02171524)[uVar13];
    }
    local_68 = local_68 + 1;
    if (2 < local_68) {
      return local_6c;
    }
  } while( true );
}


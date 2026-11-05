
int FUN_021c20cc(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                ushort *param_5,undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_a8;
  ushort *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_7c;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  short *local_5c;
  short *local_58;
  int local_50;
  int local_44;
  
  iVar10 = 0;
  if (0 < param_3) {
    puVar6 = param_2;
    puVar8 = param_1;
    do {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_3);
  }
  iVar10 = param_6[0xe];
  if ((int)param_6[0xe] < *(int *)(param_5 + 0x1a)) {
    iVar10 = *(int *)(param_5 + 0x1a);
  }
  local_a8 = 0;
  local_a0 = (ushort *)*param_6;
  local_9c = 0;
  if (0 < (int)param_6[1]) {
    local_44 = 0;
    do {
      if (((**(int **)(local_a0 + 0x1a) != 0) && (((*(int **)(local_a0 + 0x1a))[1] & param_7) != 0))
         && (*param_5 == *local_a0)) {
        local_94 = 0;
        local_98 = 0;
        if (*param_5 != 0) {
          local_6c = 0;
          local_68 = 0;
          do {
            local_7c = 0;
            iVar14 = *(int *)(local_a0 + 2) + *(int *)(*(int *)(local_a0 + 4) + local_6c) * 4;
            iVar7 = *(int *)(param_5 + 2) + *(int *)(*(int *)(param_5 + 4) + local_6c) * 4;
            iVar2 = *(int *)(*(int *)(local_a0 + 4) + local_6c) * 2;
            iVar4 = *(int *)(*(int *)(param_5 + 4) + local_6c) * 2;
            iVar3 = *(int *)(local_a0 + 10) + iVar2;
            iVar9 = *(int *)(param_5 + 10) + iVar4;
            local_88 = 1;
            local_8c = 1;
            iVar15 = (int)*(short *)(iVar3 + 2);
            iVar16 = (int)*(short *)(iVar9 + 2);
            local_50 = 0;
            iVar5 = *(int *)(*(int *)(local_a0 + 6) + local_6c) +
                    *(int *)(*(int *)(param_5 + 6) + local_6c) + -3;
            if (0 < iVar5) {
              local_64 = (ushort *)(*(int *)(param_5 + 0xc) + iVar4 + 2);
              local_60 = (ushort *)(*(int *)(local_a0 + 0xc) + iVar2 + 2);
              local_5c = (short *)(iVar9 + 2);
              psVar13 = (short *)(iVar14 + 4);
              psVar11 = (short *)(iVar7 + 4);
              local_58 = (short *)(iVar3 + 2);
              do {
                iVar2 = (int)(((uint)*local_60 - (uint)*local_64) * 0x10000) >> 0x10;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar2 = FUN_0200d12c(0x8000 - iVar2,0x80);
                if (iVar16 < iVar15) {
                  iVar15 = (iVar15 - iVar16) * 0x10000 >> 0x10;
                  iVar3 = FUN_0200d12c((int)*local_58,2);
                  if (iVar15 < iVar3) {
                    iVar3 = (int)*psVar11 - (int)*psVar13;
                    iVar4 = (int)psVar11[1] - (int)psVar13[1];
                    if (iVar3 < 0) {
                      iVar3 = -iVar3;
                    }
                    if (iVar4 < 0) {
                      iVar4 = -iVar4;
                    }
                    iVar3 = iVar3 + iVar4;
                  }
                  else {
                    iVar4 = (local_8c + -1) * 4;
                    iVar3 = (int)*psVar11 - (int)*(short *)(iVar14 + iVar4);
                    iVar4 = (int)psVar11[1] - (int)*(short *)(iVar14 + iVar4 + 2);
                    if (iVar3 < 0) {
                      iVar3 = -iVar3;
                    }
                    if (iVar4 < 0) {
                      iVar4 = -iVar4;
                    }
                    iVar3 = iVar3 + iVar4;
                  }
                  iVar2 = (iVar10 * 2 - iVar3) * iVar2 * iVar16;
                  local_64 = local_64 + 1;
                  local_5c = local_5c + 1;
                  psVar11 = psVar11 + 2;
                  local_88 = local_88 + 1;
                  iVar16 = (int)*local_5c;
                }
                else {
                  iVar16 = (iVar16 - iVar15) * 0x10000 >> 0x10;
                  iVar3 = FUN_0200d12c((int)*local_5c,2);
                  if (iVar16 < iVar3) {
                    iVar3 = (int)*psVar11 - (int)*psVar13;
                    iVar4 = (int)psVar11[1] - (int)psVar13[1];
                    if (iVar3 < 0) {
                      iVar3 = -iVar3;
                    }
                    if (iVar4 < 0) {
                      iVar4 = -iVar4;
                    }
                    iVar3 = iVar3 + iVar4;
                  }
                  else {
                    iVar4 = (local_88 + -1) * 4;
                    iVar3 = (int)*(short *)(iVar7 + iVar4) - (int)*psVar13;
                    iVar4 = (int)*(short *)(iVar7 + iVar4 + 2) - (int)psVar13[1];
                    if (iVar3 < 0) {
                      iVar3 = -iVar3;
                    }
                    if (iVar4 < 0) {
                      iVar4 = -iVar4;
                    }
                    iVar3 = iVar3 + iVar4;
                  }
                  iVar2 = (iVar10 * 2 - iVar3) * iVar2 * iVar15;
                  local_60 = local_60 + 1;
                  psVar13 = psVar13 + 2;
                  local_58 = local_58 + 1;
                  local_8c = local_8c + 1;
                  iVar15 = (int)*local_58;
                }
                local_7c = local_7c + iVar2;
                local_50 = local_50 + 1;
              } while (local_50 < iVar5);
            }
            iVar2 = (int)*(short *)(*(int *)(local_a0 + 0x10) + local_68);
            if ((int)*(short *)(*(int *)(local_a0 + 0x10) + local_68) <
                (int)*(short *)(*(int *)(param_5 + 0x10) + local_68)) {
              iVar2 = (int)*(short *)(*(int *)(param_5 + 0x10) + local_68);
            }
            iVar2 = FUN_02050db0(local_7c,iVar2);
            local_94 = local_94 + iVar2;
            local_6c = local_6c + 4;
            local_68 = local_68 + 2;
            local_98 = local_98 + 1;
          } while (local_98 < (int)(uint)*param_5);
        }
        uVar1 = FUN_02050970(local_94);
        iVar2 = FUN_0200d12c(uVar1,0x100);
        if (*(short *)(*(int *)(local_a0 + 0x1a) + 10) != 0) {
          iVar2 = FUN_02050db0(iVar2,0x1000 - *(short *)(*(int *)(local_a0 + 0x1a) + 10));
          iVar2 = *(short *)(*(int *)(local_a0 + 0x1a) + 10) + iVar2;
        }
        if (iVar2 < 0) {
          iVar2 = local_44;
        }
        if (0xfff < iVar2) {
          iVar2 = 0x1000;
        }
        local_a8 = local_a8 + 1;
        if ((int)param_2[param_3 + -1] < iVar2) {
          param_2[param_3 + -1] = iVar2;
          param_1[param_3 + -1] = *(undefined4 *)(local_a0 + 0x1a);
          iVar2 = param_3 + -2;
          if (-1 < iVar2) {
            piVar12 = param_2 + iVar2;
            puVar6 = param_1 + iVar2;
            do {
              iVar3 = iVar2 + 1;
              iVar14 = *piVar12;
              if (iVar14 < (int)param_2[iVar3]) {
                *piVar12 = param_2[iVar3];
                param_2[iVar3] = iVar14;
                uVar1 = *puVar6;
                *puVar6 = param_1[iVar3];
                param_1[iVar3] = uVar1;
              }
              piVar12 = piVar12 + -1;
              puVar6 = puVar6 + -1;
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
        }
      }
      local_9c = local_9c + 1;
      local_a0 = local_a0 + 0x1c;
    } while (local_9c < (int)param_6[1]);
  }
  return local_a8;
}


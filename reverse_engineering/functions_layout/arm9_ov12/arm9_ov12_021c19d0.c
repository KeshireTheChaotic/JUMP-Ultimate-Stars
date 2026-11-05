
undefined4
FUN_021c19d0(short *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_64;
  int local_20;
  short local_1c;
  short local_1a;
  
  if (param_5 == (int *)0x0) {
    local_94 = 0;
    local_80 = 3;
    local_7c = 5;
  }
  else {
    local_94 = *param_5;
    local_80 = param_5[1];
    local_7c = param_5[2];
  }
  if (0 < local_94) {
    iVar8 = 0x200;
    iVar7 = 0x200;
    iVar9 = -0x200;
    iVar10 = -0x200;
    psVar4 = (short *)*param_2;
    uVar5 = 0;
    if (0 < param_2[1]) {
      do {
        if (*psVar4 != -1) {
          iVar1 = (int)*psVar4;
          if (iVar1 < iVar8) {
            iVar8 = iVar1;
          }
          if (iVar9 < iVar1) {
            iVar9 = iVar1;
          }
          iVar1 = (int)psVar4[1];
          if (iVar1 < iVar7) {
            iVar7 = iVar1;
          }
          if (iVar10 < iVar1) {
            iVar10 = iVar1;
          }
        }
        uVar5 = uVar5 + 1 & 0xffff;
        psVar4 = psVar4 + 2;
      } while ((int)uVar5 < param_2[1]);
    }
    local_90 = iVar9 - iVar8;
    if (iVar9 - iVar8 < iVar10 - iVar7) {
      local_90 = iVar10 - iVar7;
    }
    iVar1 = FUN_0200d12c(local_90,2);
    iVar8 = FUN_0200d12c(iVar8 + iVar9,2);
    local_88 = iVar8 - iVar1;
    iVar7 = FUN_0200d12c(iVar7 + iVar10,2);
    local_84 = iVar7 - iVar1;
  }
  puVar11 = *(ushort **)(param_1 + 0xc);
  iVar7 = 0;
  local_20 = 0;
  if (local_80 == 0) {
    iVar7 = FUN_021c2a8c(puVar11,&local_20,param_3,param_4,param_2,0,*(undefined4 *)(param_1 + 2));
    if (iVar7 == 0) {
      local_20 = 0;
    }
  }
  else {
    if ((0 < local_94) &&
       ((((local_80 == 1 || (local_80 == 3)) && (0 < local_7c)) &&
        (local_7c = FUN_0200d12c(local_90 * local_7c,local_94), local_7c == 0)))) {
      local_7c = 1;
    }
    if (local_80 == 1) {
      iVar7 = FUN_021c2958(puVar11,&local_20,param_3,param_4,param_2,local_7c,
                           *(undefined4 *)(param_1 + 2));
    }
    else if (local_80 == 2) {
      iVar7 = FUN_021c2744(puVar11,&local_20,param_3,param_4,param_2,local_7c,
                           *(undefined4 *)(param_1 + 2));
    }
    else if (local_80 == 3) {
      iVar7 = FUN_021c2488(puVar11,&local_20,param_3,param_4,param_2,local_7c,
                           *(undefined4 *)(param_1 + 2));
    }
    if (iVar7 == 0) {
      local_20 = 0;
    }
  }
  iVar7 = local_20;
  sVar2 = 0;
  sVar3 = 0;
  if (0 < local_20) {
    iVar8 = *param_2;
    iVar9 = 0;
    psVar4 = *(short **)(param_1 + 2);
    local_1c = -1;
    local_1a = -1;
    if (local_94 < 1) {
      local_64 = 0;
      if (0 < local_20) {
        do {
          psVar6 = (short *)(iVar8 + (uint)*puVar11 * 4);
          if ((*puVar11 == 0xffff) || (*psVar6 == -1)) {
            if (iVar9 < 2) {
              iVar7 = 0;
              if (0 < iVar9) {
                do {
                  psVar4 = psVar4 + -2;
                  sVar2 = sVar2 + -1;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar9);
              }
            }
            else {
              local_1c = -1;
              *psVar4 = -1;
              local_1a = -1;
              psVar4[1] = -1;
              psVar4 = psVar4 + 2;
              sVar2 = sVar2 + 1;
              sVar3 = sVar3 + 1;
            }
            iVar9 = 0;
          }
          else if ((local_1c != *psVar6) || (local_1a != psVar6[1])) {
            local_1c = *psVar6;
            local_1a = psVar6[1];
            *psVar4 = local_1c;
            psVar4[1] = local_1a;
            psVar4 = psVar4 + 2;
            sVar2 = sVar2 + 1;
            iVar9 = iVar9 + 1;
          }
          puVar11 = puVar11 + 1;
          local_64 = local_64 + 1;
        } while (local_64 < local_20);
      }
    }
    else {
      iVar10 = FUN_0200d338(local_94 << 0x10,local_90 + 1);
      local_74 = 0;
      if (0 < iVar7) {
        do {
          psVar6 = (short *)(iVar8 + (uint)*puVar11 * 4);
          if ((*puVar11 == 0xffff) || (*psVar6 == -1)) {
            if (iVar9 < 2) {
              iVar7 = 0;
              if (0 < iVar9) {
                do {
                  psVar4 = psVar4 + -2;
                  sVar2 = sVar2 + -1;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar9);
              }
            }
            else {
              local_1c = -1;
              *psVar4 = -1;
              local_1a = -1;
              psVar4[1] = -1;
              psVar4 = psVar4 + 2;
              sVar2 = sVar2 + 1;
              sVar3 = sVar3 + 1;
            }
            iVar9 = 0;
          }
          else {
            iVar1 = (*psVar6 - local_88) * iVar10;
            iVar7 = (psVar6[1] - local_84) * iVar10;
            if (((int)local_1c != iVar1 >> 0x10) || ((int)local_1a != iVar7 >> 0x10)) {
              local_1c = (short)((uint)iVar1 >> 0x10);
              *psVar4 = local_1c;
              local_1a = (short)((uint)iVar7 >> 0x10);
              psVar4[1] = local_1a;
              psVar4 = psVar4 + 2;
              sVar2 = sVar2 + 1;
              iVar9 = iVar9 + 1;
            }
          }
          puVar11 = puVar11 + 1;
          local_74 = local_74 + 1;
        } while (local_74 < local_20);
      }
    }
  }
  param_1[1] = sVar2;
  *param_1 = sVar3;
  if (sVar2 == 0) {
    if (local_94 < 1) {
      local_94 = 1;
    }
    *(int *)(param_1 + 0x1a) = local_94;
    return 0;
  }
  FUN_021c167c();
  if (local_94 < 1) {
    *(int *)(param_1 + 0x1a) = (int)param_1[0x18] - (int)param_1[0x16];
    if (*(int *)(param_1 + 0x1a) < (int)param_1[0x19] - (int)param_1[0x17]) {
      *(int *)(param_1 + 0x1a) = (int)param_1[0x19] - (int)param_1[0x17];
    }
  }
  else {
    *(int *)(param_1 + 0x1a) = local_94;
  }
  return 1;
}


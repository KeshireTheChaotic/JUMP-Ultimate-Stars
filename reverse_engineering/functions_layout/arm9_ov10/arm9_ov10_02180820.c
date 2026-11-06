
undefined4 FUN_02180820(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 local_20;
  uint local_1c;
  
  pbVar5 = (byte *)param_1[0x1f];
  iVar6 = param_1[0x20];
  if (4 < (uint)param_1[0x172]) goto switchD_02180842_default;
                    /* WARNING: Switch is manually overridden */
  switch(param_1[0x172]) {
  case 0:
    if (iVar6 < 1) goto switchD_02180842_default;
    iVar2 = (*pbVar5 ^ 0xec) + 2;
    if ((iVar6 < iVar2) || (iVar4 = iVar2 + (pbVar5[(*pbVar5 ^ 0xec) + 1] ^ 0xea), iVar6 < iVar4))
    goto switchD_02180842_default;
    FUN_02180f50(param_1,pbVar5 + iVar2);
    param_1[0x172] = 1;
    pbVar5 = pbVar5 + iVar4;
    iVar6 = iVar6 - iVar4;
    FUN_0217ef10(param_1 + 0x12f,pbVar5,iVar6);
    break;
  case 2:
    goto switchD_02180842_caseD_2;
  case 3:
    goto switchD_02180842_caseD_3;
  case 4:
    goto switchD_02180842_caseD_4;
  }
  if (iVar6 < 6) goto switchD_02180842_default;
  *(byte *)(param_1 + 0x128) = *pbVar5;
  *(byte *)((int)param_1 + 0x4a1) = pbVar5[1];
  *(byte *)((int)param_1 + 0x4a2) = pbVar5[2];
  *(byte *)((int)param_1 + 0x4a3) = pbVar5[3];
  (*(code *)param_1[0x122])(param_1,6,DAT_021a7d1c,param_1[0x125]);
  *(byte *)(param_1 + 0x12a) = pbVar5[4];
  *(byte *)((int)param_1 + 0x4a9) = pbVar5[5];
  if (*(short *)(param_1 + 0x12a) == -1) {
    iVar2 = FUN_021816dc(pbVar5 + 6,iVar6 + -6);
    if (iVar2 == -1) goto switchD_02180842_default;
    FUN_02180b10(param_1,pbVar5 + 6);
    (*(code *)param_1[0x122])(param_1,5,DAT_021a7d1c,param_1[0x125]);
    if (param_1[0x1f] == 0) goto switchD_02180842_default;
  }
  pbVar5 = pbVar5 + 6;
  iVar6 = iVar6 + -6;
  if (((param_1[0x171] & 2) == 0) && (*(short *)(param_1 + 0x12a) != -1)) {
    param_1[0x172] = 2;
    param_1[0x121] = 0xffffffff;
switchD_02180842_caseD_2:
    puVar3 = param_1 + 0x121;
    if (*puVar3 == 0xffffffff) {
      if (iVar6 < 1) goto switchD_02180842_default;
      *puVar3 = (uint)*pbVar5;
      uVar1 = FUN_02001368(8,*puVar3);
      param_1[2] = uVar1;
      if (param_1[2] == 0) {
        return 5;
      }
      pbVar5 = pbVar5 + 1;
      iVar6 = iVar6 + -1;
    }
    iVar2 = FUN_0200131c(param_1[2]);
    if (iVar2 < (int)param_1[0x121]) {
      do {
        if ((iVar6 < 2) || (iVar2 = FUN_021816dc(pbVar5 + 1,iVar6 + -1), iVar2 == -1)) break;
        local_1c = (uint)*pbVar5;
        local_20 = FUN_02181744(param_1,pbVar5 + 1);
        FUN_020012a4(param_1[2],&local_20);
        pbVar5 = pbVar5 + iVar2 + 1;
        iVar6 = iVar6 - (iVar2 + 1);
        iVar2 = FUN_0200131c(param_1[2]);
      } while (iVar2 < (int)param_1[0x121]);
    }
    iVar2 = FUN_0200131c(param_1[2]);
    if ((int)param_1[0x121] <= iVar2) {
      param_1[0x172] = 3;
      param_1[0x121] = -1;
switchD_02180842_caseD_3:
      if (param_1[0x121] == 0xffffffff) {
        if (iVar6 < 1) goto switchD_02180842_default;
        param_1[0x121] = (uint)*pbVar5;
        param_1[0x120] = 0;
        pbVar5 = pbVar5 + 1;
        iVar6 = iVar6 + -1;
      }
      if ((int)param_1[0x120] < (int)param_1[0x121]) {
        do {
          iVar2 = FUN_021816dc(pbVar5,iVar6);
          if (iVar2 == -1) break;
          uVar1 = FUN_02181744(param_1,pbVar5);
          iVar4 = param_1[0x120];
          param_1[0x120] = iVar4 + 1;
          param_1[iVar4 + 0x21] = uVar1;
          pbVar5 = pbVar5 + iVar2;
          iVar6 = iVar6 - iVar2;
        } while ((int)param_1[0x120] < (int)param_1[0x121]);
      }
      if ((int)param_1[0x121] <= (int)param_1[0x120]) {
        param_1[0x172] = 4;
switchD_02180842_caseD_4:
        if (4 < iVar6) {
          do {
            iVar2 = FUN_02180b1c(param_1,pbVar5,iVar6);
            if (iVar2 == -2) {
              return 5;
            }
            if (iVar2 == -1) {
              iVar6 = iVar6 + -5;
              pbVar5 = pbVar5 + 5;
              param_1[0x172] = 5;
              *param_1 = 2;
              (*(code *)param_1[0x122])(param_1,3,DAT_021a7d1c,param_1[0x125]);
              break;
            }
            pbVar5 = pbVar5 + iVar2;
            iVar6 = iVar6 - iVar2;
            if (param_1[0x1f] == 0) {
              iVar2 = 0;
            }
          } while (iVar2 != 0);
        }
      }
    }
  }
  else {
    param_1[0x172] = 5;
    *param_1 = 2;
  }
switchD_02180842_default:
  if (iVar6 < 0) {
    FUN_02002068(s_inlen_>__0_021a4d00,s_sb_serverlist_c_021a4cf0,0,0x4af);
  }
  if (param_1[0x1f] == 0) {
    return 0;
  }
  if (iVar6 != 0) {
    FUN_02002450(param_1[0x1f],pbVar5,iVar6);
  }
  param_1[0x20] = iVar6;
  return 0;
}


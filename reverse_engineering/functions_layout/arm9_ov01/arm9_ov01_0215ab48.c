
void FUN_0215ab48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  short local_e8 [32];
  undefined1 auStack_a8 [64];
  undefined2 local_68;
  undefined1 auStack_66 [24];
  undefined1 auStack_4e [38];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x19c))();
  uVar11 = *(uint *)(*(int *)(*(int *)(param_1 + 0xac) + 4) + 0x148);
  iVar8 = 0;
  if (uVar2 + 5 <= uVar11) {
    uVar11 = uVar2 + 5;
  }
  for (; uVar2 < uVar11; uVar2 = uVar2 + 1) {
    iVar3 = *(int *)(param_1 + 0x304);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x310) == '\a') {
        if ((uVar2 == *(int *)(*(int *)(*(int *)(param_1 + 0xac) + 4) + 0x148) - 1U) &&
           (uVar4 = FUN_0215716c(param_1), uVar4 < 0x32)) {
          if (*(char *)(param_1 + 0x314) == '\0') {
            FUN_02159c68(auStack_a8,uVar2,0xf380);
            uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
            FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                         *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                         *(undefined4 *)(param_1 + 0x144),0);
          }
          else {
            FUN_02159c68(auStack_a8,uVar2,0xf390);
            uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
            FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                         *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                         *(undefined4 *)(param_1 + 0x144),0xc);
          }
        }
        else {
          uVar4 = (uint)*(byte *)(param_1 + 0x314);
          bVar12 = uVar4 != 1;
          if (!bVar12) {
            uVar4 = (uint)*(char *)(param_1 + 0x312);
          }
          if (bVar12 || uVar4 != uVar2) {
            uVar6 = FUN_021571a8(param_1,uVar2);
            FUN_02159cac(param_1,auStack_a8,uVar6,uVar2,0xf080,0xf180);
            uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
            FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                         *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                         *(undefined4 *)(param_1 + 0x144),0);
          }
          else {
            uVar6 = FUN_021571a8(param_1,uVar2);
            FUN_02159cac(param_1,auStack_a8,uVar6,uVar2,0xf090,0xf280);
            uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
            FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                         *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                         *(undefined4 *)(param_1 + 0x144),0xc);
          }
        }
      }
      else {
        uVar6 = FUN_021571a8(param_1,uVar2);
        FUN_020769cc(*(undefined4 *)(param_1 + 0x2d0),uVar6);
        uVar4 = FUN_0207879c(*(undefined4 *)(param_1 + 0x2d0));
        if ((uVar4 & 0x1f) == 0) {
          uVar6 = FUN_021571a8(param_1,uVar2);
          FUN_02159cac(param_1,auStack_a8,uVar6,uVar2,0xf080,0xf180);
          uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
          FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                       *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),*(undefined4 *)(param_1 + 0x144)
                       ,0);
        }
        else {
          uVar6 = FUN_021571a8(param_1,uVar2);
          FUN_02159cac(param_1,auStack_a8,uVar6,uVar2,0xf090,0xf280);
          uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
          FUN_0215b140(uVar6,auStack_a8,param_1 + 0x16c + iVar8 * 0x40,
                       *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),*(undefined4 *)(param_1 + 0x144)
                       ,0xc);
        }
      }
    }
    else if (iVar3 == 1) {
      uVar6 = FUN_021571a8(param_1,uVar2);
      FUN_02159cac(param_1,&local_68,uVar6,uVar2,0xf080,0xf180);
      uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
      FUN_0215b140(uVar6,&local_68,param_1 + 0x16c + iVar8 * 0x40,
                   *(undefined4 *)(param_1 + iVar8 * 4 + 0x158),*(undefined4 *)(param_1 + 0x144),0);
    }
    else if (iVar3 == 2) {
      psVar5 = (short *)FUN_02072050(uVar2);
      FUN_02159de8(&local_68,uVar2,0xf080,1);
      FUN_020517fc(local_e8,0,0x40);
      iVar3 = 0;
      for (psVar7 = psVar5; (iVar3 < 10 && (*psVar7 != 0)); psVar7 = psVar7 + 1) {
        local_e8[iVar3] = *psVar7;
        iVar3 = iVar3 + 1;
      }
      for (psVar7 = local_e8; *psVar7 != 0; psVar7 = psVar7 + 1) {
      }
      FUN_02051890(&DAT_02169d6c,psVar7,6);
      iVar3 = 0;
      do {
        iVar9 = iVar3 + 1;
        if (local_e8[iVar3] == 0) {
          local_e8[iVar3] = 0x3000;
        }
        iVar3 = iVar9;
      } while (iVar9 < 0xd);
      iVar3 = 0;
      for (psVar7 = &local_68; *psVar7 != 0; psVar7 = psVar7 + 1) {
        iVar3 = iVar3 + 2;
      }
      FUN_02051890(local_e8,auStack_a8 + iVar3 + 0x40,0x1a);
      bVar1 = *(byte *)(psVar5 + 0x1b);
      iVar10 = 2;
      iVar9 = func_0x021a2254(psVar5);
      if (iVar9 != 0) {
        iVar9 = func_0x021a2270(psVar5);
        if (iVar9 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 1;
        }
      }
      iVar9 = (bVar1 - 2 & 0xff) + 0xf3a0;
      auStack_4e[iVar3] = (char)iVar9;
      auStack_4e[iVar3 + 1] = (char)((uint)iVar9 >> 8);
      auStack_4e[iVar3 + 2] = (char)(iVar10 + 0xf3b0);
      auStack_4e[iVar3 + 3] = (char)((uint)(iVar10 + 0xf3b0) >> 8);
      auStack_4e[iVar3 + 4] = 0;
      auStack_4e[iVar3 + 5] = 0;
      iVar3 = param_1 + 0x16c + iVar8 * 0x40;
      uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
      FUN_0215b22c(uVar6,&local_68,iVar3,*(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                   *(undefined4 *)(param_1 + 0x148),0);
      if (((*(char *)(param_1 + 0x310) == '\n') && (uVar11 != 0x32)) &&
         (uVar2 == *(int *)(*(int *)(*(int *)(param_1 + 0xac) + 4) + 0x148) - 1U)) {
        FUN_02159de8(&local_68,uVar2,0xf080,1);
        iVar9 = FUN_02074294(&local_68);
        auStack_a8[iVar9 * 2 + 0x40] = 0x80;
        iVar9 = iVar9 * 2;
        auStack_66[iVar9 + -1] = 0xf3;
        auStack_66[iVar9] = 0;
        auStack_66[iVar9 + 1] = 0;
        uVar6 = FUN_0215b11c(*(undefined4 *)(param_1 + 0xac),uVar2);
        FUN_0215b22c(uVar6,&local_68,iVar3,*(undefined4 *)(param_1 + iVar8 * 4 + 0x158),
                     *(undefined4 *)(param_1 + 0x148),0);
      }
    }
    iVar8 = iVar8 + 1;
  }
  return;
}


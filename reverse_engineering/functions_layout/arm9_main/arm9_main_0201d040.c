
void FUN_0201d040(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int unaff_r8;
  bool bVar8;
  
  psVar4 = (short *)(param_2 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc));
  uVar3 = 0;
  do {
    uVar6 = 0xffffffff;
    if (*(ushort *)(param_1 + 0x14) <= uVar3) {
LAB_0201d128:
      if (uVar6 == 0xffffffff) {
        return;
      }
      uVar3 = *(ushort *)(param_1 + 0x14) - 1;
      if (param_2 != uVar3) {
        FUN_02017004(param_2 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc),
                     uVar3 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc));
      }
      *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
      uVar3 = (uint)*(ushort *)(param_1 + 0x14);
      if (uVar6 == uVar3) {
        if (uVar3 < 2) {
          return;
        }
        FUN_0201d040(param_1,param_2);
        return;
      }
      if (uVar3 < 2) {
        return;
      }
      FUN_0201d040(param_1,uVar6);
      return;
    }
    if (uVar3 != param_2) {
      iVar7 = *(int *)(param_1 + 0xc);
      sVar1 = psVar4[1];
      psVar5 = (short *)(uVar3 * *(int *)(param_1 + 0x10) + iVar7);
      sVar2 = psVar5[1];
      if (sVar2 == sVar1) {
        unaff_r8 = (int)psVar5[3];
        iVar7 = (int)psVar4[3];
      }
      uVar6 = uVar3;
      if (sVar2 != sVar1 || unaff_r8 != iVar7) {
        unaff_r8 = (int)*psVar5;
        iVar7 = (int)*psVar4;
        bVar8 = unaff_r8 == iVar7;
        if (bVar8) {
          unaff_r8 = (int)psVar5[2];
          iVar7 = (int)psVar4[2];
        }
        if (bVar8 && unaff_r8 == iVar7) {
          if (psVar5[3] == sVar1) {
            psVar5[3] = psVar4[3];
            goto LAB_0201d128;
          }
          if (sVar2 == psVar4[3]) {
            psVar5[1] = psVar4[1];
            goto LAB_0201d128;
          }
        }
      }
      else {
        if (psVar5[2] == *psVar4) {
          psVar5[2] = psVar4[2];
          goto LAB_0201d128;
        }
        unaff_r8 = (int)*psVar5;
        if (unaff_r8 == psVar4[2]) {
          *psVar5 = *psVar4;
          goto LAB_0201d128;
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



void FUN_02151e2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(byte *)(iVar6 + 0x2e) & 1) == 0) {
    iVar5 = (*(int **)(iVar6 + 0x1c))[1];
    iVar7 = **(int **)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x20);
    iVar3 = *(int *)(iVar6 + 0x24);
    *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + (iVar7 >> 2);
    iVar5 = iVar5 - iVar3;
    iVar2 = *(int *)(iVar6 + 0x24) + (iVar5 >> 2);
    *(int *)(iVar6 + 0x24) = iVar2;
    bVar8 = iVar7 == 0;
    iVar4 = iVar7;
    if (0 < iVar7) {
      iVar2 = *(int *)(iVar6 + 0x20);
      iVar3 = **(int **)(iVar6 + 0x1c);
      iVar4 = iVar2 - iVar3;
      bVar8 = iVar2 == iVar3;
    }
    if (!bVar8 && iVar4 < 0 == (0 < iVar7 && SBORROW4(iVar2,iVar3))) {
      *(int *)(iVar6 + 0x20) = iVar3;
    }
    if (iVar7 < 0) {
      iVar2 = *(int *)(iVar6 + 0x20);
      iVar3 = **(int **)(iVar6 + 0x1c);
    }
    if (iVar7 < 0 && iVar2 < iVar3) {
      *(int *)(iVar6 + 0x20) = iVar3;
    }
    bVar8 = iVar5 == 0;
    iVar4 = iVar5;
    if (0 < iVar5) {
      iVar2 = *(int *)(iVar6 + 0x24);
      iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
      iVar4 = iVar2 - iVar3;
      bVar8 = iVar2 == iVar3;
    }
    if (!bVar8 && iVar4 < 0 == (0 < iVar5 && SBORROW4(iVar2,iVar3))) {
      *(int *)(iVar6 + 0x24) = iVar3;
    }
    bVar8 = iVar5 < 0;
    if (bVar8) {
      iVar5 = *(int *)(iVar6 + 0x24);
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
    }
    if (bVar8 && iVar5 < iVar2) {
      *(int *)(iVar6 + 0x24) = iVar2;
    }
    iVar4 = *(int *)(iVar6 + 0x24) >> 8;
    iVar3 = *(int *)(iVar6 + 0x20) >> 8;
    local_20 = iVar4 * -0x1000;
    local_1c = iVar3 * -0x1000;
    FUN_021519d0(*(undefined4 *)(iVar6 + 8),&local_1c,&local_20);
    local_28 = (0x78 - iVar4) * 0x1000;
    local_24 = (0x80 - iVar3) * 0x1000;
    FUN_021519d0(*(undefined4 *)(iVar6 + 4),&local_24,&local_28);
  }
  if (*(short *)(iVar6 + 0x2a) != 0) {
    *(short *)(iVar6 + 0x2a) = *(short *)(iVar6 + 0x2a) + -1;
    iVar3 = (int)*(short *)(iVar6 + 0x2a);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 0x50);
    iVar2 = *(int *)(iVar4 + 0xc);
    iVar5 = *(int *)(iVar4 + 0x10);
    iVar4 = FUN_0200d12c((int)(short)(ushort)*(byte *)(iVar6 + 0x2c) * (int)*(short *)(iVar6 + 0x2a)
                         ,iVar3);
    if (0x20 < iVar4) {
      iVar4 = 0x20;
    }
    iVar3 = FUN_0200d12c((uint)*(byte *)(iVar6 + 0x2d) * iVar3,iVar3);
    if (0x20 < iVar3) {
      iVar3 = 0x20;
    }
    uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar1,iVar4);
    uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar1,iVar3);
    local_2c = iVar5 + extraout_r1_00 * 0x1000;
    local_30 = iVar2 + extraout_r1 * 0x1000;
    FUN_021519d0(*(undefined4 *)(iVar6 + 4),&local_30,&local_2c);
  }
  return;
}


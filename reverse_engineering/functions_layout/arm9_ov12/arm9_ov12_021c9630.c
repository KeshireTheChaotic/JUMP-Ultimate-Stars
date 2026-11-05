
void FUN_021c9630(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  if (*(int *)(param_1 + 0x1a0) < 0) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0xfc) + 7U >> 3;
  uVar3 = param_4;
  for (uVar6 = 0; uVar6 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar6 = uVar6 + 1) {
    psVar2 = (short *)FUN_021c961c(param_2,uVar6,param_3,param_4,uVar3);
    iVar7 = *(int *)(param_1 + 0x19c) * ((int)psVar2[1] - (int)*(short *)(param_1 + 0x1ae)) +
            (uint)*(ushort *)(param_1 + 0x180) + ((int)*psVar2 - (int)*(short *)(param_1 + 0x1ac)) +
            (uint)*(byte *)(param_1 + 0x198) * -0x1000;
    uVar3 = FUN_021ad69c();
    uVar4 = FUN_021ad6b4(psVar2);
    iVar5 = (int)psVar2[1] - (int)*(short *)(param_1 + 0x1ae);
    iVar9 = (int)*psVar2 - (int)*(short *)(param_1 + 0x1ac);
    iVar11 = *(int *)(param_1 + 0x184) + ((uint)*(ushort *)(param_1 + 0x188) * iVar5 + iVar9) * 2;
    param_3 = uVar1 * iVar5 + iVar9;
    param_4 = *(uint *)(param_1 + 0x194);
    iVar5 = param_4 + param_3;
    for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
      for (uVar10 = 0; uVar10 < uVar3; uVar10 = uVar10 + 1) {
        *(ushort *)(iVar11 + uVar10 * 2) =
             (short)iVar7 + (short)uVar10 + (ushort)*(byte *)(iVar5 + uVar10) * 0x1000;
      }
      param_3 = (uint)*(ushort *)(param_1 + 0x188);
      param_4 = *(uint *)(param_1 + 0x19c);
      iVar5 = iVar5 + uVar1;
      iVar7 = iVar7 + param_4;
      iVar11 = iVar11 + param_3 * 2;
    }
  }
  return;
}


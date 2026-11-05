
void FUN_021c9524(int param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  if (*(int *)(param_1 + 0x1a0) < 0) {
    return;
  }
  for (uVar6 = 0; uVar6 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar6 = uVar6 + 1) {
    psVar1 = (short *)FUN_021c961c(param_2,uVar6);
    iVar7 = *(int *)(param_1 + 0x19c) * ((int)psVar1[1] - (int)*(short *)(param_1 + 0x1ae)) +
            (uint)*(ushort *)(param_1 + 0x180) + ((int)*psVar1 - (int)*(short *)(param_1 + 0x1ac));
    uVar2 = FUN_021ad69c();
    uVar3 = FUN_021ad6b4(psVar1);
    iVar4 = *(int *)(param_1 + 0x184) +
            ((uint)*(ushort *)(param_1 + 0x188) *
             ((int)psVar1[1] - (int)*(short *)(param_1 + 0x1ae)) +
            ((int)*psVar1 - (int)*(short *)(param_1 + 0x1ac))) * 2;
    for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
      for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
        *(short *)(iVar4 + uVar8 * 2) = (short)iVar7 + (short)uVar8;
      }
      iVar7 = iVar7 + *(int *)(param_1 + 0x19c);
      iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x188) * 2;
    }
  }
  return;
}



void FUN_02018ae4(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iStack_4c;
  int aiStack_48 [4];
  ushort auStack_38 [8];
  ushort auStack_28 [8];
  int *piStack_18;
  
  piStack_18 = param_4;
  iVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar2 = (iVar1 + 1) / 2;
  iVar6 = iVar2 + 1;
  piVar3 = (int *)(**(code **)(*param_2 + 0xa0))();
  iStack_4c = *piVar3;
  while (iVar4 = FUN_02016314(&iStack_4c,*(undefined2 *)*param_4), iVar4 != 0) {
    *param_4 = *param_4 + iVar6 * -2;
  }
  while (iVar4 = FUN_02016328(*(undefined2 *)(iVar6 * 2 + *param_4),&iStack_4c), iVar4 != 0) {
    *param_4 = *param_4 + iVar6 * 2;
  }
  iVar4 = iVar6 * 2 + -2;
  MIi_CpuCopy16(*param_4 + 2,auStack_28,iVar4);
  psVar7 = (short *)*param_4;
  uVar5 = (**(code **)(*param_2 + 0x98))();
  if ((int)*psVar7 == (uVar5 & 0xffff)) {
    (**(code **)(*param_3 + 0x24))(param_3,param_1,auStack_28);
  }
  else {
    MIi_CpuCopy16(psVar7 + iVar2 + 2,auStack_38,iVar4);
    iVar2 = (int)*(short *)*param_4;
    iVar2 = FUN_0200d12c(iStack_4c + iVar2 * -0x1000,((short *)*param_4)[iVar6] - iVar2);
    if (iVar1 == 1) {
      iVar1 = (char)auStack_28[0] * 0x1000 +
              ((int)(char)auStack_38[0] - (int)(char)auStack_28[0]) * iVar2;
      aiStack_48[0]._0_2_ =
           CONCAT11(aiStack_48[0]._1_1_,(char)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc)
                   );
      iVar1 = (**(code **)(*param_3 + 0x14))(param_3,param_1);
      if (iVar1 == 0xc) {
        aiStack_48[0]._0_2_ = CONCAT11(aiStack_48[0]._1_1_,(char)aiStack_48[0] != '\0');
      }
    }
    else {
      iVar4 = (**(code **)(*param_3 + 0x14))(param_3,param_1);
      if (iVar4 == 0xe) {
        iVar1 = (uint)auStack_28[0] * 0x1000 + ((uint)auStack_38[0] - (uint)auStack_28[0]) * iVar2;
        aiStack_48[0]._0_2_ = (undefined2)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
      }
      else if (iVar1 == 2) {
        iVar1 = (short)auStack_28[0] * 0x1000 +
                ((int)(short)auStack_38[0] - (int)(short)auStack_28[0]) * iVar2;
        aiStack_48[0]._0_2_ = (undefined2)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
      }
      else {
        for (iVar1 = 0; iVar1 < iVar6 / 2; iVar1 = iVar1 + 1) {
          iVar4 = *(int *)(auStack_28 + iVar1 * 2) * 0x1000 +
                  iVar2 * (*(int *)(auStack_38 + iVar1 * 2) - *(int *)(auStack_28 + iVar1 * 2));
          aiStack_48[iVar1] = (int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc;
        }
      }
    }
    (**(code **)(*param_3 + 0x24))(param_3,param_1,aiStack_48);
  }
  return;
}


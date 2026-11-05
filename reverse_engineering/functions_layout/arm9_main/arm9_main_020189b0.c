
void FUN_020189b0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [13];
  int *piStack_18;
  
  piStack_18 = param_4;
  uVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar6 = (uVar1 >> 1) + 1;
  piVar2 = (int *)(**(code **)(*param_2 + 0xa0))();
  aiStack_4c[0] = *piVar2;
  while (iVar3 = FUN_02016314(aiStack_4c,*(undefined2 *)*param_4), iVar3 != 0) {
    *param_4 = *param_4 + iVar6 * -2;
  }
  while (iVar3 = FUN_02016328(*(undefined2 *)(iVar6 * 2 + *param_4),aiStack_4c), iVar3 != 0) {
    *param_4 = *param_4 + iVar6 * 2;
  }
  aiStack_4c[9] = 0;
  aiStack_4c[10] = 0;
  aiStack_4c[0xb] = 0;
  aiStack_4c[0xc] = 0;
  iVar3 = iVar6 * 2 + -2;
  MIi_CpuCopy16(*param_4 + 2,aiStack_4c + 9,iVar3);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  if ((int)*(short *)*param_4 == (uVar4 & 0xffff)) {
    (**(code **)(*param_3 + 0x24))(param_3,param_1,aiStack_4c + 9);
  }
  else {
    aiStack_4c[5] = 0;
    aiStack_4c[6] = 0;
    aiStack_4c[7] = 0;
    aiStack_4c[8] = 0;
    aiStack_4c[1] = 0;
    aiStack_4c[2] = 0;
    aiStack_4c[3] = 0;
    aiStack_4c[4] = 0;
    MIi_CpuCopy16(*param_4 + ((uVar1 >> 1) + 2) * 2,aiStack_4c + 5,iVar3);
    iVar3 = (int)*(short *)*param_4;
    iVar3 = FUN_0200d12c(aiStack_4c[0] + iVar3 * -0x1000,((short *)*param_4)[iVar6] - iVar3);
    for (iVar5 = 0; iVar5 < iVar6 / 2; iVar5 = iVar5 + 1) {
      iStack_54 = aiStack_4c[iVar5 + 5] - aiStack_4c[iVar5 + 9];
      iStack_50 = iVar3;
      FUN_02018ac8(&iStack_50,&iStack_54);
      aiStack_4c[iVar5 + 1] = aiStack_4c[iVar5 + 9] + iStack_50;
    }
    (**(code **)(*param_3 + 0x24))(param_3,param_1,aiStack_4c + 1);
  }
  return;
}



void FUN_02018c7c(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int local_48;
  int local_44 [4];
  int local_34 [4];
  int local_24 [4];
  
  iVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar1 = (iVar1 + 1) / 2;
  iVar6 = iVar1 + 1;
  piVar2 = (int *)(**(code **)(*param_2 + 0xa0))();
  local_48 = *piVar2;
  while (iVar3 = FUN_02016314(&local_48,*(undefined2 *)*param_4), iVar3 != 0) {
    *param_4 = *param_4 + iVar6 * -2;
  }
  while (iVar3 = FUN_02016328(*(undefined2 *)(iVar6 * 2 + *param_4),&local_48), iVar3 != 0) {
    *param_4 = *param_4 + iVar6 * 2;
  }
  iVar3 = iVar6 * 2 + -2;
  MIi_CpuCopy16(*param_4 + 2,local_24,iVar3);
  psVar7 = (short *)*param_4;
  uVar4 = (**(code **)(*param_2 + 0x98))();
  if ((int)*psVar7 == (uVar4 & 0xffff)) {
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_24);
  }
  else {
    MIi_CpuCopy16(psVar7 + iVar1 + 2,local_34,iVar3);
    iVar1 = (int)*(short *)*param_4;
    iVar1 = FUN_0200d12c(local_48 + iVar1 * -0x1000,((short *)*param_4)[iVar6] - iVar1);
    for (iVar3 = 0; iVar3 < iVar6 / 2; iVar3 = iVar3 + 1) {
      iVar5 = local_24[iVar3] * 0x1000 + iVar1 * (local_34[iVar3] - local_24[iVar3]);
      local_44[iVar3] = (int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc;
    }
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_44);
  }
  return;
}


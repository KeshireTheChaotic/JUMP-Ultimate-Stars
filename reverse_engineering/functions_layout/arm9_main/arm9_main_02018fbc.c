
void FUN_02018fbc(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [13];
  
  uVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar5 = (uVar1 >> 1) + 1;
  piVar2 = (int *)(**(code **)(*param_2 + 0xa0))();
  local_48[0] = *piVar2;
  while (iVar3 = FUN_02016314(local_48,*(undefined2 *)*param_4), iVar3 != 0) {
    *param_4 = *param_4 + iVar5 * -2;
  }
  while (iVar3 = FUN_02016328(*(undefined2 *)(iVar5 * 2 + *param_4),local_48), iVar3 != 0) {
    *param_4 = *param_4 + iVar5 * 2;
  }
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  iVar3 = iVar5 * 2 + -2;
  MIi_CpuCopy16(*param_4 + 2,local_48 + 9,iVar3);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  if ((int)*(short *)*param_4 == (uVar4 & 0xffff)) {
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_48 + 9);
  }
  else {
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    MIi_CpuCopy16(*param_4 + ((uVar1 >> 1) + 2) * 2,local_48 + 5,iVar3);
    iVar3 = (int)*(short *)*param_4;
    local_54 = local_48[0] + iVar3 * -0x1000;
    local_54 = FUN_0200d12c(local_54,((short *)*param_4)[iVar5] - iVar3);
    local_50 = 0x4000000;
    FUN_02018ac8(&local_50,&local_54);
    FUN_02018efc(&local_4c,((int)(local_50 + ((uint)(local_50 >> 0xb) >> 0x14)) >> 0xc) + 0x8000);
    for (iVar3 = 0; iVar3 < iVar5 / 2; iVar3 = iVar3 + 1) {
      local_5c = local_48[iVar3 + 5] - local_48[iVar3 + 9];
      local_58 = local_4c + 0x1000;
      FUN_02018ac8(&local_58,&local_5c);
      local_48[iVar3 + 1] = local_48[iVar3 + 9] + local_58;
    }
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_48 + 1);
  }
  return;
}


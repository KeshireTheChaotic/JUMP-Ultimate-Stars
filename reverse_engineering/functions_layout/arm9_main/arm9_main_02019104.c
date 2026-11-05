
void FUN_02019104(undefined4 param_1,int *param_2,int *param_3,int *param_4)

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
  int local_4c [13];
  int *piStack_18;
  
  piStack_18 = param_4;
  uVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar5 = (uVar1 >> 1) + 1;
  piVar2 = (int *)(**(code **)(*param_2 + 0xa0))();
  local_4c[0] = *piVar2;
  while (iVar3 = FUN_02016314(local_4c,*(undefined2 *)*param_4), iVar3 != 0) {
    *param_4 = *param_4 + iVar5 * -2;
  }
  while (iVar3 = FUN_02016328(*(undefined2 *)(iVar5 * 2 + *param_4),local_4c), iVar3 != 0) {
    *param_4 = *param_4 + iVar5 * 2;
  }
  local_4c[9] = 0;
  local_4c[10] = 0;
  local_4c[0xb] = 0;
  local_4c[0xc] = 0;
  iVar3 = iVar5 * 2 + -2;
  MIi_CpuCopy16(*param_4 + 2,local_4c + 9,iVar3);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  if ((int)*(short *)*param_4 == (uVar4 & 0xffff)) {
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_4c + 9);
  }
  else {
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    MIi_CpuCopy16(*param_4 + ((uVar1 >> 1) + 2) * 2,local_4c + 5,iVar3);
    iVar3 = (int)*(short *)*param_4;
    local_50 = local_4c[0] + iVar3 * -0x1000;
    local_50 = FUN_0200d12c(local_50,((short *)*param_4)[iVar5] - iVar3);
    for (iVar3 = 0; iVar3 < iVar5 / 2; iVar3 = iVar3 + 1) {
      local_5c = local_4c[iVar3 + 5] - local_4c[iVar3 + 9];
      local_58 = local_50;
      FUN_02018ac8(&local_58,&local_50);
      local_54 = local_58;
      FUN_02018ac8(&local_54,&local_5c);
      local_4c[iVar3 + 1] = local_4c[iVar3 + 9] + local_54;
    }
    (**(code **)(*param_3 + 0x24))(param_3,param_1,local_4c + 1);
  }
  return;
}


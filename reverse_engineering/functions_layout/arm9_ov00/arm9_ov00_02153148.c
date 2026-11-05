
undefined4 FUN_02153148(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[0x3e] == param_1[2]) {
    if (*(char *)(param_1 + 0x4b) == '\0') {
      return 0;
    }
    FUN_0215304c(param_1);
  }
  param_1[0x3e] = param_1[0x3e] + 1;
  iVar4 = param_1[0x3c];
  iVar1 = iVar4 + 1 >> 0x1f;
  param_1[0x3c] = ((uint)((iVar4 + 1) * -0x80000000 + iVar1) >> 0x1f | iVar1 << 1) - iVar1;
  iVar1 = param_1[0x3c];
  uVar3 = *(uint *)(param_1[iVar1 + 0x34] + param_1[iVar1 + 0x38] + param_1[iVar1 + 0x36] + -2);
  param_1[iVar4 + 0x36] = uVar3 & 0xffff;
  param_1[iVar4 + 0x3a] = uVar3 >> 0x10;
  (**(code **)(*(int *)*param_1 + 0x14))();
  param_1[0xd] = param_1[param_1[0x3c] + 0x34] + param_1[param_1[0x3c] + 0x38];
  if ((uint)param_1[0x3e] < (uint)param_1[2]) {
    uVar2 = (**(code **)(*(int *)*param_1 + 0x10))
                      ((int *)*param_1,param_1[iVar4 + 0x34],param_1[iVar4 + 0x36] + 2);
    param_1[iVar4 + 0x38] = uVar2;
  }
  param_1[0xe] = *(undefined4 *)(param_1[0x2e] + param_1[0x46] * 4);
  param_1[0xf] = *(undefined4 *)(param_1[0x2f] + param_1[0x46] * 4);
  param_1[0x10] = *(undefined4 *)(param_1[0x2e] + param_1[0x47] * 4);
  param_1[0x11] = *(undefined4 *)(param_1[0x2f] + param_1[0x47] * 4);
  param_1[0x12] = *(undefined4 *)(param_1[0x2e] + param_1[0x48] * 4);
  param_1[0x13] = *(undefined4 *)(param_1[0x2f] + param_1[0x48] * 4);
  param_1[0x14] = *(undefined4 *)(param_1[0x2e] + param_1[0x49] * 4);
  param_1[0x15] = *(undefined4 *)(param_1[0x2f] + param_1[0x49] * 4);
  param_1[0x3f] = param_1[8] * param_1[param_1[0x3c] + 0x3a];
  return 1;
}


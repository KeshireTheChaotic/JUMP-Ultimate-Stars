
undefined4 FUN_0215305c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uStack_10;
  
  if (((int)param_2 < 0) || ((uint)param_1[0xc] <= param_2)) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 8))
                    ((int *)*param_1,param_1[0x42] + *(int *)(param_1[0x3d] + param_2 * 8 + 4));
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x3e] = *(undefined4 *)(param_1[0x3d] + param_2 * 8);
  (**(code **)(*(int *)*param_1 + 0x14))();
  param_1[0x3c] = 1;
  (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,&uStack_10,4);
  param_1[0x36] = uStack_10 & 0xffff;
  param_1[0x3a] = uStack_10 >> 0x10;
  param_1[0x38] = 0;
  (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1[0x34],param_1[0x36] + 2);
  return 1;
}


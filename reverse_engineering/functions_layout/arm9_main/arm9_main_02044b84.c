
void FUN_02044b84(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 10) & 7) >> 2 == param_2 || param_2 == 0) {
    return;
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0x34))(param_1,0,*(code **)(*param_1 + 0x34),param_4,param_4);
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 100))();
    param_1[0xc] = (int)piVar1;
    (**(code **)(*piVar1 + 8))();
    FUN_02029e88(param_1[0xc]);
    (**(code **)(*(int *)param_1[8] + 0xc))();
    param_1[8] = 0;
    param_1[0x19] = -1;
    FUN_0203efb8(DAT_020a0f20);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | (byte)((param_2 & 1) << 2);
  return;
}


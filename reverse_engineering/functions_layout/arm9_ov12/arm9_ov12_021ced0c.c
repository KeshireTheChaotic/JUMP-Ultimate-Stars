
undefined4 FUN_021ced0c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - *(ushort *)(param_1 + 0x68) & 0xffff;
  if (uVar1 < 3000) {
    if (param_3 < *(ushort *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10000;
    }
    *(short *)(param_1 + 0x68) = (short)param_3;
  }
  else if (uVar1 < 0xff9d) {
    if (param_3 != *(uint *)(param_1 + 100)) {
      *(uint *)(param_1 + 100) = param_3 + 1 & 0xffff;
      return 0;
    }
    FUN_021ced90(param_1,param_3);
    *(uint *)(param_1 + 0x54) = param_3 - 1 & 0xffff;
  }
  else {
    uVar1 = param_3 + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x54) + 0xff9cU < uVar1) {
      *(uint *)(param_2 + 0x18) = uVar1 - 0x10000;
      return 1;
    }
  }
  *(uint *)(param_2 + 0x18) = param_3 + *(int *)(param_1 + 0x60);
  return 1;
}


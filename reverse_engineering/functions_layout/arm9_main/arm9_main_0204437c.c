
uint FUN_0204437c(int *param_1)

{
  uint uVar1;
  
  if ((int *)param_1[0x11] == param_1) {
    *(short *)(param_1 + 1) = (short)param_1[1] + 1;
    return (uint)*(ushort *)(param_1 + 1);
  }
  uVar1 = (**(code **)(*(int *)param_1[0x11] + 8))();
  return uVar1;
}


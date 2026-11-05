
uint FUN_0201b7a0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((int *)param_1[7] != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)param_1[7] + 0xc))();
    return uVar1;
  }
  *(short *)(param_1 + 1) = (short)param_1[1] + -1;
  if (*(ushort *)(param_1 + 1) != 0) {
    return (uint)*(ushort *)(param_1 + 1);
  }
  while (param_1 != (int *)0x0) {
    piVar2 = (int *)param_1[8];
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    param_1 = piVar2;
  }
  return 0;
}


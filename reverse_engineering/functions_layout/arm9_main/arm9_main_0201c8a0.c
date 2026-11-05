
short FUN_0201c8a0(int *param_1)

{
  *(short *)(param_1 + 1) = (short)param_1[1] + -1;
  if ((short)param_1[1] != 0) {
    return (short)param_1[1];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return 0;
}


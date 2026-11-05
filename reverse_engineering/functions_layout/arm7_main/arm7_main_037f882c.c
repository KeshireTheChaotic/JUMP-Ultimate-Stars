
undefined4 FUN_037f882c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(short *)((int)param_2 + 10) == -0x40e3) {
    if ((short)param_2[2] == *(short *)((int)param_1 + 10)) {
      FUN_037fbc10(0x1000000);
      *(short *)(param_1 + 2) = (short)param_1[2] + -1;
      if ((short)param_1[2] == 0) {
        *param_1 = -1;
        param_1[1] = -1;
      }
      else if (param_2 == (int *)*param_1) {
        *param_1 = param_2[1];
        *(undefined4 *)*param_1 = 0xffffffff;
      }
      else if (param_2 == (int *)param_1[1]) {
        param_1[1] = *param_2;
        *(undefined4 *)(param_1[1] + 4) = 0xffffffff;
      }
      else {
        *(int *)param_2[1] = *param_2;
        *(int *)(*param_2 + 4) = param_2[1];
      }
      *(undefined2 *)(param_2 + 2) = 0;
      FUN_037fbc4c();
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


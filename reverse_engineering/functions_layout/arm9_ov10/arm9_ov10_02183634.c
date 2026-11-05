
undefined4 FUN_02183634(undefined4 param_1,int *param_2)

{
  if (((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_2[3] == 0)) {
    return 0;
  }
  param_2[2] = param_2[2] - param_2[3];
  if (param_2[2] != 0) {
    FUN_02002450(*param_2,*param_2 + param_2[3]);
  }
  *(undefined1 *)(*param_2 + param_2[2]) = 0;
  param_2[3] = 0;
  return 0;
}


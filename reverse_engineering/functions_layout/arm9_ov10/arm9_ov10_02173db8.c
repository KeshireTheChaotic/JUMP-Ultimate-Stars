
undefined4 FUN_02173db8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x1010))(s_ALLOC_buf_>buffer_021a3a98,param_3);
  *param_2 = iVar1;
  if (*param_2 == 0) {
    return 0;
  }
  param_2[1] = *param_2;
  param_2[3] = param_3;
  param_2[2] = *param_2 + param_2[3];
  return 1;
}


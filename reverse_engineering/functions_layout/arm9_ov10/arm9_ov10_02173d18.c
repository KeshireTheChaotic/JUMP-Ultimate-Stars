
undefined4 FUN_02173d18(int param_1,int *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x1014);
  if (param_3 < 1) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x1010))(s_ALLOC_newptr_021a3a74,param_2[3] + param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_02051890(*param_2,iVar1,param_2[3]);
  (*pcVar2)(s_FREE_buf_>buffer_021a3a84,*param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  param_2[1] = param_2[1] + (iVar1 - *param_2);
  param_2[3] = param_2[3] + param_3;
  *param_2 = iVar1;
  param_2[2] = iVar1 + param_2[3];
  return 1;
}


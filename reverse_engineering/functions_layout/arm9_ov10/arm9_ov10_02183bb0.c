
undefined4 FUN_02183bb0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    FUN_02002068(s_string____NULL_021a53b8,s_gpiBuffer_c_021a5248,0,0x51);
  }
  if (param_4 < 0) {
    FUN_02002068(s_stringLen_>__0_021a53c8,s_gpiBuffer_c_021a5248,0,0x52);
  }
  if (param_2 == (int *)0x0) {
    FUN_02002068(s_outputBuffer____NULL_021a5230,s_gpiBuffer_c_021a5248,0,0x53);
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = param_2[2];
  iVar3 = param_2[1];
  iVar4 = *param_2;
  if (iVar3 - iVar1 < param_4) {
    iVar2 = 0x800;
    if (0x7ff < param_4) {
      iVar2 = param_4;
    }
    iVar3 = iVar3 + iVar2;
    iVar4 = FUN_02175824(iVar4,iVar3 + 1);
    if (iVar4 == 0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a52cc);
      return 1;
    }
  }
  FUN_02002434(iVar4 + iVar1,param_3,param_4);
  *(undefined1 *)(iVar4 + iVar1 + param_4) = 0;
  param_2[2] = param_2[2] + param_4;
  param_2[1] = iVar3;
  *param_2 = iVar4;
  return 0;
}


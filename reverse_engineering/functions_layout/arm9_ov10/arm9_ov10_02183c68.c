
undefined4 FUN_02183c68(undefined4 param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
    FUN_02002068(s_outputBuffer____NULL_021a5230,s_gpiBuffer_c_021a5248,0,0x25);
  }
  iVar4 = param_2[2];
  iVar2 = param_2[1];
  iVar1 = *param_2;
  iVar3 = iVar2;
  if (iVar2 == iVar4) {
    iVar3 = iVar2 + 0x800;
    iVar1 = FUN_02175824(iVar1,iVar2 + 0x801);
    if (iVar1 == 0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a52cc);
      return 1;
    }
  }
  *(undefined1 *)(iVar1 + iVar4) = param_3;
  *(undefined1 *)(iVar1 + iVar4 + 1) = 0;
  param_2[2] = param_2[2] + 1;
  param_2[1] = iVar3;
  *param_2 = iVar1;
  return 0;
}


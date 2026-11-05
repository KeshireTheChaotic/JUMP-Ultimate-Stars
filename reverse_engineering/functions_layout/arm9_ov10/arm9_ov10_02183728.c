
int FUN_02183728(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  undefined4 local_20;
  int local_1c [2];
  
  if (param_3 == (int *)0x0) {
    FUN_02002068(s_outputBuffer____NULL_021a5230,s_gpiBuffer_c_021a5248,0,0x1b9);
  }
  iVar5 = *param_3;
  local_24 = param_3[2];
  iVar4 = param_3[3];
  iVar2 = local_24 - iVar4;
  iVar3 = 0;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar1 = FUN_02183acc(param_1,param_2,iVar5 + iVar4 + iVar3,iVar2,&local_20,local_1c,param_6);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_1c[0] == 0) break;
    iVar3 = iVar3 + local_1c[0];
    iVar2 = iVar2 - local_1c[0];
  } while (iVar2 != 0);
  if (param_5 == 0) {
    iVar4 = iVar4 + iVar3;
  }
  else if (0 < iVar3) {
    FUN_02002450(iVar5,iVar5 + iVar3,iVar2 + 1);
    local_24 = local_24 - iVar3;
  }
  if (local_24 < 0) {
    FUN_02002068(s_len_>__0_021a5254,s_gpiBuffer_c_021a5248,0,0x1de);
  }
  if (iVar4 < 0) {
    FUN_02002068(s_pos_>__0_021a5260,s_gpiBuffer_c_021a5248,0,0x1df);
  }
  if (local_24 < iVar4) {
    FUN_02002068(s_pos_<__len_021a526c,s_gpiBuffer_c_021a5248,0,0x1e0);
  }
  param_3[2] = local_24;
  param_3[3] = iVar4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_20;
  }
  return 0;
}


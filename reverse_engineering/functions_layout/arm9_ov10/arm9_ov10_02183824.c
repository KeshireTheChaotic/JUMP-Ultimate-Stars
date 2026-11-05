
undefined4
FUN_02183824(undefined4 param_1,int param_2,int *param_3,int *param_4,int *param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c;
  
  if (param_2 == -1) {
    FUN_02002068(s_sock____INVALID_SOCKET_021a5278,s_gpiBuffer_c_021a5248,0,0x150);
  }
  if (param_3 == (int *)0x0) {
    FUN_02002068(s_inputBuffer____NULL_021a5290,s_gpiBuffer_c_021a5248,0,0x151);
  }
  if (param_4 == (int *)0x0) {
    FUN_02002068(s_bytesRead____NULL_021a52a4,s_gpiBuffer_c_021a5248,0,0x152);
  }
  if (param_5 == (int *)0x0) {
    FUN_02002068(s_connClosed____NULL_021a52b8,s_gpiBuffer_c_021a5248,0,0x153);
  }
  iVar4 = *param_3;
  iVar3 = param_3[2];
  local_30 = param_3[1];
  iVar5 = 0;
  local_2c = 0;
  do {
    if (local_30 < iVar3 + 0x800) {
      iVar4 = FUN_02175824(iVar4,iVar3 + 0x801);
      local_30 = iVar3 + 0x800;
      if (iVar4 == 0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a52cc);
        return 1;
      }
    }
    iVar1 = FUN_02001ac0(param_2,iVar4 + iVar3,local_30 - iVar3,0);
    if (iVar1 == -1) {
      iVar2 = FUN_020019e0(param_2);
      if (((iVar2 != -6) && (iVar2 != -0x1a)) && (iVar2 != -0x4c)) {
        FUN_0218912c(param_1,s_There_was_an_error_reading_from_a_021a52dc);
        return 3;
      }
    }
    else if (iVar1 == 0) {
      local_2c = 1;
      FUN_02189470(param_1,s_RECVXXXX__s___Connection_closed_021a5308,param_6);
    }
    else {
      iVar3 = iVar3 + iVar1;
      iVar5 = iVar5 + iVar1;
    }
    *(undefined1 *)(iVar4 + iVar3) = 0;
  } while (((iVar1 != -1) && (local_2c == 0)) && (iVar5 < 0x20000));
  if (iVar5 != 0) {
    FUN_02189470(param_1,s_RECVTOTL__s____d_021a532c,param_6,iVar5);
  }
  *param_3 = iVar4;
  param_3[2] = iVar3;
  param_3[1] = local_30;
  *param_4 = iVar5;
  *param_5 = local_2c;
  return 0;
}


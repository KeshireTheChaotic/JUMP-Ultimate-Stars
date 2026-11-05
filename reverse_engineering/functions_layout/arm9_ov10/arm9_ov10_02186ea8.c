
int FUN_02186ea8(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_2 == 100) {
    FUN_02002068(s_peer_>state____GPI_PEER_NOT_CONN_021a5e08,s_gpiPeer_c_021a5cdc,0,0x1d9);
  }
  if (*param_2 != 0x69) {
    if (param_2[1] == 0) {
      iVar1 = FUN_0218710c(param_1,param_2);
    }
    else {
      iVar1 = FUN_0218728c(param_1,param_2);
    }
  }
  if ((iVar1 == 0) && (*param_2 == 0x69)) {
    iVar1 = FUN_02186f08(param_1,param_2);
  }
  return iVar1;
}


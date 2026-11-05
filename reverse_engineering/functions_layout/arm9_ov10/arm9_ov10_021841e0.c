
int FUN_021841e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar2 = *param_1;
  iVar1 = FUN_02189298(param_1,*(undefined4 *)(iVar2 + 0x1d4),&local_10);
  if (iVar1 == 0) {
    if (local_10 == 4) {
      FUN_0218913c(param_1,0x107,s_The_server_has_refused_the_conne_021a54e8);
      FUN_02183f3c(param_1,4,1);
      return 4;
    }
    if (local_10 == 0) {
      return 0;
    }
    if (local_10 != 3) {
      FUN_02002068(s_state____GPI_CONNECTED_021a5510,s_gpiConnect_c_021a5528,0,0x2ef);
    }
    *(undefined4 *)(iVar2 + 0x1d8) = 2;
    iVar1 = 0;
  }
  return iVar1;
}


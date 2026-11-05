
int FUN_0218241c(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  iVar3 = *param_1;
  iVar4 = 0;
  if (4 < *(uint *)(iVar3 + 0x1d8)) {
    FUN_02002068(s__iconnection_>connectState____GP_021a4ec8,s_gpi_c_021a4fc0,0,0x1b5);
  }
  if (*(int *)(iVar3 + 0x1d8) == 1) {
    while( true ) {
      iVar4 = FUN_021841e0(param_1);
      if (((iVar4 == 0) && (param_2 != 0)) && (*(int *)(iVar3 + 0x1d8) == 1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      thunk_FUN_02052ea0(10);
    }
    if (iVar4 != 0) {
      iVar2 = FUN_021865b4(param_1,local_1c,1);
      if (iVar2 == 0) {
        FUN_02002068(&DAT_021a4fc8,s_gpi_c_021a4fc0,0,0x1db);
      }
      else {
        *(undefined4 *)(local_1c[0] + 0x1c) = 4;
      }
    }
  }
  if (*(int *)(iVar3 + 0x1d8) - 2U < 2) {
    if (iVar4 == 0) {
      iVar4 = FUN_02182538(param_1);
    }
    if (iVar4 == 0) {
      iVar4 = FUN_02186cac(param_1);
    }
  }
  if (iVar4 == 0) {
    iVar4 = FUN_02187840(param_1);
  }
  local_1c[0] = *(int *)(iVar3 + 0x424);
  while (local_1c[0] != 0) {
    if (*(int *)(local_1c[0] + 0x1c) == 0) {
      local_1c[0] = *(int *)(local_1c[0] + 0x20);
    }
    else {
      FUN_0218670c(param_1);
      local_1c[0] = *(int *)(local_1c[0] + 0x20);
      FUN_021865e4(param_1);
    }
  }
  iVar2 = FUN_02183cd0(param_1,param_2);
  if (iVar2 == 0) {
    if (*(int *)(iVar3 + 0x41c) != 0) {
      FUN_02183fe4(param_1,0);
    }
    iVar2 = iVar4;
  }
  return iVar2;
}


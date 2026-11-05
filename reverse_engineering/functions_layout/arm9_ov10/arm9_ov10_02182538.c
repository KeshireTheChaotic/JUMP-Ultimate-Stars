
int FUN_02182538(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  iVar3 = *param_1;
  while( true ) {
    FUN_02185b94(param_1,iVar3 + 500);
    iVar1 = FUN_02183728(param_1,*(undefined4 *)(iVar3 + 0x1d4),iVar3 + 500,&local_18,1,
                         &DAT_021a4fcc);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_02183824(param_1,*(undefined4 *)(iVar3 + 0x1d4),iVar3 + 0x1dc,&local_1c,&local_18,
                         &DAT_021a4fcc);
    if (iVar1 != 0) {
      if (iVar1 == 3) {
        FUN_0218913c(param_1,5,s_There_was_an_error_reading_from_t_021a4fd0);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      return iVar1;
    }
    puVar2 = (undefined1 *)FUN_02004d40(*(undefined4 *)(iVar3 + 0x1dc),s__final__021a4ffc);
    while (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      FUN_02189470(param_1,s_CMD___s_021a5004,*(undefined4 *)(iVar3 + 0x1dc));
      local_1c = (int)puVar2 - *(int *)(iVar3 + 0x1dc);
      if (*(int *)(iVar3 + 0x1f0) < local_1c) {
        iVar1 = local_1c;
        if (local_1c < 0x800) {
          iVar1 = 0x800;
        }
        *(int *)(iVar3 + 0x1f0) = *(int *)(iVar3 + 0x1f0) + iVar1;
        iVar1 = FUN_02175824(*(undefined4 *)(iVar3 + 0x1ec),*(int *)(iVar3 + 0x1f0) + 1);
        if (iVar1 == 0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5010);
          return 1;
        }
        *(int *)(iVar3 + 0x1ec) = iVar1;
      }
      FUN_02002434(*(undefined4 *)(iVar3 + 0x1ec),*(undefined4 *)(iVar3 + 0x1dc),local_1c + 1);
      *(int *)(iVar3 + 0x1e4) =
           *(int *)(iVar3 + 0x1e4) - ((int)(puVar2 + 7) - *(int *)(iVar3 + 0x1dc));
      FUN_02002450(*(undefined4 *)(iVar3 + 0x1dc),puVar2 + 7,*(int *)(iVar3 + 0x1e4) + 1);
      uVar4 = *(undefined4 *)(iVar3 + 0x1ec);
      iVar1 = FUN_02004d40(uVar4,&DAT_021a5020);
      if (iVar1 == 0) {
        iVar1 = FUN_021893dc(param_1,uVar4,1);
        if (iVar1 != 0) {
          return 4;
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x1ec);
        iVar1 = FUN_02004cec(uVar4,&DAT_021a5050,4);
        if (iVar1 == 0) {
          iVar1 = FUN_02182d7c(param_1,uVar4);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else {
          iVar1 = FUN_02004cec(uVar4,&DAT_021a5058,10);
          if (iVar1 != 0) {
            FUN_02189470(param_1,s_Received_an_unrecognized__unsoli_021a5060);
          }
        }
      }
      else {
        uVar4 = FUN_02005f14(iVar1 + 4);
        iVar1 = FUN_021865b4(param_1,&local_20,uVar4);
        if (iVar1 == 0) {
          FUN_02189470(param_1,s_No_matching_operation_found_for_i_021a5028,uVar4);
        }
        else {
          iVar1 = FUN_0218651c(param_1,local_20,*(undefined4 *)(iVar3 + 0x1ec));
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
      puVar2 = (undefined1 *)FUN_02004d40(*(undefined4 *)(iVar3 + 0x1dc),s__final__021a4ffc);
    }
    if (local_18 != 0) {
      *(undefined4 *)(iVar3 + 0x1d8) = 4;
      FUN_0218913c(param_1,7,s_The_server_has_closed_the_connec_021a5090);
      FUN_02183f3c(param_1,3,1);
      return 0;
    }
    iVar1 = FUN_0218658c(param_1);
    if (iVar1 == 0) break;
    thunk_FUN_02052ea0(10);
  }
  return 0;
}


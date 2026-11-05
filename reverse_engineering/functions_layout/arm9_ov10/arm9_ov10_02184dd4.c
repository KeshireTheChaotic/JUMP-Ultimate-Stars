
undefined4 FUN_02184dd4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18 [2];
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x10c) == 0) {
    iVar1 = FUN_02001b94(2,1,0);
    *(int *)(iVar2 + 0x204) = iVar1;
    if (*(int *)(iVar2 + 0x204) == -1) {
      FUN_0218913c(param_1,5,s_There_was_an_error_creating_a_so_021a575c);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_02001e30();
    if (iVar1 == 0) {
      FUN_0218913c(param_1,5,s_There_was_an_error_making_a_sock_021a5784);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    local_1c = 0;
    local_20 = 0x200;
    iVar1 = FUN_02001b34(*(undefined4 *)(iVar2 + 0x204),&local_20,8);
    if (iVar1 == -1) {
      FUN_0218913c(param_1,5,s_There_was_an_error_binding_a_soc_021a57b8);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_02001af4(*(undefined4 *)(iVar2 + 0x204),5);
    if (iVar1 == -1) {
      FUN_0218913c(param_1,5,s_There_was_an_error_listening_on_a_021a57e0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    local_18[0] = 8;
    iVar1 = FUN_02001a08(*(undefined4 *)(iVar2 + 0x204),&local_20,local_18);
    if (iVar1 == -1) {
      FUN_0218913c(param_1,5,s_There_was_an_error_getting_a_soc_021a580c);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    *(uint *)(iVar2 + 0x208) = local_20 >> 0x10;
  }
  else {
    *(undefined4 *)(iVar2 + 0x204) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x208) = 0;
  }
  iVar1 = FUN_02001b94(2,1,0);
  *(int *)(iVar2 + 0x1d4) = iVar1;
  if (*(int *)(iVar2 + 0x1d4) == -1) {
    FUN_0218913c(param_1,5,s_There_was_an_error_creating_a_so_021a575c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar1 = FUN_02001e30();
  if (iVar1 == 0) {
    FUN_0218913c(param_1,5,s_There_was_an_error_making_a_sock_021a5784);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar1 = FUN_02193970(s_gpcm_gs_nintendowifi_net_021a5488);
  if (iVar1 == 0) {
    FUN_0218913c(param_1,5,s_Could_not_resolve_connection_man_021a583c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  local_20 = 0x200;
  local_1c = *(int *)**(undefined4 **)(iVar1 + 0xc);
  if (local_1c == 0) {
    FUN_02002068(s_address_sin_addr_s_addr____0_021a5870,s_gpiConnect_c_021a5528,0,0x90);
  }
  local_20 = CONCAT22(0xcc74,(undefined2)local_20);
  iVar1 = FUN_02001b08(*(undefined4 *)(iVar2 + 0x1d4),&local_20,8);
  if ((((iVar1 == -1) && (iVar1 = FUN_020019e0(*(undefined4 *)(iVar2 + 0x1d4)), iVar1 != -6)) &&
      (iVar1 != -0x1a)) && (iVar1 != -0x4c)) {
    FUN_0218913c(param_1,5,s_There_was_an_error_connecting_a_s_021a5890);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  *(undefined4 *)(param_2 + 0x14) = 1;
  *(undefined4 *)(iVar2 + 0x1d8) = 1;
  return 0;
}


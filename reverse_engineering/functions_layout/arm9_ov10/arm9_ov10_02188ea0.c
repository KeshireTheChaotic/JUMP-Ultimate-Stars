
undefined4 FUN_02188ea0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  
  iVar3 = *(int *)(param_2 + 4);
  *(undefined4 *)(iVar3 + 0xc) = 0x1000;
  uVar1 = FUN_0217583c(*(int *)(iVar3 + 0xc) + 1);
  *(undefined4 *)(iVar3 + 8) = uVar1;
  if (*(int *)(iVar3 + 8) == 0) {
    FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
    return 1;
  }
  uVar1 = FUN_02001b94(2,1,0);
  *(undefined4 *)(iVar3 + 4) = uVar1;
  if (*(int *)(iVar3 + 4) == -1) {
    FUN_0218913c(param_1,5,s_There_was_an_error_creating_a_so_021a6260);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar2 = FUN_02001e30();
  if (iVar2 == 0) {
    FUN_0218913c(param_1,5,s_There_was_an_error_making_a_sock_021a6288);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar2 = FUN_02193970(s_gpsp_gs_nintendowifi_net_021a5f58);
  if (iVar2 == 0) {
    FUN_0218913c(param_1,5,s_Could_not_resolve_search_manange_021a62bc);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  local_18 = 0x200;
  local_14 = *(int *)**(undefined4 **)(iVar2 + 0xc);
  if (local_14 == 0) {
    FUN_02002068(s_address_sin_addr_s_addr____0_021a62ec,s_gpiSearch_c_021a5fc8,0,0x59);
  }
  local_18 = CONCAT22(0xcd74,(undefined2)local_18);
  iVar2 = FUN_02001b08(*(undefined4 *)(iVar3 + 4),&local_18,8);
  if ((((iVar2 == -1) && (iVar3 = FUN_020019e0(*(undefined4 *)(iVar3 + 4)), iVar3 != -6)) &&
      (iVar3 != -0x1a)) && (iVar3 != -0x4c)) {
    FUN_0218913c(param_1,5,s_There_was_an_error_connecting_a_s_021a630c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  *(undefined4 *)(param_2 + 0x14) = 1;
  return 0;
}


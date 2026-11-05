
undefined4 FUN_02186ae4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  int local_10;
  
  iVar1 = FUN_021875f8(param_1,param_2[3],&local_10);
  if (iVar1 == 0) {
    FUN_0218912c(param_1,s_Error_connecting_to_a_peer__021a5d40);
    return 3;
  }
  uVar2 = FUN_02001b94(2,1,0);
  param_2[2] = uVar2;
  if (param_2[2] == -1) {
    FUN_0218913c(param_1,5,s_There_was_an_error_creating_a_so_021a5d5c);
    FUN_02183f3c(param_1,3,0);
    return 3;
  }
  iVar1 = FUN_02001e30();
  if (iVar1 == 0) {
    FUN_0218913c(param_1,5,s_There_was_an_error_making_a_sock_021a5d84);
    FUN_02183f3c(param_1,3,0);
    return 3;
  }
  FUN_02186d4c(param_2[2]);
  local_14 = *(undefined4 *)(*(int *)(local_10 + 8) + 0x10);
  _local_18 = CONCAT22((short)*(undefined4 *)(*(int *)(local_10 + 8) + 0x14),0x200);
  iVar1 = FUN_02001b08(param_2[2],&local_18,8);
  if ((((iVar1 == -1) && (iVar1 = FUN_020019e0(param_2[2]), iVar1 != -6)) && (iVar1 != -0x1a)) &&
     (iVar1 != -0x4c)) {
    FUN_0218913c(param_1,5,s_There_was_an_error_connecting_a_s_021a5db8);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  *param_2 = 0x67;
  return 0;
}


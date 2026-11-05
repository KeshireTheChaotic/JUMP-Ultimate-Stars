
undefined4 FUN_0217faa8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18 [2];
  
  if (param_1 == 0) {
    FUN_02002068(s_server_021a4ca8,s_sb_server_c_021a4cb0,0,0x97);
    return 0;
  }
  local_18[0] = param_2;
  iVar1 = FUN_020014e4(*(undefined4 *)(param_1 + 0x18),local_18);
  if (iVar1 != 0) {
    param_3 = *(undefined4 *)(iVar1 + 4);
  }
  return param_3;
}


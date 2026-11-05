
undefined4 FUN_02187628(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *param_1;
  if (param_2 < 1) {
    FUN_02002068(s_id_>_0_021a5eec,s_gpiProfile_c_021a5ef4,0,0x2b5);
    return 0;
  }
  iVar1 = FUN_021875f8(param_1,param_2,&local_30);
  if (iVar1 != 0) {
    return local_30;
  }
  local_24 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  local_2c = param_2;
  FUN_0200159c(*(undefined4 *)(iVar2 + 0x428));
  *(int *)(iVar2 + 0x42c) = *(int *)(iVar2 + 0x42c) + 1;
  iVar2 = FUN_021875f8(param_1,param_2,&local_30);
  if (iVar2 == 0) {
    return 0;
  }
  return local_30;
}


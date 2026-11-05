
int FUN_021869f8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    FUN_02002068(s_peer____NULL_021a5ccc,s_gpiPeer_c_021a5cdc,0,0x340);
  }
  if (param_4 == 0) {
    FUN_02002068(s_message____NULL_021a5d1c,s_gpiPeer_c_021a5cdc,0,0x341);
  }
  uVar1 = FUN_02004b04(param_4);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = param_3;
  iVar2 = FUN_02183b94(param_1,&local_2c,&DAT_021a5d2c);
  if ((((iVar2 == 0) && (iVar2 = FUN_02183b70(param_1,&local_2c,param_3), iVar2 == 0)) &&
      (iVar2 = FUN_02183b94(param_1,&local_2c,s__len__021a5d30), iVar2 == 0)) &&
     ((iVar2 = FUN_02183b70(param_1,&local_2c,uVar1), iVar2 == 0 &&
      (iVar2 = FUN_02183b94(param_1,&local_2c,s__msg__021a5d38), iVar2 == 0)))) {
    local_18 = local_24;
    iVar2 = FUN_02183bb0(param_1,&local_2c,param_4,uVar1);
    if ((iVar2 == 0) && (iVar2 = FUN_02183c68(param_1,&local_2c,0), iVar2 == 0)) {
      FUN_020012a4(*(undefined4 *)(param_2 + 0x38),&local_2c);
      iVar2 = FUN_0200199c(0);
      *(int *)(param_2 + 0x10) = iVar2 + 300;
      iVar2 = 0;
    }
  }
  return iVar2;
}


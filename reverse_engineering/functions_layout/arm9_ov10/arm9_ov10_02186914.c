
int FUN_02186914(undefined4 param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_38 [36];
  
  if (param_2 == 0) {
    FUN_02002068(s_peer____NULL_021a5ccc,s_gpiPeer_c_021a5cdc,0,0x389);
  }
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_021a5ce8;
  }
  if (param_4 == -1) {
    param_4 = FUN_02004b04(param_3);
  }
  FUN_02003ce0(auStack_38,s__len__d_msg__021a5cec,param_4);
  iVar1 = FUN_02183998(param_1,param_2,auStack_38);
  if (((iVar1 == 0) && (iVar1 = FUN_021839b4(param_1,param_2,param_3,param_4), iVar1 == 0)) &&
     (iVar1 = FUN_02183a48(param_1,param_2,0), iVar1 == 0)) {
    iVar1 = FUN_0200199c(0);
    *(int *)(param_2 + 0x10) = iVar1 + 300;
    iVar1 = 0;
  }
  return iVar1;
}


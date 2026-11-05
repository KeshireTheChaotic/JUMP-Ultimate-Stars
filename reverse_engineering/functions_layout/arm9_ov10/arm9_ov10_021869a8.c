
void FUN_021869a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [68];
  
  uVar2 = param_4[1];
  uVar3 = *param_4;
  uVar1 = param_4[2];
  if (param_4 == (undefined4 *)0x0) {
    FUN_02002068(s_transferID_021a5cfc,s_gpiPeer_c_021a5cdc,0,0x376);
  }
  FUN_02003ce0(auStack_58,s__m__d_xfer__d__u__u_021a5d08,param_3,uVar3,uVar2,uVar1);
  FUN_02183998(param_1,param_2,auStack_58);
  return;
}


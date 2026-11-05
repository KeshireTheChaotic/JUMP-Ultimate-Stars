
int FUN_02189030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined *param_5)

{
  int iVar1;
  undefined1 auStack_38 [36];
  
  if (param_5 == (undefined *)0x0) {
    param_5 = &DAT_021a6348;
  }
  iVar1 = FUN_021869a8(param_1,param_3,0xc9,param_2);
  if (iVar1 == 0) {
    FUN_02003ce0(auStack_38,s__version__d_result__d_021a634c,1,param_4);
    iVar1 = FUN_02183998(param_1,param_3,auStack_38);
    if ((iVar1 == 0) && (iVar1 = FUN_02186914(param_1,param_3,param_5,0xffffffff), iVar1 == 0)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


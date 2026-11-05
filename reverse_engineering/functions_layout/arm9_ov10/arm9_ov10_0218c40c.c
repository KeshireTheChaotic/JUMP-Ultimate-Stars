
undefined1 * FUN_0218c40c(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_8c [128];
  
  if (param_3 == (undefined1 *)0x0) {
    DAT_021a8140 = DAT_021a8140 ^ 1;
    param_3 = &DAT_021a8144 + DAT_021a8140 * 0x16;
  }
  if (param_1 == 0) {
    if (param_2 == 0) {
      *param_3 = 0;
    }
    else {
      FUN_02003ce0(param_3,&DAT_021a670c,param_2);
    }
  }
  else if (param_2 == 0) {
    uVar1 = FUN_02193658(param_1,auStack_8c + 0x80);
    FUN_02003ce0(param_3,&DAT_021a6708,uVar1);
  }
  else {
    uVar1 = FUN_02193658(param_1,auStack_8c + 0x80);
    FUN_02003ce0(param_3,s__s__d_021a6700,uVar1,param_2);
  }
  return param_3;
}


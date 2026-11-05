
undefined4
FUN_0214d2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined1 auStack_28 [8];
  int local_20;
  
  local_20 = FUN_0214f2f8(param_3);
  if (local_20 == 0) {
    FUN_0214e638(2);
    return 0xffffffff;
  }
  FUN_0214cf10(&DAT_0216c208,param_5,2);
  FUN_0214cf10(&DAT_0216c20a,param_6,param_7);
  FUN_0214d274(auStack_28,&DAT_0216c208,param_7 + 2,param_3);
  FUN_0214d244(auStack_28,param_2,param_1,param_3);
  iVar1 = FUN_0214d1d0(param_2,param_3);
  if (iVar1 == param_4) {
    FUN_0214f2e4(local_20);
    return 0;
  }
  FUN_0214e638(0x12);
  FUN_0214f2e4(local_20);
  return 0xffffffff;
}


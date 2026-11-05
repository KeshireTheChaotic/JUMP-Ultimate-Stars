
undefined4 FUN_0218ab88(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  local_20 = DAT_021a66a8;
  local_1f = DAT_021a66a9;
  local_1e = 0x65;
  FUN_0218bd2c(&local_20,3,param_2);
  uVar2 = 5;
  if (param_2 != param_3) {
    FUN_0218bd2c(&local_20,5,param_3);
    uVar2 = 7;
  }
  iVar1 = FUN_0218a6b8(param_1,&local_20,uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}


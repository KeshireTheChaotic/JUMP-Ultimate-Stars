
undefined4
FUN_0205ce08(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char acStack_30 [2];
  undefined2 uStack_2e;
  ushort uStack_2c;
  
  FUN_02057804(&local_38);
  local_40 = local_38;
  local_3c = local_34;
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_0205762c(param_2,acStack_30,&local_40);
  if (iVar1 != 0) {
    do {
      if (((acStack_30[0] == '\x01') && (param_3 == uStack_2c)) &&
         (iVar1 = FUN_0205cecc(param_1,uStack_2e,param_4,param_5), iVar1 == 0)) {
        return 0;
      }
      iVar1 = FUN_0205762c(param_2,acStack_30,&local_40);
    } while (iVar1 != 0);
  }
  return 1;
}


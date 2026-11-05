
undefined4
FUN_0218be08(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_30;
  ushort uStack_2e;
  undefined4 local_2c;
  undefined4 local_4;
  
  local_4 = param_4;
  FUN_0218c2e0(&local_4,&param_5);
  iVar1 = FUN_02001c7c(*param_1);
  if (iVar1 == 0) {
    return 1;
  }
  _local_30 = CONCAT22((ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff) << 8),0x200);
  local_2c = param_2;
  iVar1 = FUN_02001a50(*param_1,local_4,param_5,0,&local_30,8);
  if (iVar1 == -1) {
    iVar1 = FUN_020019e0(*param_1);
    if (iVar1 == -0xf) {
      iVar1 = FUN_0218b134(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((iVar1 == -0x2a) || (iVar1 == -6)) {
        return 1;
      }
      if (iVar1 != -0x23) {
        FUN_0218bd54(param_1);
        return 0;
      }
    }
  }
  else if (param_1[10] != 0) {
    uVar2 = FUN_0218c278(param_1,param_2,param_3);
    iVar1 = FUN_02189f98(param_1,uVar2,param_2,param_3,0,local_4,param_5,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


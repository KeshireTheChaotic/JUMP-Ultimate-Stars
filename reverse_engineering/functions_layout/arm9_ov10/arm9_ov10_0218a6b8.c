
undefined4 FUN_0218a6b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0218be08(param_1[2],*param_1,*(undefined2 *)(param_1 + 1),param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_02001ed8();
  param_1[0x22] = uVar2;
  return 1;
}


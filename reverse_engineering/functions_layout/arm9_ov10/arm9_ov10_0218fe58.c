
undefined4 FUN_0218fe58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02190100();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 8) == '\x01') {
    FUN_0218feb0(param_1,param_2);
  }
  else if ((byte)(*(char *)(iVar1 + 8) - 3U) < 2) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    FUN_0218feb0(param_1,param_2);
  }
  else {
    FUN_0218ff48(param_1,param_2,param_3,0);
  }
  return 1;
}



undefined4 FUN_0218f044(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar2 == 0) {
    *param_1 = 0;
    return 0;
  }
  if ((byte)(*(char *)(iVar2 + 8) - 10U) < 2) {
    uVar1 = FUN_0218f0f4();
    return uVar1;
  }
  if (*(char *)(iVar2 + 9) == '\0') {
    uVar1 = FUN_0218f094();
    return uVar1;
  }
  uVar1 = FUN_02193fa8();
  return uVar1;
}


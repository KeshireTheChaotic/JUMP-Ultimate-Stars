
undefined4 FUN_0218f1f4(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_020aab78 + 0xa4);
  if ((iVar1 == 0) || ((*(char *)(iVar1 + 8) != '\x04' && (*(char *)(iVar1 + 8) != '\n')))) {
    return 0;
  }
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *(undefined2 *)(iVar1 + 0x18);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x14);
  }
  return *(undefined4 *)(iVar1 + 0x1c);
}


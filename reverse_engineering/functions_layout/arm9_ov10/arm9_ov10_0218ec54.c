
int FUN_0218ec54(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 9) != '\0') {
    iVar1 = FUN_02193de0();
    return iVar1;
  }
  if (((*(int *)(iVar1 + 0x44) == 0) && (*(char *)(iVar1 + 8) != '\x04')) &&
     (1 < (byte)(*(char *)(iVar1 + 8) - 10U))) {
    return -1;
  }
  return *(int *)(iVar1 + 0x44);
}


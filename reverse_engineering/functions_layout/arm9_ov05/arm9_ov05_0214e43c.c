
undefined1 FUN_0214e43c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) != '\x01') {
    return 0;
  }
  iVar1 = *(char *)(param_1 + 8) + -1;
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined1 *)
          ((uint)*(byte *)(param_1 + 7) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) + iVar1 * 8);
}



undefined1 FUN_0214e238(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) != '\0') {
    return 0;
  }
  iVar1 = *(char *)(param_1 + 8) + -3;
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined1 *)
          ((uint)*(byte *)(param_1 + 7) * 0x3c + *(int *)(DAT_0214bd80 + 0x40) + iVar1 * 4 + param_2
          + 0x12);
}


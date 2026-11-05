
undefined1 FUN_021cf2fc(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0xb);
  if (*(char *)(param_1 + 4) == -1) {
    if (*(char *)(param_1 + 6) == '\0') {
      if (*(byte *)(param_2 + 4) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = 1 << (uint)*(byte *)(param_2 + 4);
      }
      *(int *)(param_2 + 8) = iVar1;
    }
    return (&DAT_021d03ac)[*(byte *)(param_1 + 6)];
  }
  if (*(char *)(param_1 + 4) != '\0') {
    return 0xc;
  }
  if (*(byte *)(param_1 + 6) != 0) {
    return (&DAT_021d03b4)[*(byte *)(param_1 + 6)];
  }
  if (*(int *)(param_2 + 0xc) != 1) {
    if (*(int *)(param_2 + 0xc) == 5) {
      return 9;
    }
    return 0xc;
  }
  if (*(byte *)(param_2 + 4) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 1 << (uint)*(byte *)(param_2 + 4);
  }
  *(int *)(param_2 + 8) = iVar1;
  return 7;
}


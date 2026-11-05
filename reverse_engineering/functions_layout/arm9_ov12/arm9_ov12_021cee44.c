
undefined4 FUN_021cee44(int param_1,undefined4 *param_2)

{
  if (DAT_021d7bf0 != 2) {
    return 0;
  }
  if (DAT_021d7be1 != *(char *)(param_1 + 8)) {
    return 0;
  }
  if (*(char *)(param_1 + 10) == '\0') {
    if (DAT_021d6710 == 0) {
      return 0;
    }
    if ((DAT_021d671c == 5) || (DAT_021d671c == 2)) {
      *param_2 = 9;
    }
    else {
      *param_2 = 5;
    }
    DAT_021d6710 = 0;
    DAT_021d671c = 0;
    param_2[1] = &DAT_021d6710;
  }
  else {
    if (*(char *)(param_1 + 10) != '\x01') {
      return 0;
    }
    DAT_021d6710 = 2;
    if (*(char *)(param_1 + 0xb) == DAT_021d7be0) {
      DAT_021d671c = 2;
      *param_2 = 7;
      DAT_021d6718 = *(int *)(param_1 + 0xc);
    }
    else {
      DAT_021d671c = 3;
      *param_2 = 6;
      if (*(byte *)(param_1 + 0xb) == 0) {
        DAT_021d6718 = 1;
      }
      else {
        DAT_021d6718 = 1 << (uint)*(byte *)(param_1 + 0xb);
      }
    }
    DAT_021d6715 = *(undefined1 *)(param_1 + 0xb);
    param_2[1] = &DAT_021d6710;
  }
  return 1;
}


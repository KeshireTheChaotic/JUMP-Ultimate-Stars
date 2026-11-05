
void FUN_0219bdec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0219bc20();
  if (iVar1 != 0) {
    return;
  }
  if (*(char *)(DAT_0214ccf8 + 0x53) != '\0') {
    *(undefined1 *)(DAT_0214ccf8 + 0x57) = 0;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21667cd);
    return;
  }
  switch(*(undefined1 *)(DAT_0214ccf8 + 0x5b)) {
  case 0:
    return;
  case 1:
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166b15);
    return;
  case 2:
    return;
  case 3:
    break;
  case 4:
    if (*(char *)(DAT_0214ccf8 + 0x51) == '\0') {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166f61);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166fc5);
    return;
  default:
    return;
  }
  if (*(char *)(DAT_0214ccf8 + 0x51) == '\0') {
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166df9);
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),0x2167181);
  return;
}


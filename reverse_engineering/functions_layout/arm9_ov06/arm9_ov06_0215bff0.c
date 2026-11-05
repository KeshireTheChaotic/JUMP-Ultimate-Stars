
void FUN_0215bff0(int param_1)

{
  int iVar1;
  
  *(char *)(param_1 + 0x119) = *(char *)(param_1 + 0x119) + -1;
  if (-1 < *(char *)(param_1 + 0x119)) {
    return;
  }
  iVar1 = FUN_0215dec8();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 2;
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}


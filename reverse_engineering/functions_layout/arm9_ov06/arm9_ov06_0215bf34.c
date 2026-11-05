
void FUN_0215bf34(int param_1)

{
  int iVar1;
  
  *(char *)(param_1 + 0x119) = *(char *)(param_1 + 0x119) + -1;
  if (-1 < *(char *)(param_1 + 0x119)) {
    return;
  }
  iVar1 = FUN_0215dec8();
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}


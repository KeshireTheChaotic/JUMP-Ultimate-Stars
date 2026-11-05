
void FUN_0215b4a0(void)

{
  int iVar1;
  int local_10 [4];
  
  local_10[0] = DAT_0216aa04;
  local_10[1] = DAT_0216aa08;
  iVar1 = FUN_02163600();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0216e778 + 0x2a) == '\0') {
      **(uint **)(DAT_0216e778 + 4) = **(uint **)(DAT_0216e778 + 4) & 0xc1fffcff;
      FUN_02157088(0x215b935);
      return;
    }
    FUN_02157038(local_10 + 2,0);
    (*(code *)local_10[local_10[2]])(DAT_0216e778 + 8);
    FUN_02157088(0x215b659);
  }
  return;
}



void FUN_0215b70c(void)

{
  int iVar1;
  int local_14 [5];
  
  local_14[0] = DAT_0216a9fc;
  local_14[1] = DAT_0216aa00;
  iVar1 = FUN_02155cc8();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0216e778 + 0x2a) == '\0') {
      FUN_02157088(0x215b659);
      return;
    }
    if (*(char *)(DAT_0216e778 + 0x2a) == '\x02') {
      FUN_02163654(6,3,1,0xffffffff,0);
      FUN_02157088(0x215b39d);
      return;
    }
    FUN_02157038(0,local_14 + 2);
    FUN_02163654(local_14[local_14[2]],2,1,0xffffffff,0);
    FUN_02157088(0x215b511);
  }
  return;
}


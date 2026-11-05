
void FUN_0215be94(void)

{
  int iVar1;
  
  iVar1 = FUN_02156bd8();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0216e77c + 0x15) == '\0') {
      FUN_02157088(0x215be21);
      return;
    }
    if (*(char *)(DAT_0216e77c + 0x15) == '\x02') {
      FUN_02163654(6,3,1,0xffffffff,0);
      FUN_02157088(0x215bb59);
      return;
    }
    FUN_02163654(0x47,2,1,0xffffffff,0);
    FUN_02157088(0x215bd15);
  }
  return;
}


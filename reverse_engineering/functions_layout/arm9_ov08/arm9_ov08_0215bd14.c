
void FUN_0215bd14(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_02163614();
  *(undefined1 *)(DAT_0216e77c + 0x15) = uVar1;
  if (*(char *)(DAT_0216e77c + 0x15) == '\0') {
    FUN_02162378(7);
  }
  else {
    if (*(char *)(DAT_0216e77c + 0x15) != '\x01') {
      return;
    }
    FUN_02162378(0xe);
  }
  FUN_02163624();
  FUN_02157088(0x215bca5);
  return;
}


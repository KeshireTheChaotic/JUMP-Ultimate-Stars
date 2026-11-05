
void FUN_0215b510(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_02163614();
  *(undefined1 *)(DAT_0216e778 + 0x2a) = uVar1;
  if (*(char *)(DAT_0216e778 + 0x2a) == '\0') {
    FUN_02162378(7);
  }
  else {
    if (*(char *)(DAT_0216e778 + 0x2a) != '\x01') {
      return;
    }
    FUN_02162378(0xe);
  }
  FUN_02163624();
  FUN_02157088(0x215b4a1);
  return;
}


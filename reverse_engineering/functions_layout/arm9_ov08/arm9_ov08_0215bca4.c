
void FUN_0215bca4(void)

{
  int iVar1;
  int local_20;
  undefined4 local_1c [4];
  undefined4 local_c;
  
  local_1c[0] = DAT_0216aa54;
  local_1c[1] = DAT_0216aa58;
  local_1c[2] = DAT_0216aa5c;
  local_1c[3] = DAT_0216aa60;
  local_c = DAT_0216aa64;
  iVar1 = FUN_02163600();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0216e77c + 0x15) == '\0') {
      **(uint **)(DAT_0216e77c + 4) = **(uint **)(DAT_0216e77c + 4) & 0xc1fffcff;
      FUN_02157088(0x215c1d5);
      return;
    }
    FUN_02157038(&local_20,0);
    (*(code *)local_1c[local_20])(DAT_0216e77c + 8);
    FUN_02157088(0x215be21);
  }
  return;
}



void FUN_0219dbe0(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(DAT_0214ccf8 + 0x1bd8) != 0) {
    return;
  }
  uVar1 = func_0x021cbf08();
  *(undefined4 *)(DAT_0214ccf8 + 0x1bd8) = uVar1;
  func_0x021cbf90(*(undefined4 *)(DAT_0214ccf8 + 0x1bd8));
  uVar2 = 0;
  do {
    if ((*(uint *)(DAT_0214ccf8 + 0x1bdc) & 1 << (uVar2 & 0xff)) != 0) {
      FUN_0219dde8(uVar2);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return;
}


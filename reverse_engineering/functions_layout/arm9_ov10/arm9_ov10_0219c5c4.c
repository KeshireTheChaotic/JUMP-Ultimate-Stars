
void FUN_0219c5c4(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_0217ecb8(uVar1 & 0xff,DAT_0214ccf8 + 0xdc + uVar1 * 0x200,0x200);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  return;
}


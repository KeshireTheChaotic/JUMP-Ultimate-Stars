
uint FUN_02068354(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(byte *)(param_1 + 0xd12) != 0) {
    do {
      if (-1 < *(char *)(param_1 + uVar1 * 4 + 0x447)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < *(byte *)(param_1 + 0xd12));
  }
  return 0;
}


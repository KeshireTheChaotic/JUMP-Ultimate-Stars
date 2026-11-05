
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02166c24(void)

{
  int iVar1;
  
  if (DAT_0216e84c == '\0') {
    if (((int)(_DAT_027fffa8 & 0x8000) >> 0xf != 0) && (iVar1 = FUN_02061600(0), iVar1 != 0)) {
      DAT_0216e84c = '\x01';
    }
  }
  else if (((int)(_DAT_027fffa8 & 0x8000) >> 0xf == 0) && (iVar1 = FUN_02061600(1), iVar1 != 0)) {
    DAT_0216e84c = 0;
    return;
  }
  return;
}


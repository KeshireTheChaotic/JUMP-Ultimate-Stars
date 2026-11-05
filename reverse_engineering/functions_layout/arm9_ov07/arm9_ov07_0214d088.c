
void FUN_0214d088(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  DAT_0216ace8 = 3;
  do {
    if ((((uint)DAT_0216acea & 1 << (uVar2 & 0xff)) != 0) &&
       (iVar1 = FUN_0214d51c(uVar2), iVar1 == 1)) {
      FUN_0214d5d0(uVar2);
      func_0x021bfd64(uVar2);
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x10);
  return;
}


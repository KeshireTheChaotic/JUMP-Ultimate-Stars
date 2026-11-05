
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215cd9c(void)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_0216e794 + 0x44) != '\0') {
    iVar1 = FUN_020507a8(DAT_0216e790,0x1d);
    iVar2 = FUN_02050750(DAT_0216e790,0x1d);
    _DAT_04000010 = (iVar2 + -0x33) * 0x10000 & 0x1ff0000;
    _DAT_04000018 = (iVar2 + -0x33 + (uint)(byte)(&DAT_0216aac4)[iVar1]) * 0x10000 & 0x1ff0000;
    *(undefined1 *)(DAT_0216e794 + 0x44) = 0;
  }
  return;
}


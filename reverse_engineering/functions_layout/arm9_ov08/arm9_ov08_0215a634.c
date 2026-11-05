
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215a634(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0216e774 + 0x56) != '\0') {
    iVar1 = FUN_02050750(DAT_0216e770,0x1c);
    _DAT_04000010 = (iVar1 + -0x32) * 0x10000 & 0x1ff0000;
    _DAT_04000018 = _DAT_04000010;
    *(undefined1 *)(DAT_0216e774 + 0x56) = 0;
  }
  return;
}


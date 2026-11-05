
uint FUN_02057aa8(void)

{
  uint uVar1;
  
  OS_DisableInterrupts();
  if (DAT_020acae8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(DAT_020acae8 + 0x14c);
  }
  OS_RestoreInterrupts();
  return uVar1 & 0xffff;
}



undefined2 FUN_02057adc(void)

{
  undefined2 uVar1;
  
  OS_DisableInterrupts();
  if (DAT_020acae8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(DAT_020acae8 + 0x150);
  }
  OS_RestoreInterrupts();
  return uVar1;
}


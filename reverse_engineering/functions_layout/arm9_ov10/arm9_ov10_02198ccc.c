
undefined4 FUN_02198ccc(void)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  uVar1 = 0;
  if (DAT_021aa094 != 0) {
    uVar1 = *(undefined4 *)(DAT_021aa094 + 0x2260);
  }
  OS_RestoreInterrupts();
  return uVar1;
}



undefined4 FUN_02198cf4(void)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (*(uint *)(DAT_021aa094 + 0x2260) < 0xe) {
    uVar1 = (*(code *)((int)&switchD_02198d28::switchdataD_02198d2a +
                      (int)(short)(&switchD_02198d28::switchdataD_02198d2a)
                                  [*(uint *)(DAT_021aa094 + 0x2260)]))();
    return uVar1;
  }
  OS_RestoreInterrupts(uVar1);
  return 1;
}



void FUN_027e01d8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = OS_DisableInterrupts();
  FUN_037fc140();
  FUN_037fc270(&DAT_0380bb6c,DAT_027f9818);
  uVar2 = FUN_027e8a4c();
  FUN_037fc270(uVar2,DAT_027f981c);
  FUN_037fc270(&DAT_0380bac8,DAT_027f9820);
  FUN_037fc108();
  OS_RestoreInterrupts(uVar1);
  return;
}


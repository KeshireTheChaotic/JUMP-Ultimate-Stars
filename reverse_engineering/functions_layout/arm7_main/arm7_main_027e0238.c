
void FUN_027e0238(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = OS_DisableInterrupts();
  FUN_037fc140();
  FUN_037fc270(&DAT_0380bac8,DAT_027f982c);
  uVar2 = FUN_027e8a4c();
  FUN_037fc270(uVar2,DAT_027f9828);
  FUN_037fc270(&DAT_0380bb6c,DAT_027f9824);
  FUN_037fc108();
  OS_RestoreInterrupts(uVar1);
  return;
}


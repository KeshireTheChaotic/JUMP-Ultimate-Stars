
void FUN_027e1dc8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  FUN_037fd40c(DAT_027f97e4,DAT_027f97e8,param_1);
  OS_RestoreInterrupts(uVar1);
  return;
}


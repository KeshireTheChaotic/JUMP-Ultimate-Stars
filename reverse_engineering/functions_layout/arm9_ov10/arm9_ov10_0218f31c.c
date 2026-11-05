
void FUN_0218f31c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0218f41c();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = OS_DisableInterrupts();
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_02053290(0);
  OS_RestoreInterrupts(uVar1);
  return;
}



void FUN_037fc42c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_037fc320();
  OS_RestoreInterrupts(uVar1);
  return;
}



void FUN_020532f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (*(int *)(param_1 + 100) != 2) {
    FUN_02053290(param_1 + 0x9c);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}


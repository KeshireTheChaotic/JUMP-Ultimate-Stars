
void FUN_020531dc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  *(undefined4 *)(param_1 + 100) = 1;
  FUN_020530c4();
  OS_RestoreInterrupts(uVar1);
  return;
}


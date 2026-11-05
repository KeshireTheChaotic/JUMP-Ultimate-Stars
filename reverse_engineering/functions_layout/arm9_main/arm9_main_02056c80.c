
void FUN_02056c80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  FUN_02057364(param_2);
  OS_RestoreInterrupts(uVar1);
  return;
}



void FUN_03804814(undefined4 param_1)

{
  undefined4 uVar1;
  
  while( true ) {
    uVar1 = OS_DisableInterrupts();
    if (DAT_0380a4f0 == 0) break;
    OS_RestoreInterrupts();
    FUN_037fc4dc(&DAT_0380a980);
  }
  FUN_038046a0(4);
  DAT_0380a988 = param_1;
  OS_RestoreInterrupts(uVar1);
  return;
}


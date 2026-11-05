
void FUN_0205dc20(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  FUN_0205e240(&DAT_020ae094,param_1);
  OS_RestoreInterrupts(uVar1);
  return;
}



undefined4 FUN_037fc178(undefined4 param_1)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  uVar1 = DAT_038082e4;
  DAT_038082e4 = param_1;
  OS_RestoreInterrupts();
  return uVar1;
}


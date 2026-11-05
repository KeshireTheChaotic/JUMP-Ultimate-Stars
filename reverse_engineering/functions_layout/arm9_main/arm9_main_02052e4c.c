
undefined4 FUN_02052e4c(undefined4 param_1)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  uVar1 = DAT_020aab80;
  DAT_020aab80 = param_1;
  OS_RestoreInterrupts();
  return uVar1;
}


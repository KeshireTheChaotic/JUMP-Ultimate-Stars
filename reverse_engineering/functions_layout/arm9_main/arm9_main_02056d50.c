
bool FUN_02056d50(uint param_1)

{
  bool bVar1;
  
  OS_DisableInterrupts();
  if (DAT_020aafa4 < param_1) {
    bVar1 = 0x7fffffff < param_1 - DAT_020aafa4;
  }
  else if (DAT_020aafa4 - param_1 < 0x80000000) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  OS_RestoreInterrupts();
  return bVar1;
}


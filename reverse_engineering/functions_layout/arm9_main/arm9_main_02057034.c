
void FUN_02057034(undefined4 *param_1)

{
  OS_DisableInterrupts();
  if (DAT_020aafac == (undefined4 *)0x0) {
    DAT_020aafa8 = param_1;
  }
  else {
    *DAT_020aafac = param_1;
  }
  DAT_020aafac = param_1;
  *param_1 = 0;
  OS_RestoreInterrupts();
  return;
}


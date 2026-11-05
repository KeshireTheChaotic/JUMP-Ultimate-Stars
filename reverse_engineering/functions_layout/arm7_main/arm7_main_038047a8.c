
void FUN_038047a8(int param_1)

{
  if (((DAT_0380a4f0 != 0) && (DAT_0380a4f4 == 4)) && (DAT_0380a988 == param_1)) {
    OS_DisableInterrupts();
    DAT_0380a4f4 = 5;
    DAT_0380a4f0 = 0;
    DAT_0380a988 = 0;
    OS_RestoreInterrupts();
    FUN_037fc460(&DAT_0380a980);
  }
  return;
}


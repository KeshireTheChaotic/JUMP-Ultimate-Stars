
int FUN_037fdd54(int param_1)

{
  OS_DisableInterrupts();
  if (param_1 < DAT_0380847c) {
    DAT_03808480 = DAT_03808480 + 1;
  }
  DAT_0380847c = param_1;
  OS_RestoreInterrupts();
  return DAT_03808480;
}


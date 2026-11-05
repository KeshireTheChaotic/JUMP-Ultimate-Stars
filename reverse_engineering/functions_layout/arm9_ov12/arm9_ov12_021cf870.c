
void FUN_021cf870(undefined4 *param_1)

{
  DAT_021d6728 = OS_DisableInterrupts();
  *param_1 = DAT_021d672c;
  DAT_021d672c = param_1;
  OS_RestoreInterrupts(DAT_021d6728);
  return;
}



void FUN_021ce9f4(int param_1)

{
  DAT_021d66ac = OS_DisableInterrupts();
  *(undefined4 *)(&DAT_021d66c8 + param_1 * 4) = 0;
  (&DAT_021d66b0)[param_1] = *(undefined4 *)(&DAT_021d66c8 + param_1 * 4);
  (&DAT_021d66bc)[param_1] = 0;
  OS_RestoreInterrupts(DAT_021d66ac);
  return;
}


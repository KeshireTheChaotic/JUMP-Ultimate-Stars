
undefined4 FUN_021ce83c(int param_1)

{
  undefined4 uVar1;
  
  DAT_021d66ac = OS_DisableInterrupts();
  if ((&DAT_021d66b0)[param_1] != 0) {
    uVar1 = *(undefined4 *)((&DAT_021d66b0)[param_1] + 8);
    (&DAT_021d66bc)[param_1] = (&DAT_021d66bc)[param_1] + -1;
    (&DAT_021d66b0)[param_1] = uVar1;
    if ((&DAT_021d66b0)[param_1] != 0) {
      *(undefined4 *)((&DAT_021d66b0)[param_1] + 4) = 0;
    }
  }
  OS_RestoreInterrupts(DAT_021d66ac);
  return (&DAT_021d66bc)[param_1];
}


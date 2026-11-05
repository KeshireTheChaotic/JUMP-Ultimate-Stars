
void FUN_021ce9bc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_021ce884();
  while (iVar1 != 0) {
    FUN_021ce83c(param_1);
    FUN_021cf870(iVar1);
    iVar1 = FUN_021ce884(param_1);
  }
  (&DAT_021d66bc)[param_1] = 0;
  return;
}



void FUN_021ce6d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_021ce624();
  while (iVar1 != 0) {
    FUN_021ce5d0(iVar1);
    FUN_021cf870(iVar1);
    iVar1 = FUN_021ce624(param_1);
  }
  (&DAT_021d66a0)[param_1] = 0;
  return;
}


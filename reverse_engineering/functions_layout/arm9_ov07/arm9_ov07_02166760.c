
void FUN_02166760(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0219bc20();
  if (iVar1 == 0) {
    iVar1 = func_0x02175b84();
    if ((iVar1 == 0) || (iVar1 == 1)) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x21667cd);
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    func_0x0219a588();
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21667cd);
  }
  return;
}


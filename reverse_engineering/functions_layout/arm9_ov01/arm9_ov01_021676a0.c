
void FUN_021676a0(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x95) = 1;
    FUN_02087268();
    FUN_02086c94();
    FUN_021665b4(param_1);
  }
  else {
    iVar1 = FUN_020876f8();
    if ((iVar1 != 0) && (iVar1 = FUN_02165cb8(*(undefined4 *)(param_1 + 0x7c)), iVar1 != 0)) {
      FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 8) + 4),0x2166559);
      return;
    }
  }
  return;
}


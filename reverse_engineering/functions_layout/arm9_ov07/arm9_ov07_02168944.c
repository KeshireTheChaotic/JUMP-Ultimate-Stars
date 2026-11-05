
void FUN_02168944(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02168674(0x3c);
  FUN_020876ac();
  FUN_0208712c();
  *(undefined4 *)(iVar1 + 0x30) = 1;
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}


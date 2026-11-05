
void FUN_021622d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  DAT_020afeb9 = 0;
  uVar1 = FUN_0214dd50();
  FUN_0214dd6c(uVar1,5);
  *(undefined1 *)(iVar2 + 0xa0) = 1;
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_021621e4);
  return;
}


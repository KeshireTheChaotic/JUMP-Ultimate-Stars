
void FUN_02159f38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_021574e8(*(undefined4 *)(iVar2 + 0xcc));
  if (iVar1 == 0) {
    return;
  }
  FUN_0207367c(7);
  FUN_02158f6c(*(undefined4 *)(iVar2 + 0xf0));
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159f7c);
  return;
}



void FUN_02159a5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0215431c(*(undefined4 *)(iVar2 + 0xdc));
  if (iVar1 == 0) {
    return;
  }
  FUN_02153b6c(*(undefined4 *)(iVar2 + 0xd4),1);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0xe0) + 4),FUN_0215a034);
  FUN_02154368(*(undefined4 *)(iVar2 + 0xdc));
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159ab8);
  return;
}


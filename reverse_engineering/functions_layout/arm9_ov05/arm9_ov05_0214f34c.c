
void FUN_0214f34c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0215deb8(*(undefined4 *)(iVar2 + 0x10));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x28) == 0) {
    FUN_02150128(*(undefined4 *)(iVar2 + 0x14),1);
  }
  else if (*(int *)(iVar2 + 0x28) == 1) {
    FUN_02159b40(*(undefined4 *)(iVar2 + 0x18),1);
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f3b4);
  return;
}


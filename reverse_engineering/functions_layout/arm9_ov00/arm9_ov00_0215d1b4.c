
void FUN_0215d1b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073854();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02073868();
  if (iVar1 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d6c4);
  FUN_0214f7a4(iVar2 + 0x6c);
  FUN_0214f7a4(iVar2 + 200);
  *(undefined2 *)(iVar2 + 0x1b6) = 0;
  return;
}



void FUN_02168858(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar2 + 0x28) == 0) {
    FUN_02073ebc(3,1);
    do {
      iVar1 = FUN_0207382c();
    } while (iVar1 == 0);
  }
  FUN_02168674(2);
  FUN_02168350(iVar2);
  return;
}


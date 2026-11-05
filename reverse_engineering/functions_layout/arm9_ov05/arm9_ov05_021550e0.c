
void FUN_021550e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073840();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0x469) = 1;
  }
  return;
}


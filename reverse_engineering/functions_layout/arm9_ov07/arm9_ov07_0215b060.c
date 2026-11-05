
void FUN_0215b060(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar2 + 0x72) = 1;
  *(undefined1 *)(iVar2 + 0x73) = 1;
  thunk_FUN_0208c17c();
  uVar1 = FUN_0214dd50();
  FUN_0214dd60(uVar1,1);
  FUN_0215b478(iVar2);
  return;
}


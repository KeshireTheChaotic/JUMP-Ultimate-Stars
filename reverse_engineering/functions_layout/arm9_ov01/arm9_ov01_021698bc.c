
void FUN_021698bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_020888e4();
  if (iVar1 != 0) {
    FUN_02169684();
    *(undefined4 *)(iVar2 + 0x50) = 2;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21699c5);
    return;
  }
  iVar1 = thunk_FUN_0208c51c();
  if ((iVar1 != 0) && (iVar1 = func_0x0219d794(), iVar1 == 0)) {
    *(undefined1 *)(iVar2 + 0x5c) = 1;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169a39);
  }
  return;
}


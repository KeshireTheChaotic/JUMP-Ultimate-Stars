
void FUN_021697a4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  iVar1 = FUN_0208678c();
  if (iVar1 != 0) {
    FUN_0208678c();
    iVar1 = FUN_020869b8();
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169781);
      return;
    }
  }
  iVar1 = FUN_02087770();
  if (iVar1 == 2) {
    iVar1 = FUN_020888e4();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + 0x50) = 2;
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02169908);
      return;
    }
    iVar1 = thunk_FUN_0208c51c();
    if ((iVar1 != 0) && (iVar1 = func_0x0219d794(), iVar1 != 0)) {
      *(undefined4 *)(iVar2 + 0x50) = 1;
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169819);
    }
  }
  return;
}


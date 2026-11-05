
void FUN_02169a38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar2 + 0x58) == 0) {
    *(undefined2 *)(iVar2 + 0x3a) = 0;
    FUN_02169b08(iVar2);
    iVar1 = FUN_020888e4();
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169999);
      return;
    }
    iVar1 = thunk_FUN_0208c51c();
    if ((iVar1 != 0) && (iVar1 = func_0x0219d794(), iVar1 != 0)) {
      *(undefined4 *)(iVar2 + 0x50) = 1;
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169891);
      return;
    }
    if (*(char *)(iVar2 + 0x34) == '\0') {
      func_0x021bace0(*(undefined4 *)(iVar2 + 0x30));
      if (*(code **)(iVar2 + 0x28) == (code *)0x0) {
        func_0x021b65cc();
      }
      else {
        (**(code **)(iVar2 + 0x28))(*(undefined4 *)(iVar2 + 0x20));
      }
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21697a5);
  }
  return;
}



void FUN_021586e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  while (*(char *)(iVar2 + 0x6c) == '\0') {
    (*DAT_020a0e18)();
  }
  func_0x021b65cc();
  FUN_02028384(*(undefined4 *)(param_1 + 4),0x2158735);
  return;
}


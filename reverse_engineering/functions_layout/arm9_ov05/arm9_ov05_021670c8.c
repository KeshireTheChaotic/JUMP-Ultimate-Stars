
void FUN_021670c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073840();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(&DAT_02171554 + *(int *)(iVar2 + 0x24) * 0x10) != (code *)0x0) {
    (**(code **)(&DAT_02171554 + *(int *)(iVar2 + 0x24) * 0x10))(iVar2);
  }
  (**(code **)(&DAT_0217154c + *(int *)(iVar2 + 0x24) * 0x10))(iVar2);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if (*(code **)(&DAT_02171558 + *(int *)(iVar2 + 0x24) * 0x10) != (code *)0x0) {
    (**(code **)(&DAT_02171558 + *(int *)(iVar2 + 0x24) * 0x10))(iVar2);
  }
  (**(code **)(&DAT_02171550 + *(int *)(iVar2 + 0x24) * 0x10))(iVar2);
  if (*(char *)(iVar2 + 0x40) == '\0') {
    FUN_02073ef0(6);
  }
  else {
    *(undefined1 *)(iVar2 + 0x40) = 0;
    FUN_02073ef0(2);
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_021671ac);
  return;
}



void FUN_0214f7ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 9) != '\0') {
    iVar1 = FUN_02073fe4();
    if (iVar1 == 0) {
      return;
    }
    *(undefined1 *)(iVar2 + 9) = 0;
  }
  FUN_02087390();
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0214f800);
  *(undefined1 *)(iVar2 + 8) = 1;
  FUN_02087360();
  return;
}


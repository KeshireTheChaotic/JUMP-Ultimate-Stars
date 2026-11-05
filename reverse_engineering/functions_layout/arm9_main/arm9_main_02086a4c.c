
void FUN_02086a4c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0x24) == '\0') {
    iVar1 = FUN_020876f8();
    if ((iVar1 == 0) || (iVar1 = FUN_020882a8(), iVar1 == 0)) {
      iVar1 = FUN_020882c4();
      if ((iVar1 != 0) && (FUN_02088290(), *(char *)(iVar2 + 0x23) == '\0')) {
        *(undefined1 *)(iVar2 + 0x20) = 1;
        FUN_02028384(*(undefined4 *)(param_1 + 4),0x2086a11);
        FUN_020868a8(iVar2);
      }
    }
    else {
      FUN_02088278();
      if (*(char *)(iVar2 + 0x23) == '\0') {
        *(undefined1 *)(iVar2 + 0x20) = 1;
        FUN_02086998(iVar2);
        *(undefined1 *)(iVar2 + 0x21) = 0;
        FUN_02028384(*(undefined4 *)(param_1 + 4),0x2086acd);
        return;
      }
    }
  }
  return;
}


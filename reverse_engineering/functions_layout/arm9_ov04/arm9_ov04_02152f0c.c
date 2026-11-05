
void FUN_02152f0c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0xbd) != '\0') {
    DAT_020a0f10 = DAT_020a0f10 + 1;
  }
  if (*(char *)(iVar2 + 0xd4) == '\0') {
    return;
  }
  iVar1 = FUN_020882c4();
  if (iVar1 == 0) {
    return;
  }
  FUN_02088290();
  FUN_02086c94();
  FUN_020282f4(*(undefined4 *)(*(int *)(iVar2 + 4) + 4));
  FUN_02152cc4(iVar2,0);
  return;
}


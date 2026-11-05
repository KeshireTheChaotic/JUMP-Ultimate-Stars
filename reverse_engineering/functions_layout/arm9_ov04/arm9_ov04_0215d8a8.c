
void FUN_0215d8a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar1 = FUN_020882c4();
  if (iVar1 == 0) {
    return;
  }
  FUN_02088290();
  FUN_02086c94();
  FUN_0215d738(uVar2);
  return;
}


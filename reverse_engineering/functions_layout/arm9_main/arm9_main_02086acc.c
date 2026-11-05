
void FUN_02086acc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    FUN_02087198();
    FUN_02026fb8(param_1);
    FUN_02026fb8(param_1);
  }
  FUN_020871f4();
  FUN_02028384(*(undefined4 *)(param_1 + 4),0x2086a11);
  FUN_020868a8(uVar2);
  return;
}



void FUN_02153d70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x50) != 0) {
    FUN_02168274();
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_02153efc);
  return;
}


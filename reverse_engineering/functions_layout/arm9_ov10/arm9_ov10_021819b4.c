
int FUN_021819b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_0217faa8(*param_1,*(undefined4 *)(DAT_021a7d24 + 0x498),&DAT_021a4d38);
  uVar2 = FUN_0217faa8(*param_2,*(undefined4 *)(DAT_021a7d24 + 0x498),&DAT_021a4d38);
  iVar3 = thunk_FUN_0200aae8(uVar1,uVar2);
  if (*(int *)(DAT_021a7d24 + 0x49c) == 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


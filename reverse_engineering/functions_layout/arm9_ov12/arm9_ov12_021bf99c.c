
void FUN_021bf99c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_021d51b8 == 0) {
    DAT_021d51b8 = param_1;
  }
  else {
    iVar3 = *(int *)(DAT_021d51b8 + 0x4bc);
    iVar2 = DAT_021d51b8;
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x4bc);
    }
    *(int *)(iVar2 + 0x4bc) = param_1;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  return;
}


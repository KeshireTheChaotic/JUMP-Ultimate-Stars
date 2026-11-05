
int FUN_02177f7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_021a75a4 + 0x18);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_02177558();
  iVar2 = FUN_02069718(uVar1,iVar2 + param_1 * 0xc);
  if ((iVar2 == 0) || (iVar2 == -1)) {
    iVar2 = 0;
  }
  return iVar2;
}


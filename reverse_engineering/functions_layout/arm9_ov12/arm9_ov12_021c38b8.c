
undefined4 FUN_021c38b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0xa4;
  uVar2 = 1;
  if ((*(char *)(iVar1 + 0x20) == '\0') && (*(char *)(iVar1 + 0x48) == '\0')) {
    uVar2 = 0;
  }
  return uVar2;
}


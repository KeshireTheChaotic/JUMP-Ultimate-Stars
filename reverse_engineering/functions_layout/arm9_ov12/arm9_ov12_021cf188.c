
undefined4 FUN_021cf188(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_2 + 6);
  if (*(char *)(param_2 + 4) == '\0') {
    uVar2 = uVar2 + 5;
  }
  if (10 < uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0) {
    return 0xffffffff;
  }
  if (DAT_021d7bf0 == 1) {
    cVar1 = *(char *)(uVar2 + *(int *)(param_1 + 0xc) * 0xb + 0x21d0444);
  }
  else {
    cVar1 = *(char *)(uVar2 + *(int *)(param_1 + 0xc) * 0xb + 0x21d0488);
  }
  iVar3 = (int)cVar1;
  if (iVar3 == -1) {
    return 1;
  }
  if (iVar3 == -2) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return 1;
}


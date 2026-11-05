
undefined4 FUN_02150830(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  iVar2 = 0;
  while (-1 < iVar3) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x10) + iVar3);
    iVar3 = iVar3 + -1;
    if (*pcVar1 == '\t') {
      iVar2 = iVar2 + 1;
    }
  }
  if ((iVar2 < 1) || (iVar2 != param_2)) {
    return 0;
  }
  return 1;
}


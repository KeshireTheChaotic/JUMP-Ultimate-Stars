
int FUN_0214ffa8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xca) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
      iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4 + 0x1c);
    }
    iVar2 = (uint)*(byte *)(param_1 + 0xc6) - iVar2;
    if (iVar2 < 0) {
      return 0;
    }
  }
  return iVar2;
}


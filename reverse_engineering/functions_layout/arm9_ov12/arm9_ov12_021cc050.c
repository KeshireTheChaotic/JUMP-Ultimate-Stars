
void FUN_021cc050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 + 1) * 0x1000000;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (iVar1 >> 0x18 == (int)*(char *)(param_1 + iVar2 + 0x68)) {
      return;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return;
    }
    if (*(char *)(param_1 + iVar2 + 0x68) == '\0') break;
    iVar2 = iVar2 + 1;
  }
  *(char *)(param_1 + iVar2 + 0x68) = (char)((uint)iVar1 >> 0x18);
  return;
}


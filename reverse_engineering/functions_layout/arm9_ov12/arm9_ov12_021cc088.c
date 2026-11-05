
void FUN_021cc088(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (param_2 + 1) * 0x1000000;
  iVar3 = iVar2 >> 0x18;
  iVar4 = 0;
  cVar1 = -(char)((uint)iVar2 >> 0x18);
  while( true ) {
    if (2 < iVar4) {
      iVar2 = 0;
      while( true ) {
        if (2 < iVar2) {
          return;
        }
        if (*(char *)(param_1 + iVar2 + 0x68) == '\0') break;
        iVar2 = iVar2 + 1;
      }
      *(char *)(param_1 + iVar2 + 0x68) = cVar1;
      return;
    }
    iVar2 = (int)*(char *)(param_1 + iVar4 + 0x68);
    if (iVar3 == iVar2) {
      *(char *)(param_1 + iVar4 + 0x68) = cVar1;
      return;
    }
    if (-iVar2 == iVar3) break;
    iVar4 = iVar4 + 1;
  }
  return;
}


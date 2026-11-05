
void FUN_0217335c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = (&DAT_021810ec)[iVar2];
    if (cVar1 < '\0') {
      return;
    }
    if (((param_2 == 0) || ((cVar1 != '\t' && cVar1 != '\n') && cVar1 != '\v')) &&
       (cVar1 == *(char *)(*(int *)(param_1 + 0x20) + 0x18))) break;
    iVar2 = iVar2 + 1;
  }
  return;
}


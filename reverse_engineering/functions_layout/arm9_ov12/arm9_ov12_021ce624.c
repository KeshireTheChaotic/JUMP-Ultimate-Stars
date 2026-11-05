
int FUN_021ce624(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_021d6698;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x11) == param_1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar1;
}


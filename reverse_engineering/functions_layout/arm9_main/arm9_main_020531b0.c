
void FUN_020531b0(void)

{
  int iVar1;
  
  iVar1 = DAT_020aab7c;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 100) == 1) break;
    iVar1 = *(int *)(iVar1 + 0x68);
  }
  return;
}


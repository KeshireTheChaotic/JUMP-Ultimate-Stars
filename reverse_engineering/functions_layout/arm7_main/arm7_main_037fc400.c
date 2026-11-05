
void FUN_037fc400(void)

{
  int iVar1;
  
  iVar1 = DAT_038082e0;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x48) == 1) break;
    iVar1 = *(int *)(iVar1 + 0x4c);
  }
  return;
}


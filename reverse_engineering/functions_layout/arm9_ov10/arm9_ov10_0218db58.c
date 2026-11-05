
void FUN_0218db58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (((iVar1 < 0xfe) && (0 < param_2)) && (param_2 < 0xff)) {
    *(int *)(param_1 + 0x100) = iVar1 + 1;
    *(char *)(param_1 + iVar1) = (char)param_2;
  }
  return;
}


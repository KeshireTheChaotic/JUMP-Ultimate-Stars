
void FUN_0208c080(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_0214ccec + 0x48) == '\0') {
    return;
  }
  DAT_02093be4 = 0x208a5c1;
  FUN_0208a37c();
  if ((param_1 != 0) && (iVar1 = thunk_FUN_02057adc(), iVar1 == 0)) {
    FUN_0208a250(0x25,0xffff);
  }
  *(undefined1 *)(DAT_0214ccec + 0x48) = 0;
  return;
}


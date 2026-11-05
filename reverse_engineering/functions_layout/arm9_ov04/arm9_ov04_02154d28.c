
void FUN_02154d28(int param_1,short param_2)

{
  char cVar1;
  
  if (param_1 == 0) {
    return;
  }
  cVar1 = FUN_0200d12c(param_2 * 0x3c + 999,1000);
  if (cVar1 < '\0') {
    cVar1 = '\0';
  }
  if ('<' < cVar1) {
    cVar1 = '<';
  }
  *(char *)(param_1 + 0xf5) = cVar1;
  return;
}


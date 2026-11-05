
undefined4 FUN_0207227c(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 * 0x40 + param_1 * 0xca4U + 0x20b414e);
  if (cVar1 == '\x01') {
    return 0;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}


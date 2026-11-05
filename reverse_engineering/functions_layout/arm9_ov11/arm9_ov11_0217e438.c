
bool FUN_0217e438(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x7c) == '\0';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x7f);
  }
  return !bVar1 || param_1 != 0;
}


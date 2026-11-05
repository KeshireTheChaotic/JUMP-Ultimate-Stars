
bool FUN_02156944(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x31) != '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return bVar1;
}


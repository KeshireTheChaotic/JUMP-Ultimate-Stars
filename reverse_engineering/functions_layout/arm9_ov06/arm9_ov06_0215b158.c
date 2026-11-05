
bool FUN_0215b158(int param_1)

{
  bool bVar1;
  
  bVar1 = (*(ushort *)(param_1 + 0x14) & 1) == 0;
  if (bVar1) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 1;
  }
  return bVar1;
}


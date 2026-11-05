
bool FUN_0207fbb4(uint param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x18) & 1) != 0;
  if (bVar1) {
    param_1 = (uint)*(ushort *)(param_1 + 0xc);
  }
  return bVar1 && param_1 != 0;
}


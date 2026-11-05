
bool FUN_0215b440(uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x18) == '\b';
  if (bVar1) {
    param_1 = (uint)*(ushort *)(param_1 + 0x100);
  }
  return bVar1 && param_1 == param_2;
}


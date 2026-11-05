
bool FUN_02179358(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 7; *(byte *)(param_1 + 0xc) < *(byte *)(uVar1 * 2 + 0x2181204);
      uVar1 = uVar1 - 1 & 0xff) {
  }
  return (*(uint *)(param_1 + 0x38) >> 1 & 0xff) <= (uint)*(byte *)(uVar1 * 2 + 0x2181205);
}


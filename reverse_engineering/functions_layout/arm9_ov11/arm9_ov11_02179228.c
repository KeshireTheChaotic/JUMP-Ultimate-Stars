
bool FUN_02179228(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 7; *(byte *)(param_1 + 0xf) < *(byte *)(uVar1 * 2 + 0x21811f4);
      uVar1 = uVar1 - 1 & 0xff) {
  }
  return (*(uint *)(param_1 + 0x38) >> 1 & 0xff) <= (uint)*(byte *)(uVar1 * 2 + 0x21811f5);
}


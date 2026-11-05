
bool FUN_02179278(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x12);
  if (0x1f < uVar1) {
    uVar1 = 0x1f;
  }
  return uVar1 < (*(uint *)(param_1 + 0x38) >> 3 & 0x1f);
}


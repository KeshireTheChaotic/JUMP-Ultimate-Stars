
bool FUN_021792fc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 3; *(byte *)(param_1 + 0x10) < *(byte *)(uVar1 * 2 + 0x21811ec);
      uVar1 = uVar1 - 1 & 0xff) {
  }
  return (*(uint *)(param_1 + 0x38) >> 2 & 0xff) <=
         *(uint *)(&DAT_0218190c + (uint)*(byte *)(uVar1 * 2 + 0x21811ed) * 4);
}


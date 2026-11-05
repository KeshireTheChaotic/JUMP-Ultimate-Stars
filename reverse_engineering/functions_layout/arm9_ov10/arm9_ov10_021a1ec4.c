
void FUN_021a1ec4(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_021a1fc8();
  if (uVar1 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xef | (byte)((param_2 & 1) << 4);
  FUN_021782b4(param_1,0x50);
  return;
}


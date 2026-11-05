
void FUN_021a1e68(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_021a1f98();
  if (uVar1 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xfb | (byte)((param_2 & 1) << 2);
  FUN_021782b4(param_1,0x50);
  return;
}


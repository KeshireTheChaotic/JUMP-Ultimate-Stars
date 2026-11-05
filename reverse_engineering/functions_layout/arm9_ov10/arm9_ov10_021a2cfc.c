
bool FUN_021a2cfc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return true;
  }
  uVar1 = FUN_0217668c(*(int *)(param_1 + 0x28));
  uVar2 = thunk_FUN_021766fc();
  return (uVar1 & ~(1 << (uVar2 & 0xff)) & 0xf) == (uint)*(byte *)(param_1 + 0x33);
}


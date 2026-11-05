
bool FUN_021a2d44(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_021766fc();
  if (param_2 == uVar1) {
    return true;
  }
  return ((uint)*(byte *)(param_1 + 0x30) & 1 << (param_2 & 0xff)) != 0;
}


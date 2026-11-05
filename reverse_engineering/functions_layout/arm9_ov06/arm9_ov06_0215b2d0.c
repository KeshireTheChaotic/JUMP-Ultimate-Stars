
void FUN_0215b2d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x1e9);
  *(byte *)(param_1 + 0x1e9) = bVar1 + 1;
  if (bVar1 < 9) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_0215b348(param_1,0x230004,0,param_4,param_4);
  return;
}


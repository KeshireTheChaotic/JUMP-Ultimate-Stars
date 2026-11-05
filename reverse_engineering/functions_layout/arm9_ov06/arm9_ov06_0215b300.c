
void FUN_0215b300(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x1e9);
  *(byte *)(param_1 + 0x1e9) = bVar1 + 1;
  if (bVar1 < 9) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_0215b348(param_1,0x230006);
  FUN_0215b2b0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x20);
  return;
}


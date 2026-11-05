
void FUN_0217fba0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x95);
  *(byte *)(param_1 + 0x95) = bVar1 + 1;
  if (bVar1 < 0x78) {
    return;
  }
  FUN_0217f890();
  *(undefined1 *)(param_1 + 0x105) = 1;
  return;
}


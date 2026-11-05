
undefined4 FUN_02068aa0(int param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0xd15) = 0;
  bVar1 = *(byte *)(param_1 + 0xd0b);
  *(byte *)(param_1 + 0xd0b) = bVar1 & 0xf | ((bVar1 >> 4) + 1) * '\x10';
  FUN_02068600();
  *(undefined1 *)(param_1 + 0xd11) = 1;
  return 3;
}


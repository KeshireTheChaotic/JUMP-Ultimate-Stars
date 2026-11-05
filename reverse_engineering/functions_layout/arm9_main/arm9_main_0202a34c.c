
void FUN_0202a34c(int param_1,int param_2)

{
  byte bVar1;
  
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x24) | *(byte *)(param_2 + 0x25);
  bVar1 = *(byte *)(param_1 + 0x24);
  *(byte *)(param_1 + 0x24) = bVar1 & 0xf7;
  if ((bVar1 & 0x17) >> 4 != 0) {
    (**(code **)(param_1 + 0x2c))();
  }
  (**(code **)(param_1 + 0x28))(param_1,param_2);
  return;
}


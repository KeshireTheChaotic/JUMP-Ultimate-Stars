
void FUN_0207b2d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (param_1 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x18);
  if ((bVar1 & 0x20) == 0) {
    return;
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x18) = bVar1 & 0xfe;
    FUN_0207bc2c(*(undefined4 *)(param_1 + 0x20),param_1,param_1,param_4,param_4);
    return;
  }
  *(byte *)(param_1 + 0x18) = bVar1 | 1;
  return;
}


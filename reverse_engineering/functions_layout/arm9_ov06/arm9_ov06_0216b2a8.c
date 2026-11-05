
bool FUN_0216b2a8(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x18);
  *(short *)(param_1 + 0x18) = sVar1 + -1;
  return -1 < sVar1;
}


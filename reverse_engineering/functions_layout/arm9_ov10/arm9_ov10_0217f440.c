
void FUN_0217f440(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + 0x14);
  *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xc3;
  if (param_4 == 0) {
    *pbVar1 = *pbVar1 | 4;
  }
  else if (param_4 == 1) {
    *pbVar1 = *pbVar1 | 8;
  }
  else if (param_4 == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 4)) {
    FUN_0217f518();
    return;
  }
  if (param_3 == 0) {
    FUN_0217f6ac(param_1 + 0x14);
    return;
  }
  FUN_0217f694(param_1 + 0x14);
  return;
}


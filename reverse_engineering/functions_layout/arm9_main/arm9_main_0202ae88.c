
void FUN_0202ae88(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(byte *)(param_1 + 0x25) & 0x1f) >> 4 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x25) & 7) == 0) {
    FUN_0201a12c(param_1 + 0x54,param_1 + 0x3c,param_1,param_4,param_4);
    return;
  }
  FUN_0201a12c(param_1 + 0x54,param_2 + 0x54,param_1,param_4,param_4);
  return;
}



void FUN_0207b22c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x18) & 0x20) == 0) {
    return;
  }
  FUN_02051890(param_2,param_1 + 0x3c + param_3 * 8,8,param_1 + 0x3c,param_4);
  return;
}


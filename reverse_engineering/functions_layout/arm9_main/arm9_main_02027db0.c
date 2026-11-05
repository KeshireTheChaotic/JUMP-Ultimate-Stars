
void FUN_02027db0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x34) == param_2) {
    return;
  }
  FUN_02037c24(*(int *)(param_1 + 0x34) + 0x23c,param_1 + 0x20,param_3,param_4,param_4);
  *(int *)(param_1 + 0x34) = param_2;
  FUN_02037b98(param_2 + 0x23c,param_1 + 0x20);
  return;
}



void FUN_02043720(int param_1,uint param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 4) = param_2 & 0xffff;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}


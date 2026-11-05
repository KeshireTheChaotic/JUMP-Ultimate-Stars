
void FUN_0204b8dc(int *param_1,int param_2)

{
  param_1[0xc] = param_2;
  if (*(byte *)(param_1 + 9) != (*(byte *)(param_1 + 9) | 2)) {
    (**(code **)(*param_1 + 0x18))();
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x32;
  return;
}


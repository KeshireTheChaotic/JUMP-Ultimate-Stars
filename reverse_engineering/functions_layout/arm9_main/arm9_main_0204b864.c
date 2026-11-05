
void FUN_0204b864(int *param_1,int *param_2)

{
  param_1[0xe] = *param_2;
  if (*(byte *)(param_1 + 9) != (*(byte *)(param_1 + 9) | 4)) {
    (**(code **)(*param_1 + 0x18))();
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x34;
  return;
}


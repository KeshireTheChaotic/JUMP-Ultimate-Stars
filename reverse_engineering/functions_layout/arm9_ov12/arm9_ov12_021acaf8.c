
void FUN_021acaf8(int *param_1,uint param_2)

{
  if ((uint)*(byte *)(param_1 + 9) != (*(byte *)(param_1 + 9) | param_2)) {
    (**(code **)(*param_1 + 0x18))();
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | (byte)param_2 | 0x30;
  return;
}


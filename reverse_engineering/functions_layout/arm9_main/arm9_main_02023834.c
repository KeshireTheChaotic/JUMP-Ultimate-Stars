
void FUN_02023834(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x3c) == (param_2 | 0x80000000)) {
    return;
  }
  *(uint *)(param_1 + 0x3c) = param_2 | 0x80000000;
  FUN_02027edc();
  return;
}


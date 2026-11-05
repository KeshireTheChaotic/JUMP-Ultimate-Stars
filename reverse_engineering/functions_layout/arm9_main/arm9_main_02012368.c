
void FUN_02012368(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x28) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x28) = (char)param_2;
  FUN_020123d8();
  return;
}



void FUN_02041f60(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x431) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x431) = (char)param_2;
  FUN_02041e08();
  return;
}


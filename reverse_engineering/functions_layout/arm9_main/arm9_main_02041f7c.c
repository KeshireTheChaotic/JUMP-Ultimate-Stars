
void FUN_02041f7c(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x432) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x432) = (char)param_2;
  FUN_02041e08();
  return;
}



void FUN_020314f0(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0x7f | param_2 << 7;
  if (*(char *)(param_1 + 0x29) < '\0') {
    return;
  }
  FUN_02027edc();
  return;
}


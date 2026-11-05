
void FUN_020275d4(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x7f | param_2 << 7;
  return;
}


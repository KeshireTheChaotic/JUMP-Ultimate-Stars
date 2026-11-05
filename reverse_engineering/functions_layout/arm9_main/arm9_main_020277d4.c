
void FUN_020277d4(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 0x1f) >> 4 == 0) {
    return;
  }
  FUN_020347fc();
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xee;
  return;
}


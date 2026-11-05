
void FUN_020277a0(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 0x1f) >> 4 == 0) {
    FUN_020347bc();
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe | 0x11;
    return;
  }
  return;
}


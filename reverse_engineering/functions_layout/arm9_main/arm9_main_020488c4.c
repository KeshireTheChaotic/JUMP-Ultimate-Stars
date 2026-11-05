
void FUN_020488c4(int param_1)

{
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x908) == 0) {
    *(uint *)(param_1 + 0x20) =
         *(uint *)(param_1 + 0xc) >> 0xc & 0x1ff |
         (*(uint *)(param_1 + 0x10) >> 0xc & 0x1ff) << 0x10;
    return;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0xc) >> 4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x10) >> 4;
  return;
}


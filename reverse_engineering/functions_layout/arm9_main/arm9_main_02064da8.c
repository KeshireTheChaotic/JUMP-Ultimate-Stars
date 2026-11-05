
uint FUN_02064da8(int param_1)

{
  if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
    return *(uint *)(param_1 + 8);
  }
  return *(uint *)(param_1 + 0x1c) & 0xffffff;
}


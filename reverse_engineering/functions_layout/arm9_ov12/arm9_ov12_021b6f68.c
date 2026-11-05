
uint FUN_021b6f68(int param_1)

{
  return *(uint *)(param_1 + 0x78) | *(uint *)(param_1 + 0x80) & ~*(uint *)(param_1 + 0x84);
}


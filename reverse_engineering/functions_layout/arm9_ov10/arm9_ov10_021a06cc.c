
uint FUN_021a06cc(int param_1,int param_2)

{
  return *(uint *)(param_1 + param_2 * 4 + 0x870) >> 0x10 & 0xff;
}


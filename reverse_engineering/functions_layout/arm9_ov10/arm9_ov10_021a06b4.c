
bool FUN_021a06b4(int param_1,int param_2)

{
  return (*(uint *)(param_1 + param_2 * 4 + 0x870) & 0x1000) != 0;
}


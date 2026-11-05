
bool FUN_037fea90(uint param_1,int param_2)

{
  return (1 << (param_1 & 0xff) & *(uint *)(param_2 * 4 + 0x27fff88)) != 0;
}


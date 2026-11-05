
void FUN_0202b2dc(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffdfffff | (param_2 & 1) << 0x15;
  return;
}


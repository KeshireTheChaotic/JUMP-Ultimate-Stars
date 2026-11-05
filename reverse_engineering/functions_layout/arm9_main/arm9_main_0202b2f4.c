
void FUN_0202b2f4(int param_1,uint param_2)

{
  *(uint *)(*(int *)(param_1 + 100) + 0x1c) =
       *(uint *)(*(int *)(param_1 + 100) + 0x1c) & 0xfffffdff | (param_2 & 1) << 9;
  return;
}



void FUN_020492e8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff00 | param_2 & 0xff;
  return;
}


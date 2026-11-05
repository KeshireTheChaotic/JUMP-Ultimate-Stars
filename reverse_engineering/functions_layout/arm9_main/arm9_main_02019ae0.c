
void FUN_02019ae0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffdffff | (param_2 & 1) << 0x11;
  return;
}


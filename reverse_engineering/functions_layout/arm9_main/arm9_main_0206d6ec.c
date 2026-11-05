
uint FUN_0206d6ec(uint param_1,uint *param_2)

{
  return *param_2 & 0x1f | (param_1 & 0x7ff) << 5 | (param_2[2] & 0x1f) << 10;
}



uint FUN_0206d6a4(uint param_1,uint *param_2)

{
  return param_1 & 0xffff | (param_2[2] & 0x1f) << 5 | (*param_2 & 0x1f) << 10;
}


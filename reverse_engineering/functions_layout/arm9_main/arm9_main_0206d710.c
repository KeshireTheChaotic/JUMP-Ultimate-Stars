
uint FUN_0206d710(uint param_1,uint *param_2)

{
  return *param_2 & 0x1f | (param_2[1] & 0x1f) << 5 | (param_1 & 0x3f) << 10;
}


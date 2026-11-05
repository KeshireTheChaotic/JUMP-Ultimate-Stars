
uint FUN_0214ce2c(uint param_1)

{
  return param_1 << 0x18 | (param_1 & 0xff00) << 8 | param_1 >> 0x18 | param_1 >> 8 & 0xff00;
}


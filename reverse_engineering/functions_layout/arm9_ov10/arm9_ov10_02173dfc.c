
uint FUN_02173dfc(uint param_1)

{
  if ((param_1 & 0x8000) != 0) {
    param_1 = param_1 & 0xffff7fff;
  }
  return param_1;
}


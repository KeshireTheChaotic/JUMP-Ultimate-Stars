
ushort FUN_02191220(ushort param_1)

{
  param_1 = param_1 ^ 0xffff;
  if (param_1 == 0) {
    param_1 = 0xffff;
  }
  return param_1;
}


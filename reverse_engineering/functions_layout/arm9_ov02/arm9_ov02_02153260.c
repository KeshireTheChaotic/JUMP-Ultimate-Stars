
void FUN_02153260(uint *param_1,int *param_2)

{
  *param_1 = (uint)((longlong)(int)*param_1 * (longlong)*param_2) >> 0xc |
             (int)((ulonglong)((longlong)(int)*param_1 * (longlong)*param_2) >> 0x20) << 0x14;
  return;
}


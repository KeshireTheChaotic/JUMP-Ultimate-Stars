
void FUN_037fc5d8(uint *param_1,uint param_2)

{
  if (DAT_038082c0 == 0) {
    FUN_037fc590(param_2);
  }
  else {
    FUN_037fca88(param_1,FUN_037fc590);
    param_1[1] = param_2;
    *param_1 = *param_1 | 0x80;
    param_1[0x12] = 1;
    OS_LoadContext(param_1);
  }
  return;
}


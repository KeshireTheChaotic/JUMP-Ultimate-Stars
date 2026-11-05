
void FUN_02166868(short *param_1,short *param_2,short *param_3)

{
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = *param_1 + *param_2;
  param_3[3] = param_1[1] + param_2[1];
  return;
}


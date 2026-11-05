
void FUN_020662cc(uint *param_1,int param_2)

{
  if ((param_2 != 0) && ((*param_1 & 3) != 0)) {
    param_1[4] = 1;
  }
  *(char *)*param_1 = (char)param_2;
  return;
}


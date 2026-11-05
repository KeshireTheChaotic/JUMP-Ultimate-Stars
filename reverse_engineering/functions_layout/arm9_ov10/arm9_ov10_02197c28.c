
int FUN_02197c28(int param_1,int param_2)

{
  while ((param_2 != 0 && (*(short *)(param_1 + (param_2 + -1) * 2) == 0))) {
    param_2 = param_2 + -1;
  }
  return param_2;
}



bool FUN_02153340(int param_1,int param_2)

{
  if (param_1 == 0) {
    return false;
  }
  return *(short *)(param_1 + param_2 * 2) == 0;
}


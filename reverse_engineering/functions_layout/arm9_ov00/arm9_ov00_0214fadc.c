
void FUN_0214fadc(int *param_1)

{
  int *piVar1;
  
  if ((char)param_1[7] == '\0') {
    if (*param_1 == 0) {
      return;
    }
    FUN_0214f464(*param_1,0);
    return;
  }
  if (param_1[3] != 0) {
    piVar1 = *(int **)(param_1[3] + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  if (param_1[4] != 0) {
    piVar1 = *(int **)(param_1[4] + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  if (param_1[5] == 0) {
    return;
  }
  piVar1 = *(int **)(param_1[5] + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  return;
}


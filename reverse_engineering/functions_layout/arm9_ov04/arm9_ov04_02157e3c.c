
void FUN_02157e3c(int param_1)

{
                    /* JUS-TAG source_file_inferred="JQuizMainMultiScore.cpp" */
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_021500f0();
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_021586b0();
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0206ae98();
  }
  FUN_0201b244(param_1);
  return;
}


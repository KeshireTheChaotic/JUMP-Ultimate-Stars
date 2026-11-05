
void FUN_0205dcc4(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
  if (*(int *)(param_1 + 0x120) == 0) {
    FUN_0205bff0();
    return;
  }
  return;
}


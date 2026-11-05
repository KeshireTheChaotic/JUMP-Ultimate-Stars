
void FUN_021b8ff8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xa0) != param_2) {
    *(int *)(param_1 + 0xa0) = param_2;
    FUN_021b8f70();
  }
  return;
}


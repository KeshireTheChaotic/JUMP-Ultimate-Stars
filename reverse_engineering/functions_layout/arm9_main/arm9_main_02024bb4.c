
void FUN_02024bb4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x60) != param_2) {
    *(int *)(param_1 + 0x60) = param_2;
  }
  return;
}


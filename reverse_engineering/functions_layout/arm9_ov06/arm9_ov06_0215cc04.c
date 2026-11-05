
void FUN_0215cc04(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 200) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    *(int *)(param_1 + 0x1c + param_2 * 4) = *(int *)(param_1 + 0x1c + param_2 * 4) + param_3;
  }
  return;
}


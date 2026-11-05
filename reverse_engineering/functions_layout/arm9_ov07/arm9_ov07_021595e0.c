
void FUN_021595e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x29) < '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


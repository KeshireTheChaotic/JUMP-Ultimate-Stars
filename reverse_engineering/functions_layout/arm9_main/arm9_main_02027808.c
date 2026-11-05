
void FUN_02027808(int param_1)

{
  if (*(int **)(param_1 + 0x30) == (int *)&DAT_020a11b8) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
  return;
}


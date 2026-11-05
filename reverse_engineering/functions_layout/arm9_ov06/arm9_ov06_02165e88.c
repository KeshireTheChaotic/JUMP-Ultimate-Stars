
void FUN_02165e88(int param_1,int param_2,int param_3)

{
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  if (*(char *)(param_1 + 200) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xac) == param_3) {
    *(int *)(param_1 + 0x1c + param_2 * 4) = *(int *)(param_1 + 0x1c + param_2 * 4) + 1;
  }
  return;
}


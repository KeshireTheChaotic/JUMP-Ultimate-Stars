
void FUN_021657a4(int param_1)

{
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x78) & 0x400000) == 0) {
    (**(code **)(*(int *)(param_1 + 0x30) + 0x10))();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x18))();
  return;
}


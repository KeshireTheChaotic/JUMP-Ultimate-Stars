
void FUN_021b0b70(int param_1,int param_2)

{
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(int *)(param_1 + 0x1c) = param_2;
    ALCollision::RegistCollision();
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x34) == *(int *)(param_2 + 0x34)) {
    *(int *)(param_1 + 0x1c) = param_2;
    return;
  }
  FUN_021b0aa0();
  *(int *)(param_1 + 0x1c) = param_2;
  ALCollision::RegistCollision(param_1);
  return;
}


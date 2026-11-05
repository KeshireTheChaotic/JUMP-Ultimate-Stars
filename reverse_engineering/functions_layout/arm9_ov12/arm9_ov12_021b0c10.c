
void FUN_021b0c10(int param_1,int param_2)

{
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  if (*(int *)(param_1 + 0x2c) != param_2) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_021b0aa0();
    }
    *(int *)(param_1 + 0x2c) = param_2;
    if (param_2 != 0) {
      ALCollision::RegistCollision(param_1);
    }
  }
  return;
}


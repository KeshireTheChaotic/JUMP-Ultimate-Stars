
void FUN_021b0ba0(int param_1,int param_2)

{
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  *(char *)(param_1 + 0x21) = (char)param_2;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x22) == '\0')) {
    ALCollision::RegistCollision();
    return;
  }
  if ((param_2 == 0) && (*(char *)(param_1 + 0x22) != '\0')) {
    FUN_021b0aa0();
  }
  return;
}



void FUN_021b0bd0(int param_1,undefined1 param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  *(undefined1 *)(param_1 + 0x20) = param_2;
  if ((*(char *)(param_1 + 0x22) == '\0') && (iVar1 = FUN_021b0c5c(), iVar1 != 0)) {
    ALCollision::RegistCollision(param_1);
    return;
  }
  if ((*(char *)(param_1 + 0x22) != '\0') && (iVar1 = FUN_021b0c5c(param_1), iVar1 == 0)) {
    FUN_021b0aa0(param_1);
  }
  return;
}



int FUN_021b0c5c(int param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  if (((*(char *)(param_1 + 0x21) == '\0') || (*(int *)(param_1 + 0x1c) == 0)) ||
     (*(int *)(param_1 + 0x2c) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  if (((iVar2 != 0) && (*(char *)(param_1 + 0x20) != '\0')) &&
     ((uVar1 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x10),
      -1 < (int)(uVar1 << 0x18) || (-1 < (int)(uVar1 << 0x1e))))) {
    iVar2 = 0;
  }
  return iVar2;
}


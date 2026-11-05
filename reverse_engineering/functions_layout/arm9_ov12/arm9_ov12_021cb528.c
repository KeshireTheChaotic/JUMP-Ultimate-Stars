
int FUN_021cb528(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    return -1;
  }
  if (*(short *)(iVar1 + 4) == -1) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40) + *(short *)(iVar1 + 4) * 8;
  }
  *(undefined2 *)(iVar1 + 2) = 1;
  return (iVar1 - *(int *)(param_1 + 0x40)) * 0x2000 >> 0x10;
}


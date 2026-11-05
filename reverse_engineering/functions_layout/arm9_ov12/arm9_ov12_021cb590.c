
void FUN_021cb590(int param_1,int param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  if (*(short *)(param_2 + 2) != 0) {
    *(short *)(param_2 + 2) = *(short *)(param_2 + 2) + 1;
    return;
  }
  iVar1 = (int)*(short *)(param_2 + 4);
  if (iVar1 == -1) {
    if (*(short *)(param_2 + 6) == -1) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x40) + *(short *)(param_2 + 6) * 8;
    }
  }
  else if (*(int *)(param_1 + 0x44) == param_2) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40) + iVar1 * 8;
    *(undefined2 *)(param_2 + 6) = 0xffff;
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar1 * 8 + 6) = *(undefined2 *)(param_2 + 6);
  }
  if (*(short *)(param_2 + 6) == -1) {
    if (*(short *)(param_2 + 4) == -1) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40) + *(short *)(param_2 + 4) * 8;
    }
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x40) + *(short *)(param_2 + 6) * 8 + 4) =
         *(undefined2 *)(param_2 + 4);
    if (*(int *)(param_1 + 0x48) == param_2) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x40) + *(short *)(param_2 + 6) * 8;
    }
  }
  *(undefined2 *)(param_2 + 2) = 1;
  return;
}


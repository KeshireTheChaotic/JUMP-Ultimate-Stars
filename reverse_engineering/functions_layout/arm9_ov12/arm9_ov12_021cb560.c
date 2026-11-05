
void FUN_021cb560(int param_1,int param_2)

{
  undefined2 uVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  *(undefined2 *)(param_2 + 2) = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    *(int *)(param_1 + 0x44) = param_2;
    uVar1 = 0xffff;
  }
  else {
    *(short *)(*(int *)(param_1 + 0x48) + 4) =
         (short)((uint)((param_2 - *(int *)(param_1 + 0x40)) * 0x2000) >> 0x10);
    uVar1 = (undefined2)((uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) >> 3);
  }
  *(undefined2 *)(param_2 + 6) = uVar1;
  *(int *)(param_1 + 0x48) = param_2;
  *(undefined2 *)(param_2 + 4) = 0xffff;
  return;
}


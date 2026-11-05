
void FUN_0214f108(int param_1)

{
                    /* JUS-TAG source_file_inferred="JQuizCommonWork.cpp" */
  if (*DAT_02161de8 != param_1) {
    return;
  }
  FUN_0214f29c();
  FUN_02074504(DAT_02161de8[0xe]);
  if (DAT_02161de8[0xf] != 0) {
    (**(code **)(**(int **)(DAT_02161de8[0xf] + 4) + 0xc))();
  }
  if ((int *)DAT_02161de8[0x12] != (int *)0x0) {
    (**(code **)(*(int *)DAT_02161de8[0x12] + 0xc))();
  }
  if ((int *)DAT_02161de8[0x13] != (int *)0x0) {
    (**(code **)(*(int *)DAT_02161de8[0x13] + 0xc))();
  }
  FUN_0201b244(DAT_02161de8);
  DAT_02161de8 = (int *)0x0;
  return;
}


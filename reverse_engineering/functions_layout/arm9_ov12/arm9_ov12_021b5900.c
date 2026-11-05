
void FUN_021b5900(int param_1,short param_2,short param_3)

{
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  if ((*(short *)(param_1 + 0xcc) != param_2) || (*(short *)(param_1 + 0xce) != param_3)) {
    *(short *)(param_1 + 0xcc) = param_2;
    *(short *)(param_1 + 0xce) = param_3;
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x40) = 1;
  }
  return;
}


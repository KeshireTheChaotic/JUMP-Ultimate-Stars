
void FUN_021b58c8(int param_1,short param_2)

{
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  if (*(short *)(param_1 + 0xcc) != param_2) {
    *(short *)(param_1 + 0xcc) = param_2;
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x40) = 1;
  }
  return;
}


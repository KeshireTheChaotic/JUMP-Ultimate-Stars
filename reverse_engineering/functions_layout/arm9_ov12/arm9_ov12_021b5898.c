
void FUN_021b5898(int param_1,undefined4 param_2)

{
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_020288a4();
  }
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 8))();
  }
  *(undefined1 *)(param_1 + 0xa9) = 0;
  return;
}


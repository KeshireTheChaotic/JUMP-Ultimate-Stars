
int * FUN_021b5338(undefined4 param_1,int param_2)

{
  uint uVar1;
  
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  uVar1 = 0;
  while( true ) {
    if (DAT_021d5190 <= uVar1) {
      return (int *)*DAT_021d518c;
    }
    if (param_2 == *(int *)DAT_021d518c[uVar1]) break;
    uVar1 = uVar1 + 1;
  }
  return (int *)DAT_021d518c[uVar1];
}


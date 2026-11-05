
void FUN_021b526c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  uVar2 = 0;
  while( true ) {
    if (DAT_021d5190 <= uVar2) {
      return;
    }
    piVar1 = *(int **)(DAT_021d518c + uVar2 * 4);
    if (param_1 == *piVar1) break;
    uVar2 = uVar2 + 1;
  }
  if (piVar1 != (int *)0x0) {
    FUN_021b8558(piVar1);
    FUN_0201b244(piVar1);
  }
  FUN_021b52bc(&DAT_021d518c);
  return;
}


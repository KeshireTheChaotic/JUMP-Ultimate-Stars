
void FUN_021b0938(void)

{
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  if (DAT_021d5134 != (int *)0x0) {
    (**(code **)(*DAT_021d5134 + 4))();
  }
  if (DAT_021d5120 != (int *)0x0) {
    (**(code **)(*DAT_021d5120 + 4))();
    DAT_021d5120 = (int *)0x0;
  }
  if (DAT_021d5128 != (int *)0x0) {
    (**(code **)(*DAT_021d5128 + 4))();
    DAT_021d5128 = (int *)0x0;
  }
  if (DAT_021d5130 != (int *)0x0) {
    (**(code **)(*DAT_021d5130 + 4))();
    DAT_021d5130 = (int *)0x0;
  }
  FUN_02031728();
  return;
}


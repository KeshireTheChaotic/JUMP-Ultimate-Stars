
void FUN_0208b784(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0214ccec != 0) {
    FUN_0208c080(0);
    (**(code **)(**(int **)(DAT_0214ccec + 0x28) + 8))();
    (**(code **)(**(int **)(DAT_0214ccec + 0x2c) + 8))();
    FUN_02089264(param_1);
    FUN_0208a6bc();
    iVar1 = DAT_0214ccec;
    if (DAT_0214ccec != 0) {
      FUN_0200b254(DAT_0214ccec + 0x18);
      FUN_0201b244(iVar1);
    }
    DAT_0214ccec = 0;
    DAT_0214cce0 = 0;
    DAT_0214cce2 = 0;
    FUN_02087980();
    DAT_020afeb8 = 0;
  }
  return;
}


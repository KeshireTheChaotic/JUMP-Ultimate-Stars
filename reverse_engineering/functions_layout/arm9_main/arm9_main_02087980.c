
void FUN_02087980(void)

{
  if (DAT_0214be24 != 0) {
    if (*(int **)(DAT_0214be24 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 0x10) + 8))();
    }
    if (*(int **)(DAT_0214be24 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 0x14) + 8))();
    }
    if (*(int **)(DAT_0214be24 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 8) + 0xc))();
    }
    if (*(int **)(DAT_0214be24 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 0xc) + 0xc))();
    }
    FUN_0201b244(DAT_0214be24);
    DAT_0214be24 = 0;
  }
  return;
}


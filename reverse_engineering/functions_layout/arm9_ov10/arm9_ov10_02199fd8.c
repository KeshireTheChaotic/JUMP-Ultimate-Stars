
void FUN_02199fd8(void)

{
  if (DAT_0214ccfc == 0) {
    return;
  }
  if (*(int **)(DAT_0214ccfc + 0x2aa4) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_0214ccfc + 0x2aa4) + 0xc))();
  }
  if (*(int **)(DAT_0214ccfc + 0x2aa8) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_0214ccfc + 0x2aa8) + 0xc))();
  }
  FUN_0201b244(DAT_0214ccfc);
  DAT_0214ccfc = 0;
  DAT_0214cd00 = DAT_0214cd00 & 0xfffffffd;
  return;
}


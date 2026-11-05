
void FUN_0215692c(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 5) = 3;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  FUN_0207342c(0x7c,6);
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02156be8);
  return;
}


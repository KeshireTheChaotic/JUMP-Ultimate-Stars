
void FUN_0215608c(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x221) = 1;
  while (*(char *)(param_1 + 0x220) != '\0') {
    (*DAT_020a0e18)();
  }
  DAT_020afc41 = 0;
  FUN_0206c5b4();
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 8))();
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_0207698c();
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_020763e0();
  }
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x214); iVar1 = iVar1 + 1) {
    FUN_02156918(iVar1 * 0x48 + param_1);
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 8))();
  }
  (**(code **)(**(int **)(param_1 + 300) + 8))();
  (**(code **)(**(int **)(param_1 + 0x124) + 8))();
  (**(code **)(**(int **)(param_1 + 0x13c) + 0xc))();
  FUN_0201b244(param_1);
  return;
}


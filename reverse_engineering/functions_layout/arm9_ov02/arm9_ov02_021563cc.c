
void FUN_021563cc(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0);
  *(undefined1 *)(*piVar1 + 0x58) = 1;
  *(undefined1 *)(*piVar1 + 0x59) = 2;
  FUN_0214d348(*piVar1,6);
  return;
}


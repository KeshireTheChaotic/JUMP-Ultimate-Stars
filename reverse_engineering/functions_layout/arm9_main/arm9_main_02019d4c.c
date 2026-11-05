
void FUN_02019d4c(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  piVar1 = *(int **)(param_2 + 0xc);
  *(int **)(param_1 + 0xc) = piVar1;
  (**(code **)(*piVar1 + 8))();
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (*(int **)(param_2 + 0x18) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_2 + 0x18) + 8))();
  return;
}



uint FUN_0201b76c(int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    return (uint)*(ushort *)(param_1 + 4);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  return uVar1;
}


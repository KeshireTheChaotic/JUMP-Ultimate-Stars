
void FUN_02163ae0(int *param_1)

{
  if ((*(uint *)(*(int *)(*param_1 + 0x10) + 0x40) & 0x80000000) == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0xfc))();
  return;
}


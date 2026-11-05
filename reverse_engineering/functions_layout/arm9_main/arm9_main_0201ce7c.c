
void FUN_0201ce7c(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
  *(undefined2 *)(param_2 + 6) = *(undefined2 *)(*(int *)(param_1 + 8) + 6);
  *(int *)(*(int *)(param_2 + 8) + 0xc) = param_2;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + ((int)(uint)*(ushort *)(param_2 + 6) >> 8) * 4 + 0xc) = param_2;
  return;
}


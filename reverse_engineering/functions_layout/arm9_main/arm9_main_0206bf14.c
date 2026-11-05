
void FUN_0206bf14(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x34);
    if ((*(uint *)(iVar1 + *(int *)(iVar1 + 0x70) * 4 + 0x18) & *(uint *)(param_1 + 100)) != 0) {
      FUN_0206bd14();
    }
  }
  return;
}


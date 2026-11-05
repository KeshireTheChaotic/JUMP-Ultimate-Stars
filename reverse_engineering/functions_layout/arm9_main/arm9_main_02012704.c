
undefined4 FUN_02012704(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 FUN_0206bf48(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + *(int *)(param_2 + 8) * 4 + 0x20);
  *(uint *)(iVar1 + 0xe4) = *(uint *)(param_2 + 4) | *(uint *)(iVar1 + 0xe4);
  return 1;
}


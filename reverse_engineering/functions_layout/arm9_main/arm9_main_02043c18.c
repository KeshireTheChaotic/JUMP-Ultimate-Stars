
undefined2 FUN_02043c18(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
    return *(undefined2 *)(iVar1 + (*(ushort *)(iVar1 + param_2 * 2) & 0xfffffffe));
  }
  return 0;
}


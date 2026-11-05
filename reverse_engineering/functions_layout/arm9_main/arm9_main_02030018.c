
int FUN_02030018(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  return (uint)*(ushort *)(param_1 + 10) + iVar1;
}


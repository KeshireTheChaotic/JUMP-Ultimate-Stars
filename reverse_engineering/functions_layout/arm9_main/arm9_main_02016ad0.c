
uint FUN_02016ad0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return (uint)*(ushort *)(param_1 + 2) * (uint)*(ushort *)((int)param_1 + 10) * iVar1 >> 3;
}


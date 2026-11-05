
void FUN_02038010(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 1U != (uint)*(ushort *)(param_1 + 2)) {
    iVar1 = param_1[1];
    FUN_02051890((param_2 + 1U) * iVar1 + *param_1,param_2 * iVar1 + *param_1,
                 iVar1 * (((uint)*(ushort *)(param_1 + 2) - param_2) + -1));
  }
  *(short *)(param_1 + 2) = (short)param_1[2] + -1;
  return;
}


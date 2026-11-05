
void FUN_0205e170(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    FUN_0205e240(param_1,param_3);
    return;
  }
  if (param_2 == *param_1) {
    FUN_0205e1e4(param_1,param_3);
    return;
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 10);
  iVar1 = *(int *)(param_2 + uVar2);
  *(int *)(param_3 + uVar2) = iVar1;
  *(int *)(param_3 + uVar2 + 4) = param_2;
  *(int *)(iVar1 + uVar2 + 4) = param_3;
  *(int *)(param_2 + (uint)*(ushort *)((int)param_1 + 10)) = param_3;
  *(short *)(param_1 + 2) = (short)param_1[2] + 1;
  return;
}


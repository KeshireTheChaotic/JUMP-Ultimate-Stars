
void FUN_0205e1e4(int *param_1,int param_2)

{
  ushort uVar1;
  
  if (*param_1 == 0) {
    FUN_0205e2a0();
    return;
  }
  uVar1 = *(ushort *)((int)param_1 + 10);
  *(undefined4 *)(param_2 + (uint)uVar1) = 0;
  *(int *)(param_2 + (uint)uVar1 + 4) = *param_1;
  *(int *)(*param_1 + (uint)*(ushort *)((int)param_1 + 10)) = param_2;
  *param_1 = param_2;
  *(short *)(param_1 + 2) = (short)param_1[2] + 1;
  return;
}


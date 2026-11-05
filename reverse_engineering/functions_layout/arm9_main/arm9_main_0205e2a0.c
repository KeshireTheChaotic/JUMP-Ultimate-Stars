
void FUN_0205e2a0(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)param_1 + 10);
  *(undefined4 *)(param_2 + (uint)uVar1 + 4) = 0;
  *(undefined4 *)(param_2 + (uint)uVar1) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  *(short *)(param_1 + 2) = (short)param_1[2] + 1;
  return;
}



void FUN_0205e9dc(int *param_1,int param_2)

{
  *param_1 = param_2 - ((int)(uint)*(ushort *)(param_2 + 2) >> 8 & 0x7fU);
  param_1[1] = *(int *)(param_2 + 4) + param_2 + 0x10;
  return;
}


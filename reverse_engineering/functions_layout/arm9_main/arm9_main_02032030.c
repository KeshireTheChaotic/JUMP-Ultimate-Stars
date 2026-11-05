
void FUN_02032030(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = param_2 << 0x12;
  iVar1 = FUN_0200d12c(param_2 << 0x12,(int)(*param_3 + ((uint)(*param_3 >> 5) >> 0x1a)) >> 6);
  *param_1 = iVar1;
  return;
}


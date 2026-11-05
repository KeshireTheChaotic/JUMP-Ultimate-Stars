
void FUN_02154e54(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 << 6;
  iVar1 = FUN_0200d12c(iVar1 << 6,(int)(*param_3 + ((uint)(*param_3 >> 5) >> 0x1a)) >> 6);
  *param_1 = iVar1;
  return;
}



void FUN_020852f4(uint *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  
  *param_1 = param_2 << 0xc;
  lVar1 = (longlong)(param_2 << 0xc) * (longlong)*param_3;
  *param_1 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  return;
}


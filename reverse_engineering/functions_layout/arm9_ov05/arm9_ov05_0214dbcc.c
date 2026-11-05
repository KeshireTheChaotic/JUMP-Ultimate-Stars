
int FUN_0214dbcc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = iVar1 + 1;
      *param_1 = *param_2;
      param_1[1] = (uint)*(ushort *)*param_2 + (char)((ushort *)*param_2)[4] * 0x400;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
  }
  return iVar1;
}


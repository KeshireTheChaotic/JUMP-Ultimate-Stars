
int FUN_0214d738(undefined4 *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (**(code **)(DAT_0214bd80 + 0x18e8))(*param_2);
      if (iVar1 != 0) {
        *param_1 = param_2;
        iVar2 = iVar2 + 1;
        param_1[1] = (uint)*param_2 + (uint)(byte)(&DAT_02092470)[(byte)param_2[2]] * 0x400;
        param_1 = param_1 + 2;
      }
      param_2 = param_2 + 6;
    }
  }
  return iVar2;
}



int FUN_02059d28(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_02050dd0(param_2 & (1 << (param_4 & 0xff)) - 1U);
  return (uint)*(ushort *)(param_1 + 0x810) * iVar1 + param_3;
}


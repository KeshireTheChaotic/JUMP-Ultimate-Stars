
int FUN_0202c5f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_8 [2];
  
  local_8[0] = param_4;
  (**(code **)(*param_1 + 0x30))(local_8,param_1,param_2);
  return (int)(local_8[0] + 0x800 + ((uint)(local_8[0] + 0x800 >> 0xb) >> 0x14)) >> 0xc;
}



void FUN_0214f8c4(undefined4 *param_1,int param_2)

{
  MIi_CpuClear16(0,param_2 + 0xc,0x20);
  *(short *)(param_2 + 10) = (short)*param_1;
  FUN_02051890(param_1 + 1,param_2 + 0xc,*(undefined2 *)(param_2 + 10));
  return;
}


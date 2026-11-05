
void FUN_0206a5b4(int param_1,int param_2)

{
  MIi_CpuClear16(0,param_1 + param_2 * 0x100,0x100);
  *(undefined1 *)(param_1 + param_2 * 0x100 + 0xe7) = 0xff;
  return;
}



void FUN_0205fb64(undefined4 *param_1,uint param_2)

{
  if (*(byte *)(param_1 + 3) == 4) {
    param_2 = param_2 | param_2 << 4;
    param_2 = param_2 | param_2 << 8;
    param_2 = param_2 | param_2 << 0x10;
  }
  else {
    param_2 = param_2 | param_2 << 8;
    param_2 = param_2 | param_2 << 0x10;
  }
  MIi_CpuClearFast(param_2,*param_1,
                   param_1[1] * param_1[2] * ((int)((uint)*(byte *)(param_1 + 3) * 0x40) >> 3));
  return;
}



void FUN_0202d950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  MIi_CpuCopy16(param_3,&local_1c,0xc);
  local_20 = local_1c << 0xc;
  FUN_02018ac8(&local_20,param_1 + 0x18);
  local_1c = (int)(local_20 + ((uint)(local_20 >> 0xb) >> 0x14)) >> 0xc;
  local_24 = local_18 << 0xc;
  FUN_02018ac8(&local_24,param_1 + 0x18);
  local_18 = (int)(local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) >> 0xc;
  local_28 = local_14 << 0xc;
  FUN_02018ac8(&local_28,param_1 + 0x18);
  local_14 = (int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0xc;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x24))(*(int **)(param_1 + 0x14),param_2,&local_1c);
  return;
}


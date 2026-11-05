
void FUN_02066f64(undefined4 param_1,int param_2,uint param_3)

{
  if ((DAT_0209dd40 == -1) || (param_3 < 0x1d)) {
    MIi_CpuCopy16(param_1,param_2 + 0x5000000,param_3);
    return;
  }
  FUN_02051504(DAT_0209dd40,param_1,param_2 + 0x5000000);
  return;
}


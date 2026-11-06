
void FUN_02066dfc(undefined4 param_1,int param_2,uint param_3)

{
  if ((DAT_0209dd40 == -1) || (param_3 < 0x31)) {
    MIi_CpuCopy32(param_1,param_2 + 0x7000400,param_3);
    return;
  }
  MI_DmaCopy32(DAT_0209dd40,param_1,param_2 + 0x7000400);
  return;
}


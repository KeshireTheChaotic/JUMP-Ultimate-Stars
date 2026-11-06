
void FUN_02066b90(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_02065dc0();
  if ((DAT_0209dd40 == -1) || (param_3 < 0x1d)) {
    MIi_CpuCopy16(param_1,iVar1 + param_2,param_3);
    return;
  }
  MI_DmaCopy16(DAT_0209dd40,param_1,iVar1 + param_2,param_3);
  return;
}


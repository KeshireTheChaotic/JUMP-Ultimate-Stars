
void FUN_02066b08(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_02065d24();
  if ((DAT_0209dd40 == -1) || (param_3 < 0x31)) {
    MIi_CpuCopy32(param_1,iVar1 + param_2,param_3);
    return;
  }
  MI_DmaCopy32(DAT_0209dd40,param_1,iVar1 + param_2,param_3);
  return;
}


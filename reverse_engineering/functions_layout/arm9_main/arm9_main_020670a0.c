
void FUN_020670a0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_020afbdc;
  if (DAT_020afbdc == 0) {
    iVar1 = DAT_020afbcc + param_2;
  }
  else if (param_2 + param_3 < DAT_020afbe0) {
    iVar1 = DAT_020afbcc + param_2;
  }
  else {
    if (param_2 < DAT_020afbe0) {
      uVar2 = DAT_020afbe0 - param_2;
      if ((DAT_0209dd40 == -1) || (uVar2 < 0x31)) {
        MIi_CpuCopy32(param_1,DAT_020afbcc + param_2,uVar2);
      }
      else {
        FUN_0205160c(DAT_0209dd40,param_1,DAT_020afbcc + param_2,uVar2);
      }
      if (DAT_0209dd40 == -1) {
        MIi_CpuCopy32(param_1 + uVar2,iVar1,param_3 - uVar2);
        return;
      }
      FUN_02051384(DAT_0209dd40,param_1 + uVar2,iVar1,param_3 - uVar2,0,0);
      return;
    }
    iVar1 = (DAT_020afbdc + param_2) - DAT_020afbe0;
  }
  if (DAT_0209dd40 == -1) {
    MIi_CpuCopy32(param_1,iVar1,param_3);
    return;
  }
  FUN_02051384(DAT_0209dd40,param_1,iVar1,param_3,0,0);
  return;
}


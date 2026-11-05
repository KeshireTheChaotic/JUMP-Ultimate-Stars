
void FUN_02166014(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_20 [12];
  
  iVar1 = *(int *)(&DAT_0216e838 + param_1 * 4);
  iVar2 = iVar1 + *(int *)(iVar1 + param_2 * 8 + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + param_2 * 8);
  MIi_CpuClear32(0,auStack_20,8);
  iVar1 = 0;
  if (uVar3 != 0) {
    do {
      MIi_CpuCopy16(iVar2,auStack_20,6);
      MIi_CpuCopy32(auStack_20,param_3,8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 6;
      param_3 = param_3 + 8;
    } while (iVar1 < (int)uVar3);
  }
  return;
}


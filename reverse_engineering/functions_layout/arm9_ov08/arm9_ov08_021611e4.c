
void FUN_021611e4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0216e7dc + 4 + param_2 * 2;
  iVar1 = 0;
  if (0 < param_4) {
    do {
      MIi_CpuCopy16(param_1,iVar2,param_3 << 1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x40;
      iVar2 = iVar2 + 0x40;
    } while (iVar1 < param_4);
  }
  return;
}


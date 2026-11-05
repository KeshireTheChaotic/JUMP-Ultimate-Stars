
bool FUN_02075a0c(int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  
  psVar4 = (short *)(*(int *)(param_1 + 4) + param_2 * 8);
  bVar1 = false;
  if (10 < param_2) {
    return false;
  }
  if (*psVar4 == 0) {
    iVar2 = FUN_020759e8(psVar4[2]);
    if (iVar2 == 1) {
      return false;
    }
  }
  else if ((*psVar4 == 1) && (uVar3 = FUN_020727ac(), (ushort)psVar4[1] <= uVar3)) {
    bVar1 = true;
  }
  if (bVar1) {
    *param_3 = (uint)(ushort)psVar4[2];
  }
  return bVar1;
}


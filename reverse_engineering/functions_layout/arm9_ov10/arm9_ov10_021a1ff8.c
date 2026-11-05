
void FUN_021a1ff8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  iVar2 = FUN_021a1f04();
  if (iVar2 == 0) {
    return;
  }
  psVar3 = (short *)FUN_02071050(param_2);
  iVar2 = 0;
  psVar4 = (short *)(param_1 + 8);
  do {
    if (9 < iVar2) {
      bVar1 = true;
LAB_021a2048:
      if (bVar1) {
        return;
      }
      FUN_0207102c(param_2,param_1 + 8);
      return;
    }
    if (*psVar3 != *psVar4) {
      bVar1 = false;
      goto LAB_021a2048;
    }
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 1;
    psVar4 = psVar4 + 1;
  } while( true );
}


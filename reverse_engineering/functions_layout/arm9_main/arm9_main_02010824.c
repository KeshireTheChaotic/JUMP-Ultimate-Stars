
void FUN_02010824(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  while( true ) {
    if (DAT_020a1544 <= uVar3) {
      return;
    }
    iVar1 = *(int *)(DAT_020a153c + uVar3 * DAT_020a1540);
    iVar2 = DAT_020a153c + uVar3 * DAT_020a1540;
    bVar4 = iVar1 == param_1;
    if (bVar4) {
      iVar1 = *(int *)(iVar2 + 4);
    }
    if (bVar4 && iVar1 == param_2) break;
    uVar3 = uVar3 + 1;
  }
  FUN_02038010(&DAT_020a153c,uVar3,iVar1,iVar2,param_4);
  return;
}


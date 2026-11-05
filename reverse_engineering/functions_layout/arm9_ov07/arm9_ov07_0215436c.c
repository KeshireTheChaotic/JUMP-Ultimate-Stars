
void FUN_0215436c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 4);
  psVar4 = (short *)(iVar3 + 0xa0);
  iVar1 = FUN_0214f898(param_1,0x31305053);
  iVar2 = FUN_0214f45c(psVar4);
  if ((iVar2 == 0) || (iVar2 = FUN_0214f474(psVar4), iVar2 == 0)) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    local_18 = (int)*(short *)(iVar3 + 0xa2) << 0xc;
    local_14 = (int)*psVar4 << 0xc;
    FUN_0214f218(param_1,&local_14,&local_18);
  }
  return;
}


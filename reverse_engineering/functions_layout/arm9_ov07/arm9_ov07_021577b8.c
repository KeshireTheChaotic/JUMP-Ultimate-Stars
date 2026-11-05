
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021577b8(int param_1)

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
    if (*(int *)(*(int *)(param_1 + 4) + 0x94) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0214f340();
    }
    if ((*(char *)(*(int *)(iVar1 + 4) + 0xa8) == '\0') && (_DAT_021d5160 <= DAT_02093c24)) {
      FUN_0207342c(0x78,3);
    }
    local_18 = (int)*(short *)(iVar3 + 0xa2) << 0xc;
    local_14 = (int)*psVar4 << 0xc;
    FUN_0214f218(param_1,&local_14,&local_18);
  }
  return;
}


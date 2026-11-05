
int FUN_021c4644(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int iStack_18;
  
  uVar2 = *(undefined4 *)(param_5 + 4);
  iStack_18 = param_4;
  FUN_021c3394();
  DAT_020a0dd0 = uVar2;
  FUN_020329ec(param_1);
  iVar1 = FUN_021acab4();
  local_1c = param_3 << 0xc;
  FUN_021bbde0(iVar1,&local_1c);
  if (param_2 != 0) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if (param_4 != 0) {
    FUN_021b87e0(param_4,iVar1);
    FUN_021c38d8(iVar1,param_4);
  }
  FUN_021bc03c();
  return iVar1;
}


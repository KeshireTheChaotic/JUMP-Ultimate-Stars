
int FUN_021656b0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  local_20 = param_4;
  DAT_020a0dd0 = uVar4;
  FUN_020329ec(0x886000);
  iVar2 = FUN_0214d37c();
  FUN_02023894(*(undefined4 *)(iVar2 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  local_20 = param_4 << 0xc;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x31305053;
  FUN_0214e6c0(iVar2,&local_20);
  FUN_0214f864(iVar2,param_5);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar3 = *(int **)(iVar2 + 4);
  if (param_3 == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(param_3 + 4));
  }
  piVar3 = *(int **)(iVar2 + 4);
  (**(code **)(**(int **)(param_3 + 4) + 0xb4))(*(int **)(param_3 + 4),piVar3);
  (**(code **)(*piVar3 + 0xc))();
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return iVar2;
}


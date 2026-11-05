
int FUN_02156d88(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_3 + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar5;
  FUN_02035c90(param_2);
  iVar2 = FUN_02156ce0();
  FUN_02036ab8();
  iVar3 = FUN_0214d498();
  (**(code **)(**(int **)(iVar3 + 4) + 0x130))(*(int **)(iVar3 + 4),param_1);
  if (iVar2 == 0) {
    piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
    (**(code **)(*piVar4 + 0x50))(piVar4,0,0);
  }
  else {
    piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
    (**(code **)(*piVar4 + 0x50))(piVar4,*(undefined4 *)(iVar2 + 4),0);
  }
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02034d7c(iVar2);
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return iVar3;
}


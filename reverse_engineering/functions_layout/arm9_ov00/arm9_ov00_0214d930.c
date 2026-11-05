
int FUN_0214d930(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
  piVar2 = (int *)FUN_02036ab8();
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  iVar3 = piVar2[6];
  (**(code **)(**(int **)(iVar3 + 4) + 0x130))(*(int **)(iVar3 + 4),param_2);
  if (param_3 == 0) {
    piVar2 = *(int **)(*(int *)(iVar3 + 4) + 100);
    (**(code **)(*piVar2 + 0x50))(piVar2,0,0);
  }
  else {
    piVar2 = *(int **)(*(int *)(iVar3 + 4) + 100);
    (**(code **)(*piVar2 + 0x50))(piVar2,*(undefined4 *)(param_3 + 4),0);
  }
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return iVar3;
}


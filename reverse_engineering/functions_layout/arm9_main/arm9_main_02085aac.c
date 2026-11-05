
void FUN_02085aac(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  undefined4 uStack_1c;
  
                    /* JUS-TAG source_file_inferred="BattleMapObj.cpp" */
  uVar4 = *(undefined4 *)(param_3 + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  uStack_1c = param_4;
  DAT_020a0dd0 = uVar4;
  if (param_2 == 0) {
    FUN_020329d4();
    iVar2 = FUN_02011b38();
  }
  else {
    FUN_020329ec(param_2);
    iVar2 = FUN_02011b38();
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),param_4);
  local_20 = param_5 << 0xc;
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_020839c0(param_1,iVar2);
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return;
}



int FUN_0215c9e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20 [3];
  
  iVar3 = 0;
  FUN_0203d0b4(*(undefined4 *)(param_1 + 4));
  FUN_0203d478(*(undefined4 *)(param_1 + 4),param_3);
  FUN_0203cfbc(*(undefined4 *)(param_1 + 4),0x20,0x20);
  (**(code **)(**(int **)(param_1 + 4) + 0x90))(*(int **)(param_1 + 4),param_4);
  local_20[0] = param_5 << 0xc;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),local_20);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x956) = 0;
  DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
  if (param_6 != 0) {
    piVar1 = (int *)FUN_02035c90(param_6);
    if (piVar1[0xe] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar3 = piVar1[0xe];
  }
  FUN_02036ab8();
  iVar2 = FUN_0214d47c();
  if (param_7 != 0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0x130))();
  }
  if (iVar3 != 0) {
    if (iVar3 == 0) {
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
    }
    else {
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(iVar3 + 4),0);
    }
  }
  local_20[1] = 0;
  local_20[2] = 0;
  FUN_0214e990(iVar2,local_20 + 2,local_20 + 1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  if (iVar3 != 0) {
    FUN_02034d7c(iVar3);
  }
  return iVar2;
}


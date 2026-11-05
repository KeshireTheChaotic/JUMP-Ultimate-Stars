
int FUN_02150f80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FUN_02150e78(param_3);
  FUN_02035c90(param_2);
  iVar1 = FUN_02150ee4();
  FUN_02036ab8();
  iVar2 = FUN_0214f340();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),param_1);
  if (iVar1 == 0) {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
  }
  else {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,*(undefined4 *)(iVar1 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  FUN_02034d7c(iVar1);
  FUN_02150eb4();
  return iVar2;
}


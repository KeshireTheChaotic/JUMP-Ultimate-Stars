
int FUN_02158c38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  FUN_0214f7f8(param_3);
  FUN_02035c90(param_2);
  iVar1 = FUN_02158558();
  FUN_02036ab8();
  iVar2 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),param_1);
  if (iVar1 == 0) {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
  }
  else {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,*(undefined4 *)(iVar1 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(iVar1);
  FUN_0214f834();
  return iVar2;
}


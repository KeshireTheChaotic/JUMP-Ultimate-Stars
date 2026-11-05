
int FUN_0214ec98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0214ed48(param_3);
  piVar1 = (int *)FUN_02035c90(param_2);
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  iVar3 = piVar1[0xe];
  FUN_02036ab8();
  iVar2 = FUN_0214ed84();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),param_1);
  if (iVar3 == 0) {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(iVar3 + 4),0);
  }
  FUN_02034d7c(iVar3);
  FUN_0214edac();
  return iVar2;
}


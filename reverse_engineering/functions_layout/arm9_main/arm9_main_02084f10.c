
int FUN_02084f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                undefined4 param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0206c498(param_3);
  piVar1 = (int *)FUN_02035e88(param_2);
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  iVar3 = piVar1[0xe];
  FUN_02036ab8();
  iVar2 = FUN_02011b38();
  (**(code **)(**(int **)(iVar2 + 4) + 0x134))(*(int **)(iVar2 + 4),param_1);
  if (iVar3 == 0) {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(iVar3 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  if (param_6 != '\0') {
    (**(code **)(**(int **)(iVar3 + 4) + 0x50))(*(int **)(iVar3 + 4),1);
  }
  *param_4 = iVar3;
  FUN_0206c514(iVar2,param_5);
  FUN_0206c54c();
  return iVar2;
}


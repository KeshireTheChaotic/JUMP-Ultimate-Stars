
int FUN_0201e6d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x28);
  iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,0,*(code **)(*piVar3 + 0x2c),param_4,param_4);
  iVar2 = (**(code **)(*piVar3 + 0x28))();
  return iVar1 + iVar2;
}


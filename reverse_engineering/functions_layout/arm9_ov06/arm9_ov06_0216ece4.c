
int FUN_0216ece4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0206c7fc(param_2,0,0,0,param_4);
  FUN_021544c8(iVar1,*(undefined4 *)(param_1 + 8));
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x5c))(piVar2,param_3);
  return iVar1;
}


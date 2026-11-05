
void FUN_02020590(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x28);
  iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  iVar2 = (**(code **)(*piVar3 + 0x28))();
  FUN_0201f0ec(iVar1 + iVar2,param_2);
  return;
}


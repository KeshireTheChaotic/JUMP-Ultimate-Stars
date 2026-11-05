
undefined4 FUN_0215594c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = (int *)(**(code **)(**(int **)(iVar3 + 0x68) + 0xd0))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(**(int **)(iVar3 + 0x68) + 0x14c))();
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,uVar2);
  return uVar2;
}


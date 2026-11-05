
undefined4 FUN_021b3e98(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xd0))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x14c))();
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,uVar2);
  return uVar2;
}


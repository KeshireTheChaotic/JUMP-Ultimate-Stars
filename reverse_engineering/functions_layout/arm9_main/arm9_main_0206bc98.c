
void FUN_0206bc98(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 0xc))();
  }
  piVar1 = (int *)FUN_02033410(param_2,0,0);
  if (piVar1[7] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  iVar2 = piVar1[7];
  *(int *)(param_1 + 4) = iVar2;
  piVar1 = *(int **)(iVar2 + 4);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,0);
  *(int *)(param_1 + 0xc) = *piVar1 + (int)piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
  uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,4);
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined2 *)(param_1 + 0x70) = 0;
  return;
}



undefined4 FUN_0203003c(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  piVar2 = *(int **)(param_1 + 0xc);
  if (param_2 < uVar1) {
    uVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,param_2);
    return uVar3;
  }
  iVar4 = (**(code **)(*piVar2 + 0x2c))();
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + (param_2 - iVar4) * 4);
}


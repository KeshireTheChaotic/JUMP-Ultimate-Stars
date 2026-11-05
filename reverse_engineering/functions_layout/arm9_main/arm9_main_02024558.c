
int * FUN_02024558(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == param_1[0x15]) {
    return param_1;
  }
  uVar3 = 0;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0xac))();
    if (iVar2 - 1U <= uVar3) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(param_1[0x1b] + uVar3 * param_1[0x1c]);
    if (param_2 == piVar1[0x15]) break;
    iVar2 = (**(code **)(*piVar1 + 0xa8))();
    if ((iVar2 != 0) &&
       (piVar1 = *(int **)(param_1[0x1b] + uVar3 * param_1[0x1c]),
       piVar1 = (int *)(**(code **)(*piVar1 + 0xb0))(piVar1,param_2), piVar1 != (int *)0x0)) {
      return piVar1;
    }
    uVar3 = uVar3 + 1;
  }
  return piVar1;
}


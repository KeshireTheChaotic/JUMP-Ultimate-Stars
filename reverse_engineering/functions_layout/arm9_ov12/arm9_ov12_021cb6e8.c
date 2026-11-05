
int * FUN_021cb6e8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  if (param_2 == iVar1) {
    return param_1;
  }
  piVar2 = (int *)param_1[0xd];
  while( true ) {
    if (piVar2 == param_1) {
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar2 + 0x4c))();
    if (param_2 == iVar1) break;
    *(short *)(piVar2 + 1) = (short)piVar2[1] + 1;
    piVar2 = (int *)piVar2[0xd];
  }
  return piVar2;
}


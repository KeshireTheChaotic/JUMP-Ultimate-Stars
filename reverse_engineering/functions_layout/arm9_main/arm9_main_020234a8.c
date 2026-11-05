
undefined4 FUN_020234a8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x38))();
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    piVar2 = (int *)puVar3[-3];
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2,param_2), iVar1 != 0)) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return 1;
}


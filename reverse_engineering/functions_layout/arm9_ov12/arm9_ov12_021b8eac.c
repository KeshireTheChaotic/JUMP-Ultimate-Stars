
void FUN_021b8eac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_021b6f30();
  (**(code **)(*piVar1 + 0x60))(piVar1,param_2);
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 300))(piVar1,param_2,300,*(code **)(*piVar1 + 300),param_4);
  }
  return;
}


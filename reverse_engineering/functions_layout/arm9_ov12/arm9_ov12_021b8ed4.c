
void FUN_021b8ed4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_021b6f30();
  (**(code **)(*piVar1 + 100))(piVar1,param_2);
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x130))(piVar1,param_2,0x130,*(code **)(*piVar1 + 0x130),param_4);
  }
  return;
}



void FUN_021b3ba4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == 0) {
    (**(code **)(*piVar1 + 0x158))(piVar1,0);
    return;
  }
  (**(code **)(*piVar1 + 0x158))
            (piVar1,*(undefined4 *)(param_2 + 4),0x158,*(code **)(*piVar1 + 0x158),param_4);
  return;
}



void FUN_02158194(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == 0) {
    (**(code **)(*piVar1 + 0x164))(piVar1,2);
    return;
  }
  (**(code **)(*piVar1 + 0x160))
            (piVar1,2,*(undefined4 *)(param_2 + 4),*(code **)(*piVar1 + 0x160),param_4);
  return;
}


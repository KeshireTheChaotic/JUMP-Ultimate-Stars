
void FUN_021b7744(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_020288a4();
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0xa0) == 0) {
      uVar1 = FUN_021b67a4();
      *(undefined4 *)(param_1 + 0xa0) = uVar1;
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      FUN_02028330(*(undefined4 *)(param_1 + 0xa0));
    }
    if (*(char *)(param_1 + 0xb0) != '\0') {
      *(int *)(*(int *)(param_1 + 0xa0) + 0x98) = param_1;
      return;
    }
  }
  return;
}


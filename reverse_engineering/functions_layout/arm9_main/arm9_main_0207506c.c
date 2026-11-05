
void FUN_0207506c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x8e) != '\0') {
    if (param_2 == 0) {
      FUN_020750d0(*(undefined4 *)(param_1 + 8),0,param_3,param_4,param_4);
    }
    else {
      uVar1 = FUN_02032748();
      FUN_020750d0(*(undefined4 *)(param_1 + 8),uVar1 >> 1);
    }
  }
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100);
  (**(code **)(*piVar2 + 0x5c))(piVar2,param_2);
  return;
}


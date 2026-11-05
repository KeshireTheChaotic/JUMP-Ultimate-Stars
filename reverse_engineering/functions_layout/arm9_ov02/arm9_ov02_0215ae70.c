
void FUN_0215ae70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,0);
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
  pcVar2 = *(code **)(*piVar1 + 0x50);
  (*pcVar2)(piVar1,*(undefined4 *)(param_2 + 4),param_3,pcVar2,param_4);
  return;
}


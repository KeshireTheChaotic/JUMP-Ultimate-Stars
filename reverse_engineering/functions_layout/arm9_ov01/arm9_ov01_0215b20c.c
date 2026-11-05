
void FUN_0215b20c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
  pcVar2 = *(code **)(*piVar1 + 0x60);
  (*pcVar2)(piVar1,*(undefined4 *)(param_2 + 4),pcVar2,param_4,param_4);
  return;
}


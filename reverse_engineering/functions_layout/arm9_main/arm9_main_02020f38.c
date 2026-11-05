
void FUN_02020f38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  piVar2 = *(int **)(param_1 + 4);
  FUN_02037ed8(piVar2 + 7,piVar1 + 8,param_3,param_4,param_4);
  (**(code **)(*piVar1 + 100))(piVar1,piVar2);
  (**(code **)(*piVar2 + 0x80))(piVar2,piVar1);
  return;
}



undefined4 FUN_0214d6b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 4);
  pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0xb4);
  uVar1 = (*pcVar2)(*(int **)(param_1 + 4),piVar3,pcVar2,param_4,param_4);
  (**(code **)(*piVar3 + 0xc))();
  return uVar1;
}


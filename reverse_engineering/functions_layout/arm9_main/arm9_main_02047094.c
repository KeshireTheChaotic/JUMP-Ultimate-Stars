
void FUN_02047094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0203341c(param_2,0,0,param_4,param_4);
  (**(code **)(**(int **)(param_1 + 100) + 0x5c))(*(int **)(param_1 + 100),piVar1);
  (**(code **)(*piVar1 + 0xc))();
  return;
}

